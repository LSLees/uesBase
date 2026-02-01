// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUGCFileDetails.h"

USIK_GetUGCFileDetails* USIK_GetUGCFileDetails::GetUGCFileDetails(const FString& Key, const int64& SteamId,
    const int64& UgcId, const int32& AppId)
{
    USIK_GetUGCFileDetails* Node = NewObject<USIK_GetUGCFileDetails>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_UgcId = UgcId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetUGCFileDetails::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamRemoteStorage/GetUGCFileDetails/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    if(Var_SteamId != -1)
    {
        JsonObject->SetNumberField("steamid", Var_SteamId);
    }
    JsonObject->SetNumberField("ugcid", Var_UgcId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("key", Var_Key);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUGCFileDetails::OnResponseReceived);
    Request->ProcessRequest();
}
