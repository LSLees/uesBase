// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ExchangeItem.h"

USIK_ExchangeItem* USIK_ExchangeItem::ExchangeItem(const FString& Key, const int32& AppId, const int64& SteamId,
    const TArray<int64>& MaterialsItemId, const TArray<int32>& MaterialsQuantity, const int64& OutputItemDefId)
{
    USIK_ExchangeItem* Node = NewObject<USIK_ExchangeItem>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_MaterialsItemId = MaterialsItemId;
    Node->Var_MaterialsQuantity = MaterialsQuantity;
    Node->Var_OutputItemDefId = OutputItemDefId;
    return Node;
}

void USIK_ExchangeItem::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/ExchangeItem/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    for (int i = 0; i < Var_MaterialsItemId.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("materialsitemid[%d]"), i), Var_MaterialsItemId[i]);
        JsonObject->SetNumberField(FString::Printf(TEXT("materialsquantity[%d]"), i), Var_MaterialsQuantity[i]);
    }
    JsonObject->SetNumberField("outputitemdefid", Var_OutputItemDefId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ExchangeItem::OnResponseReceived);
    Request->ProcessRequest();
}
