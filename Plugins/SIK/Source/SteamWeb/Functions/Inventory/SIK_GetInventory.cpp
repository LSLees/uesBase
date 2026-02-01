// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetInventory.h"

USIK_GetInventory* USIK_GetInventory::GetInventory(const FString& Key, const int32& AppId, const int64& SteamId)
{
    USIK_GetInventory* Node = NewObject<USIK_GetInventory>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetInventory::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/GetInventory/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetInventory::OnResponseReceived);
    Request->ProcessRequest();
}
