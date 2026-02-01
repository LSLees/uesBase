// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamIconStyle.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FSteamIconStyle::StyleInstance = nullptr;

void FSteamIconStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSteamIconStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSteamIconStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SteamStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FSteamIconStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("SteamStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("SteamIntegrationKit")->GetBaseDir() / TEXT("Resources"));

	Style->Set("Steam.PluginAction", new IMAGE_BRUSH(TEXT("PlaceholderButtonIcon"), Icon20x20));
	return Style;
}

void FSteamIconStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSteamIconStyle::Get()
{
	return *StyleInstance;
}
