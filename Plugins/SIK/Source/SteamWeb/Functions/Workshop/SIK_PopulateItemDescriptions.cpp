// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_PopulateItemDescriptions.h"

USIK_PopulateItemDescriptions* USIK_PopulateItemDescriptions::PopulateItemDescriptions(const FString& Key,
    const int32& AppId, const FString& Languages)
{
    USIK_PopulateItemDescriptions* Node = NewObject<USIK_PopulateItemDescriptions>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Languages = Languages;
    return Node;
}

void USIK_PopulateItemDescriptions::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IWorkshopService/PopulateItemDescriptions/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("languages", Var_Languages);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_PopulateItemDescriptions::OnResponseReceived);
    Request->ProcessRequest();
}
