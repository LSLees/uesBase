// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_RequestPlayerGameBan.h"

USIK_RequestPlayerGameBan* USIK_RequestPlayerGameBan::RequestPlayerGameBan(const FString& Key, const int64& SteamID,
	const int32& AppID, const int64& ReportId, const FString& CheatDescription, const int32& Duration, bool bDelayBan,
	const int32& Flags)
{
	USIK_RequestPlayerGameBan* Proxy = NewObject<USIK_RequestPlayerGameBan>();
	Proxy->Var_Key = Key;
	Proxy->Var_SteamID = SteamID;
	Proxy->Var_AppID = AppID;
	Proxy->Var_ReportId = ReportId;
	Proxy->Var_CheatDescription = CheatDescription;
	Proxy->Var_Duration = Duration;
	Proxy->Var_bDelayBan = bDelayBan;
	Proxy->Var_Flags = Flags;
	return Proxy;
}

void USIK_RequestPlayerGameBan::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/ICheatReportingService/RequestPlayerGameBan/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppID);
	JsonObject->SetNumberField("steamid", Var_SteamID);
	JsonObject->SetNumberField("reportid", Var_ReportId);
	JsonObject->SetStringField("cheatdescription", Var_CheatDescription);
	JsonObject->SetNumberField("duration", Var_Duration);
	JsonObject->SetBoolField("delayban", Var_bDelayBan);
	JsonObject->SetNumberField("flags", Var_Flags);
	FString Content;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_RequestPlayerGameBan::OnResponseReceived);
	Request->ProcessRequest();
}
