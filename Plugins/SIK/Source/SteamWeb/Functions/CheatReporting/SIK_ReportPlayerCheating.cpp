// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_ReportPlayerCheating.h"

USIK_ReportPlayerCheating* USIK_ReportPlayerCheating::ReportPlayerCheating(const FString& Key, const int64& SteamId,
	const int32& AppId, FSIK_PlayerCheatingOptional Optional)
{
	USIK_ReportPlayerCheating* Proxy = NewObject<USIK_ReportPlayerCheating>();
	Proxy->Var_Key = Key;
	Proxy->Var_SteamId = SteamId;
	Proxy->Var_AppId = AppId;
	Proxy->Var_Optional = Optional;
	return Proxy;
}

void USIK_ReportPlayerCheating::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/ICheatReportingService/ReportPlayerCheating/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppId);
	JsonObject->SetNumberField("steamid", Var_SteamId);
	if(Var_Optional.SteamIdReporter != -1)
	{
		JsonObject->SetNumberField("steamidreporter", Var_Optional.SteamIdReporter);
	}
	if(Var_Optional.AppData != -1)
	{
		JsonObject->SetNumberField("appdata", Var_Optional.AppData);
	}
	if(Var_Optional.bHeuristic)
	{
		JsonObject->SetBoolField("heuristic", Var_Optional.bHeuristic);
	}
	if(Var_Optional.bDetection)
	{
		JsonObject->SetBoolField("detection", Var_Optional.bDetection);
	}
	if(Var_Optional.bPlayerReport)
	{
		JsonObject->SetBoolField("playerreport", Var_Optional.bPlayerReport);
	}
	if(Var_Optional.bNoReportId)
	{
		JsonObject->SetBoolField("noreportid", Var_Optional.bNoReportId);
	}
	if(Var_Optional.GameMode != -1)
	{
		JsonObject->SetNumberField("gamemode", Var_Optional.GameMode);
	}
	if(Var_Optional.SuspicionStartTime != -1)
	{
		JsonObject->SetNumberField("suspicionstarttime", Var_Optional.SuspicionStartTime);
	}
	if(Var_Optional.Severity != -1)
	{
		JsonObject->SetNumberField("severity", Var_Optional.Severity);
	}
	FString OutputString;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(OutputString);
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_ReportPlayerCheating::OnResponseReceived);
	Request->ProcessRequest();
}
