// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_EnumerateUserSubscribedFiles.h"

USIK_EnumerateUserSubscribedFiles* USIK_EnumerateUserSubscribedFiles::EnumerateUserSubscribedFiles(const FString& Key,
    const int64& SteamId, const int32& AppId, const int32& ListType)
{
    USIK_EnumerateUserSubscribedFiles* Node = NewObject<USIK_EnumerateUserSubscribedFiles>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_ListType = ListType;
    return Node;
}

void USIK_EnumerateUserSubscribedFiles::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamRemoteStorage/EnumerateUserSubscribedFiles/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_ListType != -1)
    {
        JsonObject->SetNumberField("listtype", Var_ListType);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_EnumerateUserSubscribedFiles::OnResponseReceived);
    Request->ProcessRequest();
}
