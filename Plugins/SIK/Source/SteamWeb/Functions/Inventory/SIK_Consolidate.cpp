// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_Consolidate.h"

USIK_Consolidate* USIK_Consolidate::Consolidate(const FString& Key, const int32& AppId, const int64& SteamId,
    const TArray<int64>& ItemDefIds, const bool& Force)
{
    USIK_Consolidate* Node = NewObject<USIK_Consolidate>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_ItemDefIds = ItemDefIds;
    Node->Var_Force = Force;
    return Node;
}

void USIK_Consolidate::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/Consolidate/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    for (int i = 0; i < Var_ItemDefIds.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("itemdefid[%d]"), i), Var_ItemDefIds[i]);
    }
    JsonObject->SetBoolField("force", Var_Force);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_Consolidate::OnResponseReceived);
    Request->ProcessRequest();
}
