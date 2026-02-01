// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_ReportCheatData.h"

USIK_ReportCheatData* USIK_ReportCheatData::ReportCheatData(const FString& Key, const int64& SteamId,
	const int32& AppId, const FString& PathAndFileName, const FString& WebCheatUrl, const int64& TimeNow,
	const int64& TimeStarted, const int64& TimeStopped, const FString& CheatName, const int32& GameProcessId,
	const int32& CheatProcessId, const int64& CheatParam1, const int64& CheatParam2)
{
	USIK_ReportCheatData* Proxy = NewObject<USIK_ReportCheatData>();
	Proxy->Var_Key = Key;
	Proxy->Var_SteamId = SteamId;
	Proxy->Var_AppId = AppId;
	Proxy->Var_PathAndFileName = PathAndFileName;
	Proxy->Var_WebCheatUrl = WebCheatUrl;
	Proxy->Var_TimeNow = TimeNow;
	Proxy->Var_TimeStarted = TimeStarted;
	Proxy->Var_TimeStopped = TimeStopped;
	Proxy->Var_CheatName = CheatName;
	Proxy->Var_GameProcessId = GameProcessId;
	Proxy->Var_CheatProcessId = CheatProcessId;
	Proxy->Var_CheatParam1 = CheatParam1;
	Proxy->Var_CheatParam2 = CheatParam2;
	return Proxy;
}

void USIK_ReportCheatData::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/ICheatReportingService/ReportCheatData/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppId);
	JsonObject->SetNumberField("steamid", Var_SteamId);
	JsonObject->SetStringField("pathandfilename", Var_PathAndFileName);
	JsonObject->SetStringField("webcheaturl", Var_WebCheatUrl);
	JsonObject->SetNumberField("time_now", Var_TimeNow);
	JsonObject->SetNumberField("time_started", Var_TimeStarted);
	JsonObject->SetNumberField("time_stopped", Var_TimeStopped);
	JsonObject->SetStringField("cheatname", Var_CheatName);
	JsonObject->SetNumberField("game_process_id", Var_GameProcessId);
	JsonObject->SetNumberField("cheat_process_id", Var_CheatProcessId);
	JsonObject->SetNumberField("cheat_param_1", Var_CheatParam1);
	JsonObject->SetNumberField("cheat_param_2", Var_CheatParam2);
	FString Content;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_ReportCheatData::OnResponseReceived);
	Request->ProcessRequest();
}
