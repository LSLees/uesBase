// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SteamEditor.h"
#include "ToolMenus.h"
#include "Slate.h"
#include "SlateCore.h"
#include "EditorStyle.h"
#include "EditorStyleSet.h"
#include "ILauncher.h"
#include "ILauncherServicesModule.h"
#include "ISettingsModule.h"
#include "ITargetDeviceServicesModule.h"
#include "SteamIconStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/InteractiveProcess.h"
#include "SteamIntegrationKit/Settings/SIKSettings.h"

#define LOCTEXT_NAMESPACE "FSteamEditorModule"

DEFINE_LOG_CATEGORY(LogSteamEditor);

class FLauncherNotificationTask
{
public:
    FLauncherNotificationTask(TWeakPtr<SNotificationItem> InNotificationItemPtr, SNotificationItem::ECompletionState InCompletionState, const FText& InText)
        : CompletionState(InCompletionState)
        , NotificationItemPtr(InNotificationItemPtr)
        , Text(InText)
    { }

    void DoTask(ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
    {
        if (NotificationItemPtr.IsValid())
        {
            TSharedPtr<SNotificationItem> NotificationItem = NotificationItemPtr.Pin();
            NotificationItem->SetText(Text);
            NotificationItem->SetCompletionState(CompletionState);
            if (CompletionState == SNotificationItem::CS_Success || CompletionState == SNotificationItem::CS_Fail)
            {
                NotificationItem->ExpireAndFadeout();
            }
        }
    }

    static ESubsequentsMode::Type GetSubsequentsMode() { return ESubsequentsMode::TrackSubsequents; }
    ENamedThreads::Type GetDesiredThread() { return ENamedThreads::GameThread; }
    FORCEINLINE TStatId GetStatId() const
    {
        RETURN_QUICK_DECLARE_CYCLE_STAT(FLauncherNotificationTask, STATGROUP_TaskGraphTasks);
    }

private:
    SNotificationItem::ECompletionState CompletionState;
    TWeakPtr<SNotificationItem> NotificationItemPtr;
    FText Text;
};

void FSteamEditorModule::StartupModule()
{
    FSteamIconStyle::Initialize();
    // Register a function to be called when the menu system is initialized
    UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
        this, &FSteamEditorModule::RegisterMenuExtensions));
}

void FSteamEditorModule::ShutdownModule()
{
    // Unregister the startup function
    UToolMenus::UnRegisterStartupCallback(this);
 
    // Unregister all our menu extensions
    UToolMenus::UnregisterOwner(this);

    FSteamIconStyle::Shutdown();
}

void FSteamEditorModule::BuildProcessCompleted(int I, bool bArg)
{
    AsyncTask(ENamedThreads::GameThread, [&, I]()
    {
        if(I==0)
        {
            if (NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("PackageCompleted", "Package Completed"));
                NotificationItem->SetCompletionState(SNotificationItem::CS_Success);
                NotificationItem->ExpireAndFadeout();
            }
        }
        else
        {
            if (NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("PackageFailed", "Package Failed"));
                NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                NotificationItem->ExpireAndFadeout();
            }
        }
    });
}

void FSteamEditorModule::RegisterMenuExtensions()
{
    // Use the current object as the owner of the menus
    FToolMenuOwnerScoped OwnerScoped(this);
 
    // Extend the "ModesToolBar" section of the main toolbar
    UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
    FToolMenuSection& ToolbarSection = ToolbarMenu->FindOrAddSection("File");

    FSteamIconStyle Style = FSteamIconStyle();
    FUIAction ComboButtonAction;
    ComboButtonAction.ExecuteAction = FExecuteAction::CreateLambda([] {});
    FToolMenuSection &Section = ToolbarMenu->AddSection("SteamSection", LOCTEXT("SteamSection", "Steam"), FToolMenuInsert("File", EToolMenuInsertType::After));
    auto ComboButton = FToolMenuEntry::InitComboButton(
        "MyCustomDropdownName",
        ComboButtonAction,
        FOnGetContent::CreateRaw(this, &FSteamEditorModule::GenerateMenuContent),
        LOCTEXT("MyCustomDropdown", "Steam Integration Kit"),
        LOCTEXT("MyCustomDropdown_Tooltip", "Tooltip for my custom dropdown"),
        FSlateIcon(FSteamIconStyle::GetStyleSetName(),"Steam.PluginAction"),
        false,
        "MyCustomDropdownName"
    );
    ComboButton.StyleNameOverride = "CalloutToolbar";
    Section.AddEntry(ComboButton);
}


