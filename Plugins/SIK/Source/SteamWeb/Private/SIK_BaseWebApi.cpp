// Copyright (c) 2024 Betide Studio. All Rights Reserved.


#include "SIK_BaseWebApi.h"

void USIK_BaseWebApi::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if(!bWasSuccessful)
	{
		OnResponse.Broadcast(false, FSIK_BaseWebApiResponse(-1, "Request failed"));
		DestroyAsyncTask();
		return;
	}
	if(!Response.IsValid())
	{
		OnResponse.Broadcast(false, FSIK_BaseWebApiResponse(-1, "Response is invalid"));
		DestroyAsyncTask();
		return;
	}
	OnResponse.Broadcast(true, FSIK_BaseWebApiResponse(Response->GetResponseCode(), Response->GetContentAsString()));
	DestroyAsyncTask();
}

void USIK_BaseWebApi::DestroyAsyncTask()
{
	SetReadyToDestroy();
#if ENGINE_MAJOR_VERSION == 5
	MarkAsGarbage();
#else
	MarkPendingKill();
#endif
}