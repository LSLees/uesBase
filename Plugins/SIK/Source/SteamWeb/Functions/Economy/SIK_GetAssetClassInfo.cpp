// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAssetClassInfo.h"

USIK_GetAssetClassInfo* USIK_GetAssetClassInfo::GetAssetClassInfo(const FString& Key, const int32& AppId,
    const FString& Language, const int32& ClassCount, const int64& ClassId0, const int64& InstanceId0)
{
    USIK_GetAssetClassInfo* Node = NewObject<USIK_GetAssetClassInfo>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Language = Language;
    Node->Var_ClassCount = ClassCount;
    Node->Var_ClassId0 = ClassId0;
    Node->Var_InstanceId0 = InstanceId0;
    return Node;
}

void USIK_GetAssetClassInfo::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/GetAssetClassInfo/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("language", Var_Language);
    JsonObject->SetNumberField("class_count", Var_ClassCount);
    JsonObject->SetNumberField("classid0", Var_ClassId0);
    JsonObject->SetNumberField("instanceid0", Var_InstanceId0);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAssetClassInfo::OnResponseReceived);
    Request->ProcessRequest();
}
