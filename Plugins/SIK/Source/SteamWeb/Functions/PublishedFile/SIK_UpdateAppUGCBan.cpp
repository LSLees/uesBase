// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpdateAppUGCBan.h"

USIK_UpdateAppUGCBan* USIK_UpdateAppUGCBan::UpdateAppUGCBan(const FString& Key, const int64& SteamId,
    const int32& AppId, const int32& ExpirationTime, const FString& Reason)
{
    USIK_UpdateAppUGCBan* Node = NewObject<USIK_UpdateAppUGCBan>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_ExpirationTime = ExpirationTime;
    Node->Var_Reason = Reason;
    return Node;
}

void USIK_UpdateAppUGCBan::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/UpdateAppUGCBan/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("expiration_time", Var_ExpirationTime);
    if(Var_Reason.Len() > 0)
    {
        JsonObject->SetStringField("reason", Var_Reason);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpdateAppUGCBan::OnResponseReceived);
    Request->ProcessRequest();
}
