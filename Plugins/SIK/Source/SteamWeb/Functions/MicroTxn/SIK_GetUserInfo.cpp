// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUserInfo.h"

USIK_GetUserInfo* USIK_GetUserInfo::GetUserInfo(const FString& Key, const int32& AppId, const int64& SteamId,
    const FString& IpAddress, bool bUseSandBox)
{
    USIK_GetUserInfo* Node = NewObject<USIK_GetUserInfo>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_IpAddress = IpAddress;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_GetUserInfo::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/GetUserInfo/v2/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_SteamId != -1)
    {
        JsonObject->SetStringField("steamid", FString::Printf(TEXT("%lld"), Var_SteamId));
    }
    if(!Var_IpAddress.IsEmpty())
    {
        JsonObject->SetStringField("ipaddress", Var_IpAddress);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUserInfo::OnResponseReceived);
    Request->ProcessRequest();
    
}
