// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_AddPromoItem.h"

USIK_AddPromoItem* USIK_AddPromoItem::AddPromoItem(const FString& Key, const int32& AppId, const int64& ItemDefId,
    const int64& SteamId, FSIK_AddPromoItemOptional Optional)
{
    USIK_AddPromoItem* Node = NewObject<USIK_AddPromoItem>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ItemDefId = ItemDefId;
    Node->Var_SteamId = SteamId;
    Node->Var_Optional = Optional;
    return Node;
}

void USIK_AddPromoItem::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/AddPromoItem/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("itemdefid", Var_ItemDefId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetBoolField("notify", Var_Optional.bNotify);
    if(Var_Optional.RequestId != -1)
    {
        JsonObject->SetNumberField("requestid", Var_Optional.RequestId);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_AddPromoItem::OnResponseReceived);
    Request->ProcessRequest();
}