TSharedRef<SWidget> FSteamEditorModule::GenerateMenuContent()
{
    FMenuBuilder MenuBuilder(true, nullptr);

    MenuBuilder.AddMenuEntry(
        LOCTEXT("Option2", "Steamworks Admin Panel"),
        LOCTEXT("Option2_Tooltip", "Open the Steamworks Admin Panel in the browser"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.OpenInBrowser"),
        FUIAction(FExecuteAction::CreateRaw(this, &FSteamEditorModule::OpenSteamworksAdminPanel))
    );

    MenuBuilder.BeginSection(NAME_None, LOCTEXT("OneClickDeployHeader", "One Click Deploy"));

    MenuBuilder.AddMenuEntry(
        LOCTEXT("Option1", "Package and Deploy"),
        LOCTEXT("Option1_Tooltip", "Package and deploy the game to Steamworks"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "PlayWorld.RepeatLastLaunch"),
        FUIAction(FExecuteAction::CreateLambda([this]()
        {
            StartPackageProcess();
        }))
    );

    USIKSettings* Settings = GetMutableDefault<USIKSettings>();

    MenuBuilder.AddMenuEntry(
        LOCTEXT("Option3", "Login to Steamcmd"),
        LOCTEXT("Option3_Tooltip", "Login to Steamcmd to authenticate the user account"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "ShowFlagsMenu.SubMenu.Developer"),
        FUIAction(FExecuteAction::CreateLambda([this]()
        {
            // Read credentials directly from environment variables
            FString Username = FPlatformMisc::GetEnvironmentVariable(TEXT("SIK_STEAM_USERNAME"));
            FString Password = FPlatformMisc::GetEnvironmentVariable(TEXT("SIK_STEAM_PASSWORD"));
            
            if(Username.IsEmpty() || Password.IsEmpty())
            {
                FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("SteamCredentialsEmpty", "Please set environment variables SIK_STEAM_USERNAME and SIK_STEAM_PASSWORD with your Steam credentials."));
                return;
            }

            IPluginManager& PluginManager = IPluginManager::Get();
            FString PluginDir = PluginManager.FindPlugin("SteamIntegrationKit")->GetBaseDir();
            FString SteamworksExe = PluginDir / TEXT("Source/SteamSdk/tools/ContentBuilder/builder/steamcmd.exe");

            // Ensure the path uses backslashes as required by Windows
            SteamworksExe = SteamworksExe.Replace(TEXT("/"), TEXT("\\"));

            FString Command = FString::Printf(TEXT("/C start cmd.exe /K \"\"%s\" +login \"%s\" \"%s\"\""), *SteamworksExe, *Username, *Password);

            FPlatformProcess::CreateProc(TEXT("cmd.exe"), *Command, true, false, false, nullptr, 0, nullptr, nullptr);
        }))
    );



    MenuBuilder.AddMenuEntry(
        LOCTEXT("Option4", "Create/Reset Packaging Profile"),
        LOCTEXT("Option4_Tooltip", "Create or reset the packaging profile"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "MainFrame.PackageProject"),
        FUIAction(FExecuteAction::CreateLambda([]
        {
            USIKSettings* Settings = GetMutableDefault<USIKSettings>();
            ILauncherServicesModule& LauncherServicesModule = FModuleManager::LoadModuleChecked<ILauncherServicesModule>(TEXT("LauncherServices"));
            ILauncherProfileManagerRef LauncherProfileManagerRef = LauncherServicesModule.GetProfileManager();
            if (auto Profile = LauncherProfileManagerRef->FindProfile("SIKProfile"))
            {
                LauncherProfileManagerRef->RemoveProfile(Profile.ToSharedRef());
            }
            ILauncherProfilePtr LauncherProfilePtr = LauncherProfileManagerRef->AddNewProfile();
            LauncherProfilePtr->SetName("SIKProfile");
            LauncherProfilePtr->SetBuildConfiguration(EBuildConfiguration::Development);
            LauncherProfilePtr->SetDeploymentMode(ELauncherProfileDeploymentModes::DoNotDeploy);
            LauncherProfilePtr->SetCookMode(ELauncherProfileCookModes::ByTheBook);
            LauncherProfilePtr->AddCookedPlatform("Windows");
            for (const FString& Map : Settings->MapsToCook)
            {
                LauncherProfilePtr->AddCookedMap(Map);
            }
            LauncherProfilePtr->SetPackagingMode(ELauncherProfilePackagingModes::Locally);
            LauncherProfilePtr->SetLaunchMode(ELauncherProfileLaunchModes::DoNotLaunch);
            LauncherProfilePtr->SetArchive(true);            
            LauncherProfilePtr->SetArchiveDirectory(FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("SteamBuilds") / TEXT("Windows")));
            LauncherProfileManagerRef->SaveProfile(LauncherProfilePtr.ToSharedRef());
            LauncherProfileManagerRef->SaveSettings();
            FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ProfileCreated", "Packaging profile created successfully. Please configure the profile in Project Launcher as needed."));
        }))
    );

    MenuBuilder.BeginSection(NAME_None, LOCTEXT("PluginInfoHeader", "Plugin Info"));

    MenuBuilder.AddMenuEntry(
    LOCTEXT("Settings", "Settings"),
    LOCTEXT("Settings_Tooltip", "Open the plugin settings"),
    FSlateIcon(FAppStyle::GetAppStyleSetName(), "SourceControl.Actions.ChangeSettings"),
    FUIAction(FExecuteAction::CreateLambda([]
    {
        FModuleManager::LoadModuleChecked<ISettingsModule>("Settings").ShowViewer("Project", "Game", "Steam Integration Kit");
    }))
    );

    MenuBuilder.AddMenuEntry(
    LOCTEXT("Documentation", "Documentation"),
    LOCTEXT("PluginDocumentation_Tooltip", "Open the plugin documentation"),
    FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Documentation"),
    FUIAction(FExecuteAction::CreateLambda([]
    {
        UKismetSystemLibrary::LaunchURL("sik.betide.studio");
    }))
);

    MenuBuilder.AddMenuEntry(
        LOCTEXT("Marketplace", "Marketplace"),
        LOCTEXT("PluginMarketplace_Tooltip", "Open the plugin marketplace page"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "MainFrame.OpenMarketplace"),
        FUIAction(FExecuteAction::CreateLambda([]
        {
            UKismetSystemLibrary::LaunchURL("https://www.unrealengine.com/marketplace/en-US/profile/Betide+Studio");
        }))
    );
    
    return MenuBuilder.MakeWidget();
}


