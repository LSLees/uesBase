// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetMemo.h"

USIK_SetMemo* USIK_SetMemo::SetMemo(const FString& Key, const int64& SteamId, const FString& Memo)
{
    USIK_SetMemo* Node = NewObject<USIK_SetMemo>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_Memo = Memo;
    return Node;
}

void USIK_SetMemo::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/SetMemo/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetStringField("memo", Var_Memo);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetMemo::OnResponseReceived);
    Request->ProcessRequest();
}