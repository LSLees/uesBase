// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetNewsForAppAuthed.h"

USIK_GetNewsForAppAuthed* USIK_GetNewsForAppAuthed::GetNewsForAppAuthed(const FString& Key, const int32& AppId,
    const int32& MaxLength, const int32& EndDate, const int32& Count, const FString& Feeds)
{
    USIK_GetNewsForAppAuthed* Node = NewObject<USIK_GetNewsForAppAuthed>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_MaxLength = MaxLength;
    Node->Var_EndDate = EndDate;
    Node->Var_Count = Count;
    Node->Var_Feeds = Feeds;
    return Node;
}

void USIK_GetNewsForAppAuthed::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamNews/GetNewsForAppAuthed/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_MaxLength != -1)
    {
        JsonObject->SetNumberField("maxlength", Var_MaxLength);
    }
    if(Var_EndDate != -1)
    {
        JsonObject->SetNumberField("enddate", Var_EndDate);
    }
    JsonObject->SetNumberField("count", Var_Count);
    if(!Var_Feeds.IsEmpty())
    {
        JsonObject->SetStringField("feeds", Var_Feeds);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetNewsForAppAuthed::OnResponseReceived);
    Request->ProcessRequest();
}
