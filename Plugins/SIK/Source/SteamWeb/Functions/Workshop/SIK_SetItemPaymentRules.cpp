// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetItemPaymentRules.h"

USIK_SetItemPaymentRules* USIK_SetItemPaymentRules::SetItemPaymentRules(const FString& Key, const int32& AppId,
    const int32& GameItemId, const FString& AssociatedWorkshopFiles, const FString& PartnerAccounts,
    const bool& ValidateOnly, const bool& MakeWorkshopFilesSubscribable)
{
    USIK_SetItemPaymentRules* Node = NewObject<USIK_SetItemPaymentRules>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_GameItemId = GameItemId;
    Node->Var_AssociatedWorkshopFiles = AssociatedWorkshopFiles;
    Node->Var_PartnerAccounts = PartnerAccounts;
    Node->Var_ValidateOnly = ValidateOnly;
    Node->Var_MakeWorkshopFilesSubscribable = MakeWorkshopFilesSubscribable;
    return Node;
}

void USIK_SetItemPaymentRules::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IWorkshopService/SetItemPaymentRules/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("gameitemid", Var_GameItemId);
    JsonObject->SetStringField("associated_workshop_files", Var_AssociatedWorkshopFiles);
    JsonObject->SetStringField("partner_accounts", Var_PartnerAccounts);
    JsonObject->SetBoolField("validate_only", Var_ValidateOnly);
    JsonObject->SetBoolField("make_workshop_files_subscribable", Var_MakeWorkshopFilesSubscribable);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetItemPaymentRules::OnResponseReceived);
    Request->ProcessRequest();
}
