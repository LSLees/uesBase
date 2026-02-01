// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetQuantity.h"

USIK_GetQuantity* USIK_GetQuantity::GetQuantity(const FString& Key, const int32& AppId, const int64& SteamId,
    const TArray<int64>& ItemDefId, const bool& Force)
{
    USIK_GetQuantity* Node = NewObject<USIK_GetQuantity>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_ItemDefId = ItemDefId;
    Node->Var_Force = Force;
    return Node;
}

void USIK_GetQuantity::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/GetQuantity/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    for (int i = 0; i < Var_ItemDefId.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("itemdefid[%d]"), i), Var_ItemDefId[i]);
    }
    JsonObject->SetBoolField("force", Var_Force);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetQuantity::OnResponseReceived);
    Request->ProcessRequest();
}
