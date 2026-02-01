// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetFinalizedContributors.h"

USIK_GetFinalizedContributors* USIK_GetFinalizedContributors::GetFinalizedContributors(const FString& Key,
    const int32& AppId, const int32& GameItemId)
{
    USIK_GetFinalizedContributors* Node = NewObject<USIK_GetFinalizedContributors>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_GameItemId = GameItemId;
    return Node;
}

void USIK_GetFinalizedContributors::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IWorkshopService/GetFinalizedContributors/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("gameitemid", Var_GameItemId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetFinalizedContributors::OnResponseReceived);
    Request->ProcessRequest();
}
