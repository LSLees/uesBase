// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/InteractiveProcess.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSteamEditor, Log, All);
class FSteamEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void BuildProcessCompleted(int I, bool bArg);

private:
    void RegisterMenuExtensions();
    TSharedRef<SWidget> GenerateMenuContent();
    void HandleProcessOutput(const FString& String);
    void OpenSteamworksAdminPanel();
    void StartPackageProcess();
    void CreateSteamAppIdFileInPackagedFolder();
    FString GenerateAndWriteVdfFile();
    void ExtractAndOpenBuildID(const FString& LogLine);
    TSharedPtr<FInteractiveProcess> InteractiveProcess;
    TSharedPtr<FInteractiveProcess> InteractiveProcessLogin;
    float LastKnownPercentage = 0.0f;
    FString LastKnownSize = TEXT("0MB");
    FString CurrentStep;
    TSharedPtr<SNotificationItem> NotificationItem;
};
