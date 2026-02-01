// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HttpFwd.h"
#include "HttpModule.h"
#include "Http.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"
#include "Misc/Base64.h"
#include "Dom/JsonValue.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SIK_BaseWebApi.generated.h"


USTRUCT(BlueprintType)
struct FSIK_BaseWebApiResponse
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web")
	int32 StatusCode;

	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web")
	FString Response;

	FSIK_BaseWebApiResponse(): StatusCode(0)
	{
	}

	FSIK_BaseWebApiResponse(int32 StatusCode, FString Response) : StatusCode(StatusCode), Response(Response) {}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSIK_BaseWebApiDelegate, bool, bSuccess, FSIK_BaseWebApiResponse, Response);
UCLASS()
class STEAMWEB_API USIK_BaseWebApi : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "Steam Integration Kit|Web")
	FSIK_BaseWebApiDelegate OnResponse;

protected:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void DestroyAsyncTask();
	FString APIEndpoint = "https://partner.steam-api.com";
};
