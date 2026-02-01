// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetCommunityBadgeProgress.h"

USIK_GetCommunityBadgeProgress* USIK_GetCommunityBadgeProgress::GetCommunityBadgeProgress(const FString& Key,
    const int64& SteamId, const int32& BadgeId)
{
    USIK_GetCommunityBadgeProgress* Node = NewObject<USIK_GetCommunityBadgeProgress>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_BadgeId = BadgeId;
    return Node;
}

void USIK_GetCommunityBadgeProgress::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetCommunityBadgeProgress/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("badgeid", Var_BadgeId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetCommunityBadgeProgress::OnResponseReceived);
    Request->ProcessRequest();
}
