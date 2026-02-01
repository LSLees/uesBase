// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ModifyItems.generated.h"


USTRUCT(BlueprintType)
struct FSIK_ModifyItemUpdate
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	int64 itemid = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	FString property_name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	FString property_value_string = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	bool property_value_bool = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	int64 property_value_int = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	FString property_value_float = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	bool remove_property = false;
};

UCLASS()
class STEAMWEB_API USIK_ModifyItems : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	/*
	*ModifyItems
	POST https://partner.steam-api.com/IInventoryService/ModifyItems/v1/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API publisher authentication key.
	appid	uint32	✔	
	input_json	string	✔	
	steamid	uint64	✔	The steamid of the user who owns the items. Must be specified in the input_json parameter.
	timestamp	uint32	✔	Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.
	updates	message	✔	The list of items and properties being modified. Must be specified in the input_json parameter.

	Structure of the updates property:
	Name	Type	Required	Description
	itemid	uint64	✔	The id of the item being modified.
	property_name	string	✔	The name of the dynamic property being added/updated/removed.
	property_value_string	string		The string value of the property to set.
	property_value_bool	bool		The boolean value of the property to set.
	property_value_int	int64		The 64 bit integer value of the property to set.
	property_value_float	string		The 32 bit float value of the property to set.
	remove_property	bool		Set to true if the property should be removed.

	Modify the dynamic properties on items for the given user. This call is rate-limited per user and currently only 100 items can be modified in one call.
	*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ModifyItems* ModifyItems(const FString& Key, const int32& AppId, const FString& InputJson, const int64& SteamId, const int32& Timestamp, const TArray<FSIK_ModifyItemUpdate>& Updates);


private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_InputJson;
	int64 Var_SteamId;
	int32 Var_Timestamp;
	TArray<FSIK_ModifyItemUpdate> Var_Updates;
};
