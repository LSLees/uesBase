// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpdateItemDefs.h"

USIK_UpdateItemDefs* USIK_UpdateItemDefs::UpdateItemDefs(const FString& Key, const int32& AppId,
    const TArray<FSIK_WebItemDef> ItemDefs)
{
    USIK_UpdateItemDefs* Node = NewObject<USIK_UpdateItemDefs>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ItemDefs = ItemDefs;
    return Node;
}

void USIK_UpdateItemDefs::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameInventory/UpdateItemDefs/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    TArray<TSharedPtr<FJsonValue>> ItemDefsArray;
    for (FSIK_WebItemDef ItemDef : Var_ItemDefs)
    {
        TSharedPtr<FJsonObject> ItemDefObject = MakeShareable(new FJsonObject);
        ItemDefObject->SetNumberField("appid", FCString::Atoi(*ItemDef.AppId));
        ItemDefObject->SetNumberField("itemdefid", FCString::Atoi(*ItemDef.ItemDefId));
        ItemDefObject->SetStringField("type", ItemDef.Type);
        ItemDefObject->SetStringField("display_type", ItemDef.DisplayType);
        ItemDefObject->SetStringField("name", ItemDef.Name);
        ItemDefObject->SetStringField("description", ItemDef.Description);
        ItemDefObject->SetStringField("background_color", ItemDef.BackgroundColor);
        ItemDefObject->SetBoolField("tradable", ItemDef.Tradable);
        ItemDefObject->SetBoolField("marketable", ItemDef.Marketable);
        ItemDefObject->SetBoolField("commodity", ItemDef.Commodity);
        ItemDefObject->SetStringField("tags", ItemDef.Tags);
        ItemDefsArray.Add(MakeShareable(new FJsonValueObject(ItemDefObject)));
    }
    JsonObject->SetArrayField("itemdefs", ItemDefsArray);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpdateItemDefs::OnResponseReceived);
    Request->ProcessRequest();
}
