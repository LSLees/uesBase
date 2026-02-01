// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_GetCheatingReports.h"

USIK_GetCheatingReports* USIK_GetCheatingReports::GetCheatingReports(const FString& Key, const int32& AppId,
	const int32& TimeEnd, const int32& TimeBegin, const int64& ReportIdMin, bool bIncludeReports, bool bIncludeBans,
	const int64& SteamId)
{
	USIK_GetCheatingReports* Proxy = NewObject<USIK_GetCheatingReports>();
	Proxy->Var_Key = Key;
	Proxy->Var_AppId = AppId;
	Proxy->Var_TimeEnd = TimeEnd;
	Proxy->Var_TimeBegin = TimeBegin;
	Proxy->Var_ReportIdMin = ReportIdMin;
	Proxy->Var_bIncludeReports = bIncludeReports;
	Proxy->Var_bIncludeBans = bIncludeBans;
	Proxy->Var_SteamId = SteamId;
	return Proxy;
}

void USIK_GetCheatingReports::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/ICheatReportingService/GetCheatingReports/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("GET");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppId);
	JsonObject->SetNumberField("timeend", Var_TimeEnd);
	JsonObject->SetNumberField("timebegin", Var_TimeBegin);
	JsonObject->SetNumberField("reportidmin", Var_ReportIdMin);
	JsonObject->SetBoolField("includereports", Var_bIncludeReports);
	JsonObject->SetBoolField("includebans", Var_bIncludeBans);
	JsonObject->SetNumberField("steamid", Var_SteamId);
	FString Content;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetCheatingReports::OnResponseReceived);
	Request->ProcessRequest();
}
