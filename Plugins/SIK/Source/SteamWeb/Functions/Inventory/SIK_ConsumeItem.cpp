// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ConsumeItem.h"

USIK_ConsumeItem* USIK_ConsumeItem::ConsumeItem(const FString& Key, const int32& AppId, const int64& ItemId,
    const FString& Quantity, const int64& SteamId, const int64& RequestId)
{
    USIK_ConsumeItem* Node = NewObject<USIK_ConsumeItem>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ItemId = ItemId;
    Node->Var_Quantity = Quantity;
    Node->Var_SteamId = SteamId;
    Node->Var_RequestId = RequestId;
    return Node;
}

void USIK_ConsumeItem::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/ConsumeItem/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("itemid", Var_ItemId);
    JsonObject->SetStringField("quantity", Var_Quantity);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("requestid", Var_RequestId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ConsumeItem::OnResponseReceived);
    Request->ProcessRequest();
}