void FSteamEditorModule::HandleProcessOutput(const FString& String)
{
    AsyncTask(ENamedThreads::GameThread, [this, String]()
    {
        if(String.Contains("Successfully finished") || String.Contains("Successfully finished AppID"))
        {
            ExtractAndOpenBuildID(String);
        }
        else if(String.Contains("Logging in user"))
        {
            if(NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("LoggingIn", "Logging in to Steam..."));
            }
        }
        else if(String.Contains("Failed to commit build"))
        {
            if (NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("PackageFailed", "Package Failed"));
                NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                NotificationItem->ExpireAndFadeout();
            }
        }
        else
        {
            if(String.Contains("Scanning content"))
            {
                CurrentStep = "Scanning";
                LastKnownSize = TEXT("0MB");
                LastKnownPercentage = 0.0f;
            }
            if(String.Contains("Uploading content"))
            {
                CurrentStep = "Uploading";
                LastKnownSize = TEXT("0MB");
                LastKnownPercentage = 0.0f;
            }
       if (String.Contains(TEXT("MB (")) && String.Contains(TEXT("%)")))
       {
           FString SizeText;
           FString PercentageText;

           if (String.Split(TEXT("MB ("), &SizeText, &PercentageText))
           {
               PercentageText = PercentageText.LeftChop(2); // Removes "%)"

               // Update the last known values
               LastKnownSize = SizeText + TEXT("MB");
               LastKnownPercentage = FCString::Atof(*PercentageText);
               if (NotificationItem.IsValid())
               {
                   FText ProgressText = FText::Format(LOCTEXT("SteamUploadProgress", "{0}: {1}%"),
                                                      FText::FromString(CurrentStep),
                                                      FText::AsNumber(LastKnownPercentage));

                   NotificationItem->SetText(ProgressText);
               }
           }
           else
           {
               UE_LOG(LogSteamEditor, Error, TEXT("Failed to split the log line"));
           }
       }
       else
       {
           if (NotificationItem.IsValid())
           {
               FText ProgressText = FText::Format(LOCTEXT("SteamUploadInProgress", "{0}: {1}%"),
                                                  FText::FromString(CurrentStep),
                                                  FText::AsNumber(LastKnownPercentage));
            
               NotificationItem->SetText(ProgressText);
           }
       }
        }
    });
}

