// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_AuthenticateUser.h"

USIK_AuthenticateUser* USIK_AuthenticateUser::AuthenticateUser(const int64& SteamId, const TArray<uint8>& SessionKey,
    const TArray<uint8>& EncryptedLoginKey)
{
    USIK_AuthenticateUser* Node = NewObject<USIK_AuthenticateUser>();
    Node->Var_SteamId = SteamId;
    Node->Var_SessionKey = SessionKey;
    Node->Var_EncryptedLoginKey = EncryptedLoginKey;
    return Node;
}

void USIK_AuthenticateUser::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserAuth/AuthenticateUser/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField(TEXT("sessionkey"), FBase64::Encode(Var_SessionKey));
    JsonObject->SetStringField(TEXT("encrypted_loginkey"), FBase64::Encode(Var_EncryptedLoginKey));
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_AuthenticateUser::OnResponseReceived);
    Request->ProcessRequest();
}
