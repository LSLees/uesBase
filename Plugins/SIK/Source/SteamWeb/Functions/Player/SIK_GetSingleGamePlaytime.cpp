// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetSingleGamePlaytime.h"

USIK_GetSingleGamePlaytime* USIK_GetSingleGamePlaytime::GetSingleGamePlaytime(const FString& Key, const int64& SteamId,
    const int32& AppId)
{
    USIK_GetSingleGamePlaytime* Node = NewObject<USIK_GetSingleGamePlaytime>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetSingleGamePlaytime::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetSingleGamePlaytime/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetSingleGamePlaytime::OnResponseReceived);
    Request->ProcessRequest();    
}
