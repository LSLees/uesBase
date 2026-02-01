// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_AddItem.h"

USIK_AddItem* USIK_AddItem::AddItem(const FString& Key, const int32& AppId, const TArray<int64>& ItemDefIds,
    const FString& ItemPropsJson, const int64& SteamId, const bool& Notify, const int64& RequestId,
    const bool& TradeRestriction)
{
    USIK_AddItem* Node = NewObject<USIK_AddItem>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ItemDefIds = ItemDefIds;
    Node->Var_ItemPropsJson = ItemPropsJson;
    Node->Var_SteamId = SteamId;
    Node->Var_Notify = Notify;
    Node->Var_RequestId = RequestId;
    Node->Var_TradeRestriction = TradeRestriction;
    return Node;
}

void USIK_AddItem::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/AddItem/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    for (int i = 0; i < Var_ItemDefIds.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("itemdefid[%d]"), i), Var_ItemDefIds[i]);
    }
    JsonObject->SetStringField("itempropsjson", Var_ItemPropsJson);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetBoolField("notify", Var_Notify);
    JsonObject->SetNumberField("requestid", Var_RequestId);
    JsonObject->SetBoolField("trade_restriction", Var_TradeRestriction);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_AddItem::OnResponseReceived);
    Request->ProcessRequest();
}
