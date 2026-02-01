// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CancelAppListingsForUser.h"

USIK_CancelAppListingsForUser* USIK_CancelAppListingsForUser::CancelAppListingsForUser(const FString& Key,
    const int32& AppId, const int64& SteamId, bool bSynchronous)
{
    USIK_CancelAppListingsForUser* Node = NewObject<USIK_CancelAppListingsForUser>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_bSynchronous = bSynchronous;
    return Node;
}

void USIK_CancelAppListingsForUser::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconMarketService/CancelAppListingsForUser/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetBoolField("synchronous", Var_bSynchronous);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CancelAppListingsForUser::OnResponseReceived);
    Request->ProcessRequest();
}
