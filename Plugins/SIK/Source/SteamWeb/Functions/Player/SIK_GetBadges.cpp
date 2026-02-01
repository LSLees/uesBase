// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetBadges.h"

USIK_GetBadges* USIK_GetBadges::GetBadges(const FString& Key, const int64& SteamId)
{
    USIK_GetBadges* Node = NewObject<USIK_GetBadges>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetBadges::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetBadges/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetBadges::OnResponseReceived);
    Request->ProcessRequest();
}
