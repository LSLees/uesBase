// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetItemPaymentRules.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetItemPaymentRules : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Sets the payment rules for a specific item.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Workshop", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetItemPaymentRules* SetItemPaymentRules(const FString& Key, const int32& AppId, const int32& GameItemId, const FString& AssociatedWorkshopFiles, const FString& PartnerAccounts, const bool& ValidateOnly, const bool& MakeWorkshopFilesSubscribable);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_GameItemId;
	FString Var_AssociatedWorkshopFiles;
	FString Var_PartnerAccounts;
	bool Var_ValidateOnly;
	bool Var_MakeWorkshopFilesSubscribable;
};
