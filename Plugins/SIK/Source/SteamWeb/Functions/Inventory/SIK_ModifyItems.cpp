// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ModifyItems.h"

USIK_ModifyItems* USIK_ModifyItems::ModifyItems(const FString& Key, const int32& AppId, const FString& InputJson,
    const int64& SteamId, const int32& Timestamp, const TArray<FSIK_ModifyItemUpdate>& Updates)
{
    USIK_ModifyItems* Node = NewObject<USIK_ModifyItems>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_InputJson = InputJson;
    Node->Var_SteamId = SteamId;
    Node->Var_Timestamp = Timestamp;
    Node->Var_Updates = Updates;
    return Node;
}

void USIK_ModifyItems::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/ModifyItems/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("input_json", Var_InputJson);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("timestamp", Var_Timestamp);
    TArray<TSharedPtr<FJsonValue>> UpdatesArray;
    for (int i = 0; i < Var_Updates.Num(); i++)
    {
        TSharedPtr<FJsonObject> UpdateObject = MakeShareable(new FJsonObject);
        UpdateObject->SetNumberField("itemid", Var_Updates[i].itemid);
        UpdateObject->SetStringField("property_name", Var_Updates[i].property_name);
        if (!Var_Updates[i].property_value_string.IsEmpty())
        {
            UpdateObject->SetStringField("property_value_string", Var_Updates[i].property_value_string);
        }
        if (Var_Updates[i].property_value_bool)
        {
            UpdateObject->SetBoolField("property_value_bool", Var_Updates[i].property_value_bool);
        }
        if (Var_Updates[i].property_value_int)
        {
            UpdateObject->SetNumberField("property_value_int", Var_Updates[i].property_value_int);
        }
        if (!Var_Updates[i].property_value_float.IsEmpty())
        {
            UpdateObject->SetStringField("property_value_float", Var_Updates[i].property_value_float);
        }
        if (Var_Updates[i].remove_property)
        {
            UpdateObject->SetBoolField("remove_property", Var_Updates[i].remove_property);
        }
        TSharedPtr<FJsonValueObject> UpdateValue = MakeShareable(new FJsonValueObject(UpdateObject));
        UpdatesArray.Add(UpdateValue);
    }
    JsonObject->SetArrayField("updates", UpdatesArray);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ModifyItems::OnResponseReceived);
    Request->ProcessRequest();
}
