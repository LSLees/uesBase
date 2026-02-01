// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAppBuilds.h"

USIK_GetAppBuilds* USIK_GetAppBuilds::GetAppBuilds(const FString& Key, const int32& AppId, const int32& Count)
{
    USIK_GetAppBuilds* Node = NewObject<USIK_GetAppBuilds>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Count = Count;
    return Node;
}

void USIK_GetAppBuilds::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetAppBuilds/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("count", Var_Count);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAppBuilds::OnResponseReceived);
    Request->ProcessRequest();
}
