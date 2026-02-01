// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ResultSetSummary.h"

USIK_ResultSetSummary* USIK_ResultSetSummary::ResultSetSummary(const FString& Key, const int64& SteamId,
    const int32& AppId, const int32& TagCount, const int32& UserTagCount, const bool& HasAppAdminAccess,
    const int32& FileType, const FString& Tag0, const FString& UserTag0)
{
    USIK_ResultSetSummary* Node = NewObject<USIK_ResultSetSummary>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_TagCount = TagCount;
    Node->Var_UserTagCount = UserTagCount;
    Node->Var_HasAppAdminAccess = HasAppAdminAccess;
    Node->Var_FileType = FileType;
    Node->Var_Tag0 = Tag0;
    Node->Var_UserTag0 = UserTag0;
    return Node;
}

void USIK_ResultSetSummary::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamPublishedItemSearch/ResultSetSummary/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("tagcount", Var_TagCount);
    JsonObject->SetNumberField("usertagcount", Var_UserTagCount);
    JsonObject->SetBoolField("hasappadminaccess", Var_HasAppAdminAccess);
    if(Var_FileType != -1)
    {
        JsonObject->SetNumberField("fileType", Var_FileType);
    }
    if(!Var_Tag0.IsEmpty())
    {
        JsonObject->SetStringField("tag[0]", Var_Tag0);
    }
    if(!Var_UserTag0.IsEmpty())
    {
        JsonObject->SetStringField("usertag[0]", Var_UserTag0);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ResultSetSummary::OnResponseReceived);
    Request->ProcessRequest();
}