void FSteamEditorModule::OpenSteamworksAdminPanel()
{
    if(GetMutableDefault<USIKSettings>()->SteamAppId == 480 || GetMutableDefault<USIKSettings>()->SteamAppId == 0)
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("AppIdNotSet", "Please set a valid Steam App ID in the plugin settings."));
        return;
    }
    UKismetSystemLibrary::LaunchURL(FString::Printf(TEXT("https://partner.steamgames.com/apps/view/%d"), GetMutableDefault<USIKSettings>()->SteamAppId));
}

void FSteamEditorModule::StartPackageProcess()
{
    if(GetMutableDefault<USIKSettings>()->SteamAppId == 480 || GetMutableDefault<USIKSettings>()->SteamAppId == 0)
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("AppIdNotSet", "Please set a valid Steam App ID in the plugin settings."));
        return;
    }
    if(GetMutableDefault<USIKSettings>()->DepotIds.Num() == 0)
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("DepotIdsNotSet", "Please set at least one Depot ID in the plugin settings."));
        return;
    }
    if(GetMutableDefault<USIKSettings>()->DepotIds.Contains(0))
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("DepotIdZero", "Depot ID cannot be 0. Please set a valid Depot ID in the plugin settings."));
        return;
    }
    if (GEditor->LauncherWorker.IsValid() && GEditor->LauncherWorker->GetStatus() == ELauncherWorkerStatus::Busy)
    {
        return;
    }

    // Create the notification item
    FNotificationInfo Info(LOCTEXT("PackagingInProgress", "Packaging in progress..."));
    Info.bFireAndForget = false;
    Info.FadeOutDuration = 0.5f;
    Info.ExpireDuration = 3.0f;
    Info.Hyperlink = FSimpleDelegate::CreateLambda([]() { FGlobalTabmanager::Get()->TryInvokeTab(FName("OutputLog")); });
    Info.HyperlinkText = LOCTEXT("ShowOutputLogHyperlink", "Show Output Log");
    Info.ButtonDetails.Add(FNotificationButtonInfo(
        LOCTEXT("CancelPackage", "Cancel"),
        LOCTEXT("CancelPackage_Tooltip", "Cancel the packaging process"),
        FSimpleDelegate::CreateLambda([this]() {
            if (GEditor->LauncherWorker.IsValid())
            {
                GEditor->LauncherWorker->Cancel();
                AsyncTask(ENamedThreads::GameThread, [&]()
                {
                    if (NotificationItem.IsValid())
                    {
                        NotificationItem->SetText(LOCTEXT("PackageCanceled", "Packaging process canceled"));
                        NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                        NotificationItem->ExpireAndFadeout();
                    }
                });
            }
            if(InteractiveProcess.IsValid())
            {
                InteractiveProcess->Cancel();
            }
        })
    ));

    NotificationItem = FSlateNotificationManager::Get().AddNotification(Info);
    if (NotificationItem.IsValid())
    {
        NotificationItem->SetCompletionState(SNotificationItem::CS_Pending);
    }

    USIKSettings* Settings = GetMutableDefault<USIKSettings>();
    ILauncherServicesModule& LauncherServicesModule = FModuleManager::LoadModuleChecked<ILauncherServicesModule>(TEXT("LauncherServices"));
    ILauncherProfileManagerRef LauncherProfileManagerRef = LauncherServicesModule.GetProfileManager();
    auto LauncherProfilePtr = LauncherProfileManagerRef->FindProfile("SIKProfile");
    if (!LauncherProfilePtr.IsValid())
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ProfileNotCreated", "Packaging profile not created. Please create a profile first."));
        AsyncTask(ENamedThreads::GameThread, [&]()
        {
            if (NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("PackageCanceled", "Packaging process canceled"));
                NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                NotificationItem->ExpireAndFadeout();
            }
        });
        return;
    }
    if(!LauncherProfilePtr.Get()->IsValidForLaunch())
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ProfileNotValid", "Packaging profile is not valid for launch. Please configure the profile in Project Launcher as needed."));
        AsyncTask(ENamedThreads::GameThread, [&]()
        {
            if (NotificationItem.IsValid())
            {
                NotificationItem->SetText(LOCTEXT("PackageCanceled", "Packaging process canceled"));
                NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                NotificationItem->ExpireAndFadeout();
            }
        });
        return;
    }
    FString ArchiveDirectory = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("SteamBuilds") / TEXT("Windows"));
    if (FPaths::DirectoryExists(ArchiveDirectory))
    {
        IFileManager& FileManager = IFileManager::Get();
        FileManager.DeleteDirectory(*ArchiveDirectory, false, true);
    }
    ILauncherRef LauncherRef = LauncherServicesModule.CreateLauncher();
    ITargetDeviceServicesModule& TargetDeviceServicesModule = FModuleManager::LoadModuleChecked<ITargetDeviceServicesModule>("TargetDeviceServices");
    GEditor->LauncherWorker = LauncherRef->Launch(TargetDeviceServicesModule.GetDeviceProxyManager(), LauncherProfilePtr.ToSharedRef());

    GEditor->LauncherWorker->OnOutputReceived().AddLambda([](const FString& String) {
        UE_LOG(LogSteamEditor, Log, TEXT("%s"), *String);
    });

    GEditor->LauncherWorker->OnStageStarted().AddLambda([](const FString& String) {
    });

    GEditor->LauncherWorker->OnCanceled().AddLambda([this](double X)
    {
        AsyncTask(ENamedThreads::GameThread, [&]()
        {
            if (NotificationItem.IsValid())
            {
                AsyncTask(ENamedThreads::GameThread, [&]()
                {
                    NotificationItem->SetText(LOCTEXT("PackageCanceled", "Packaging process canceled"));
                    NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                    NotificationItem->ExpireAndFadeout();
                });
            }
        });

    });

    GEditor->LauncherWorker->OnCompleted().AddLambda([this, Settings](bool bArg, double X, int I)
    {
        if (bArg)
        {
            CreateSteamAppIdFileInPackagedFolder();
            IPluginManager& PluginManager = IPluginManager::Get();
            FString PluginDir = PluginManager.FindPlugin("SteamIntegrationKit")->GetBaseDir();
            FString SteamworksDir = PluginDir / TEXT("Source/SteamSdk/tools/ContentBuilder/builder");
            FString SteamworksExe = SteamworksDir / TEXT("steamcmd.exe");
            // Read credentials directly from environment variables
            FString Username = FPlatformMisc::GetEnvironmentVariable(TEXT("SIK_STEAM_USERNAME"));
            FString Password = FPlatformMisc::GetEnvironmentVariable(TEXT("SIK_STEAM_PASSWORD"));
            
            if(Username.IsEmpty() || Password.IsEmpty())
            {
                UE_LOG(LogTemp, Error, TEXT("Steam credentials not found. Please set environment variables SIK_STEAM_USERNAME and SIK_STEAM_PASSWORD."));
                return;
            }
            
            FString ParametersForSteamworks = FString::Printf(TEXT("+login %s %s +run_app_build \"%s\" +logoff +quit"), *Username, *Password, *GenerateAndWriteVdfFile());
            InteractiveProcess = MakeShareable(new FInteractiveProcess(*SteamworksExe, ParametersForSteamworks, false, true));
            InteractiveProcess->OnCompleted().BindRaw(this, &FSteamEditorModule::BuildProcessCompleted);
            InteractiveProcess->OnOutput().BindRaw(this, &FSteamEditorModule::HandleProcessOutput);
            InteractiveProcess->Launch();
        }
        else
        {
            AsyncTask(ENamedThreads::GameThread, [&]()
            {
                if (NotificationItem.IsValid())
                {
                    NotificationItem->SetText(LOCTEXT("Package Failed", "Package Failed"));
                    NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
                    NotificationItem->ExpireAndFadeout();
                }
            });
        }
    });
}

