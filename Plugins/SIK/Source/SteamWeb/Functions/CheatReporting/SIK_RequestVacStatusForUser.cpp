// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_RequestVacStatusForUser.h"

USIK_RequestVacStatusForUser* USIK_RequestVacStatusForUser::RequestVacStatusForUser(const FString& Key,
	const int64& SteamId, const int32& AppId, int64 SessionId)
{
	USIK_RequestVacStatusForUser* Proxy = NewObject<USIK_RequestVacStatusForUser>();
	Proxy->Var_Key = Key;
	Proxy->Var_SteamId = SteamId;
	Proxy->Var_AppId = AppId;
	Proxy->Var_SessionId = SessionId;
	return Proxy;
}

void USIK_RequestVacStatusForUser::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/ICheatReportingService/RequestVacStatusForUser/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppId);
	JsonObject->SetNumberField("steamid", Var_SteamId);
	if(Var_SessionId != -1)
	{
		JsonObject->SetNumberField("session_id", Var_SessionId);
	}
	FString Content;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_RequestVacStatusForUser::OnResponseReceived);
	Request->ProcessRequest();
}
