// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_QueryFiles.h"

USIK_QueryFiles* USIK_QueryFiles::QueryFiles(const FString& Key, const int32& QueryType, const int32& Page,
    const FString& Cursor, const int32& NumPerPage, const int32& CreatorAppId, const int32& AppId,
    const FString& RequiredTags, const FString& ExcludedTags, const bool& MatchAllTags, const FString& RequiredFlags,
    const FString& OmittedFlags, const FString& SearchText, const int32& FileType, const int64& ChildPublishedFileId,
    const int32& Days, const bool& IncludeRecentVotesOnly, const int32& CacheMaxAgeSeconds, const int32& Language,
    const FString& RequiredKvTags, const bool& TotalOnly,
    const bool& IdsOnly, const bool& ReturnVoteData, const bool& ReturnTags, const bool& ReturnKvTags,
    const bool& ReturnPreviews, const bool& ReturnChildren, const bool& ReturnShortDescription,
    const bool& ReturnForSaleData, const bool& ReturnMetadata, const int32& ReturnPlaytimeStats)
{
    USIK_QueryFiles* Node = NewObject<USIK_QueryFiles>();
    Node->Var_Key = Key;
    Node->Var_QueryType = QueryType;
    Node->Var_Page = Page;
    Node->Var_Cursor = Cursor;
    Node->Var_NumPerPage = NumPerPage;
    Node->Var_CreatorAppId = CreatorAppId;
    Node->Var_AppId = AppId;
    Node->Var_RequiredTags = RequiredTags;
    Node->Var_ExcludedTags = ExcludedTags;
    Node->Var_MatchAllTags = MatchAllTags;
    Node->Var_RequiredFlags = RequiredFlags;
    Node->Var_OmittedFlags = OmittedFlags;
    Node->Var_SearchText = SearchText;
    Node->Var_FileType = FileType;
    Node->Var_ChildPublishedFileId = ChildPublishedFileId;
    Node->Var_Days = Days;
    Node->Var_IncludeRecentVotesOnly = IncludeRecentVotesOnly;
    Node->Var_CacheMaxAgeSeconds = CacheMaxAgeSeconds;
    Node->Var_Language = Language;
    Node->Var_RequiredKvTags = RequiredKvTags;
    Node->Var_TotalOnly = TotalOnly;
    Node->Var_IdsOnly = IdsOnly;
    Node->Var_ReturnVoteData = ReturnVoteData;
    Node->Var_ReturnTags = ReturnTags;
    Node->Var_ReturnKvTags = ReturnKvTags;
    Node->Var_ReturnPreviews = ReturnPreviews;
    Node->Var_ReturnChildren = ReturnChildren;
    Node->Var_ReturnShortDescription = ReturnShortDescription;
    Node->Var_ReturnForSaleData = ReturnForSaleData;
    Node->Var_ReturnMetadata = ReturnMetadata;
    Node->Var_ReturnPlaytimeStats = ReturnPlaytimeStats;
    return Node;
}

void USIK_QueryFiles::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/QueryFiles/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("query_type", Var_QueryType);
    JsonObject->SetNumberField("page", Var_Page);
    JsonObject->SetStringField("cursor", Var_Cursor);
    JsonObject->SetNumberField("numperpage", Var_NumPerPage);
    JsonObject->SetNumberField("creator_appid", Var_CreatorAppId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("requiredtags", Var_RequiredTags);
    JsonObject->SetStringField("excludedtags", Var_ExcludedTags);
    JsonObject->SetBoolField("match_all_tags", Var_MatchAllTags);
    JsonObject->SetStringField("required_flags", Var_RequiredFlags);
    JsonObject->SetStringField("omitted_flags", Var_OmittedFlags);
    JsonObject->SetStringField("search_text", Var_SearchText);
    JsonObject->SetNumberField("filetype", Var_FileType);
    JsonObject->SetNumberField("child_publishedfileid", Var_ChildPublishedFileId);
    JsonObject->SetNumberField("days", Var_Days);
    JsonObject->SetBoolField("include_recent_votes_only", Var_IncludeRecentVotesOnly);
    JsonObject->SetNumberField("cache_max_age_seconds", Var_CacheMaxAgeSeconds);
    JsonObject->SetNumberField("language", Var_Language);
    JsonObject->SetStringField("required_kv_tags", Var_RequiredKvTags);
    JsonObject->SetBoolField("totalonly", Var_TotalOnly);
    JsonObject->SetBoolField("ids_only", Var_IdsOnly);
    JsonObject->SetBoolField("return_vote_data", Var_ReturnVoteData);
    JsonObject->SetBoolField("return_tags", Var_ReturnTags);
    JsonObject->SetBoolField("return_kv_tags", Var_ReturnKvTags);
    JsonObject->SetBoolField("return_previews", Var_ReturnPreviews);
    JsonObject->SetBoolField("return_children", Var_ReturnChildren);
    JsonObject->SetBoolField("return_short_description", Var_ReturnShortDescription);
    JsonObject->SetBoolField("return_for_sale_data", Var_ReturnForSaleData);
    JsonObject->SetBoolField("return_metadata", Var_ReturnMetadata);
    JsonObject->SetNumberField("return_playtime_stats", Var_ReturnPlaytimeStats);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_QueryFiles::OnResponseReceived);
    Request->ProcessRequest();
}