void FSteamEditorModule::CreateSteamAppIdFileInPackagedFolder()
{
    FString PackagedDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("SteamBuilds") / TEXT("Windows"));
    FString SteamAppIdFilePath = FPaths::Combine(PackagedDir, TEXT("steam_appid.txt"));

    if (!FPaths::FileExists(SteamAppIdFilePath))
    {
        USIKSettings* Settings = GetMutableDefault<USIKSettings>();
        FString SteamAppId = FString::FromInt(Settings->SteamAppId);

        if (FFileHelper::SaveStringToFile(SteamAppId, *SteamAppIdFilePath))
        {
            UE_LOG(LogSteamEditor, Log, TEXT("steam_appid.txt created successfully with App ID: %s"), *SteamAppId);
        }
        else
        {
            UE_LOG(LogSteamEditor, Error, TEXT("Failed to create steam_appid.txt"));
        }
    }
    else
    {
        UE_LOG(LogSteamEditor, Log, TEXT("steam_appid.txt already exists at: %s"), *SteamAppIdFilePath);
    }
}


FString FSteamEditorModule::GenerateAndWriteVdfFile()
{
    AsyncTask(ENamedThreads::GameThread, [&]()
    {
        if (NotificationItem.IsValid())
        {
            NotificationItem->SetText(LOCTEXT("CreatingVdfFile", "Creating VDF file..."));
        }
    });
    USIKSettings* Settings = GetMutableDefault<USIKSettings>();

    // Define variables
    FString AppID = FString::FromInt(Settings->SteamAppId);
    FString ContentRootPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("SteamBuilds") / TEXT("Windows"));
    FString BuildOutputPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / TEXT("SteamBuilds"));
    FString CustomVdfFilePath = FPaths::Combine(BuildOutputPath, TEXT("custom_build.vdf"));
    
    if (FPaths::FileExists(CustomVdfFilePath))
    {
        UE_LOG(LogSteamEditor, Warning, TEXT("Custom VDF file exists at: %s"), *CustomVdfFilePath);
        return CustomVdfFilePath;
    }
    
    // Sample depot array
    TArray<FString> DepotIDs;
    for(int a = 0; a < Settings->DepotIds.Num(); a++)
    {
        DepotIDs.Add(FString::FromInt(Settings->DepotIds[a]));
    }

    // Generate the VDF content
    FString VdfContent = FString::Printf(
        TEXT("\"appbuild\"\n")
        TEXT("{\n")
        TEXT("\t\"appid\" \"%s\"\n")
        TEXT("\t\"desc\" \"EIK Auto Build\"\n")
        TEXT("\t\"buildoutput\" \"%s\"\n")
        TEXT("\t\"contentroot\" \"%s\"\n")
        TEXT("\t\"setlive\" \"%s\"\n")
        TEXT("\t\"depots\"\n")
        TEXT("\t{\n"),
        *AppID,
        *BuildOutputPath,
        *ContentRootPath,
        *Settings->BranchName
    );

    // Loop through the depot array and add entries
    for (const FString& DepotID : DepotIDs)
    {
        VdfContent += FString::Printf(
            TEXT("\t\t\"%s\"\n")
            TEXT("\t\t{\n")
            TEXT("\t\t\t\"FileMapping\"\n")
            TEXT("\t\t\t{\n")
            TEXT("\t\t\t\t\"LocalPath\" \"*\"\n")
            TEXT("\t\t\t\t\"DepotPath\" \".\"\n")
            TEXT("\t\t\t\t\"recursive\" \"1\"\n")
            TEXT("\t\t\t}\n")
            TEXT("\t\t}\n"),
            *DepotID
        );
    }
    
    // Close the depots and appbuild sections
    VdfContent += TEXT("\t}\n}\n");

    // Define the VDF file path
    FString VdfFilePath = FPaths::Combine(BuildOutputPath, TEXT("app_build.vdf"));

    // Write the VDF content to the file
    if (FFileHelper::SaveStringToFile(VdfContent, *VdfFilePath))
    {
        UE_LOG(LogSteamEditor, Warning, TEXT("VDF file created at: %s"), *VdfFilePath);
    }
    else
    {
        UE_LOG(LogSteamEditor, Error, TEXT("Failed to create VDF file at: %s"), *VdfFilePath);
    }
    return VdfFilePath;
}

void FSteamEditorModule::ExtractAndOpenBuildID(const FString& LogLine)
{
    // Define the regex pattern to match the BuildID
    const FRegexPattern Pattern(TEXT(R"(\bBuildID\s(\d+)\b)"));
    FRegexMatcher Matcher(Pattern, LogLine);

    FString BuildID;

    // Search the log line for the pattern
    if (Matcher.FindNext())
    {
        // Extract the BuildID
        BuildID = Matcher.GetCaptureGroup(1);
        UE_LOG(LogSteamEditor, Warning, TEXT("Extracted BuildID: %s"), *BuildID);

        // Construct the URL to open the builds page
        FString BuildURL = FString::Printf(TEXT("https://partner.steamgames.com/apps/builddetails/%s/%s"), *FString::FromInt(GetMutableDefault<USIKSettings>()->SteamAppId), *BuildID);
        
        UKismetSystemLibrary::LaunchURL(BuildURL);
    }
    else
    {
        UE_LOG(LogSteamEditor, Error, TEXT("Failed to extract BuildID from log line."));
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSteamEditorModule, SteamEditor)
