// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_PostGameDataFrame.h"

USIK_PostGameDataFrame* USIK_PostGameDataFrame::PostGameDataFrame(const FString& Key, const int32& AppID,
                                                                  const int64& SteamID, const int64& BroadcastId, const FString& FrameData)
{
	USIK_PostGameDataFrame* Proxy = NewObject<USIK_PostGameDataFrame>();
	Proxy->Var_Key = Key;
	Proxy->Var_AppID = AppID;
	Proxy->Var_SteamID = SteamID;
	Proxy->Var_BroadcastId = BroadcastId;
	Proxy->Var_FrameData = FrameData;
	return Proxy;
}

void USIK_PostGameDataFrame::Activate()
{
	Super::Activate();
	FString URL = FString::Printf(TEXT("%s/IBroadcastService/PostGameDataFrame/v1/"), *APIEndpoint);
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key", Var_Key);
	JsonObject->SetNumberField("appid", Var_AppID);
	JsonObject->SetNumberField("steamid", Var_SteamID);
	JsonObject->SetNumberField("broadcast_id", Var_BroadcastId);
	JsonObject->SetStringField("frame_data", Var_FrameData);
	FString OutputString;
	TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *OutputString));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_PostGameDataFrame::OnResponseReceived);
	Request->ProcessRequest();
}
