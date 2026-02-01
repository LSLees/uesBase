// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CreateLobby.h"

USIK_CreateLobby* USIK_CreateLobby::CreateLobby(const FString& Key, const int32& AppId, const int32& MaxMembers,
    const int32& LobbyType, FSIK_CreateLobbyOptional OptionalSettings)
{
    USIK_CreateLobby* Node = NewObject<USIK_CreateLobby>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_MaxMembers = MaxMembers;
    Node->Var_LobbyType = LobbyType;
    Node->Var_OptionalSettings = OptionalSettings;
    return Node;
}
void USIK_CreateLobby::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ILobbyMatchmakingService/CreateLobby/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("max_members", Var_MaxMembers);
    JsonObject->SetNumberField("lobby_type", Var_LobbyType);
    if (!Var_OptionalSettings.LobbyName.IsEmpty())
    {
        JsonObject->SetStringField("lobby_name", Var_OptionalSettings.LobbyName);
    }
    if (!Var_OptionalSettings.InputJson.IsEmpty())
    {
        JsonObject->SetStringField("input_json", Var_OptionalSettings.InputJson);
    }
    if (!Var_OptionalSettings.LobbyMetadata.IsEmpty())
    {
        JsonObject->SetStringField("lobby_metadata", Var_OptionalSettings.LobbyMetadata);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CreateLobby::OnResponseReceived);
    Request->ProcessRequest();

}
