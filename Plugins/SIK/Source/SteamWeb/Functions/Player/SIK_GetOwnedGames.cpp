// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetOwnedGames.h"

USIK_GetOwnedGames* USIK_GetOwnedGames::GetOwnedGames(const FString& Key, const int64& SteamId,
    const bool& IncludeAppInfo, const bool& IncludePlayedFreeGames, const int32& AppIdsFilter)
{
    USIK_GetOwnedGames* Node = NewObject<USIK_GetOwnedGames>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_IncludeAppInfo = IncludeAppInfo;
    Node->Var_IncludePlayedFreeGames = IncludePlayedFreeGames;
    Node->Var_AppIdsFilter = AppIdsFilter;
    return Node;
}

void USIK_GetOwnedGames::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetOwnedGames/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetBoolField("include_appinfo", Var_IncludeAppInfo);
    JsonObject->SetBoolField("include_played_free_games", Var_IncludePlayedFreeGames);
    JsonObject->SetNumberField("appids_filter", Var_AppIdsFilter);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetOwnedGames::OnResponseReceived);
    Request->ProcessRequest();
}
