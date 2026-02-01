// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ReportAbuse.h"

USIK_ReportAbuse* USIK_ReportAbuse::ReportAbuse(const FString& Key, const int64& SteamIdActor,
    const int64& SteamIdTarget, const int32& AppId, const int32& AbuseType, const int32& ContentType,
    const FString& Description, const int64& Gid)
{
    USIK_ReportAbuse* Node = NewObject<USIK_ReportAbuse>();
    Node->Var_Key = Key;
    Node->Var_SteamIdActor = SteamIdActor;
    Node->Var_SteamIdTarget = SteamIdTarget;
    Node->Var_AppId = AppId;
    Node->Var_AbuseType = AbuseType;
    Node->Var_ContentType = ContentType;
    Node->Var_Description = Description;
    Node->Var_Gid = Gid;
    return Node;
}

void USIK_ReportAbuse::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamCommunity/ReportAbuse/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamidActor", Var_SteamIdActor);
    JsonObject->SetNumberField("steamidTarget", Var_SteamIdTarget);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("abuseType", Var_AbuseType);
    JsonObject->SetNumberField("contentType", Var_ContentType);
    JsonObject->SetStringField("description", Var_Description);
    if (Var_Gid != -1)
    {
        JsonObject->SetNumberField("gid", Var_Gid);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ReportAbuse::OnResponseReceived);
    Request->ProcessRequest();
}
