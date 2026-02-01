// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetItemDefs.h"

USIK_GetItemDefs* USIK_GetItemDefs::GetItemDefs(const FString& Key, const int32& AppId, const FString& ModifiedSince,
    const TArray<int64>& ItemDefIds, const TArray<int64>& WorkshopIds, const int32& CacheMaxAgeSeconds)
{
    USIK_GetItemDefs* Node = NewObject<USIK_GetItemDefs>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ModifiedSince = ModifiedSince;
    Node->Var_ItemDefIds = ItemDefIds;
    Node->Var_WorkshopIds = WorkshopIds;
    Node->Var_CacheMaxAgeSeconds = CacheMaxAgeSeconds;
    return Node;
}  

void USIK_GetItemDefs::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/GetItemDefs/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("modifiedsince", Var_ModifiedSince);
    for (int i = 0; i < Var_ItemDefIds.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("itemdefids[%d]"), i), Var_ItemDefIds[i]);
    }
    for (int i = 0; i < Var_WorkshopIds.Num(); i++)
    {
        JsonObject->SetNumberField(FString::Printf(TEXT("workshopids[%d]"), i), Var_WorkshopIds[i]);
    }
    if (Var_CacheMaxAgeSeconds != -1)
    {
        JsonObject->SetNumberField("cache_max_age_seconds", Var_CacheMaxAgeSeconds);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetItemDefs::OnResponseReceived);
    Request->ProcessRequest();
}
