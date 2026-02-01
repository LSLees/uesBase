// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAssetID.h"

USIK_GetAssetID* USIK_GetAssetID::GetAssetID(const FString& Key, const int32& AppId, const int64& ListingId)
{
    USIK_GetAssetID* Node = NewObject<USIK_GetAssetID>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_ListingId = ListingId;
    return Node;
}

void USIK_GetAssetID::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/IEconMarketService/GetAssetID/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("GET");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppId);
	JsonObject->SetNumberField("listingid", Var_ListingId);
	FString Content;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAssetID::OnResponseReceived);
	Request->ProcessRequest();
}
