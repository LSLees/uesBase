// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CreateLobby.generated.h"

USTRUCT(BlueprintType)
struct FSIK_CreateLobbyOptional
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|LobbyMatchmaking")
	FString LobbyName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|LobbyMatchmaking")
	FString InputJson = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|LobbyMatchmaking")
	FString LobbyMetadata = "";
};
UCLASS()
class STEAMWEB_API USIK_CreateLobby : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique). This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name. A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|LobbyMatchmaking", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CreateLobby* CreateLobby(const FString& Key, const int32& AppId, const int32& MaxMembers, const int32& LobbyType, FSIK_CreateLobbyOptional OptionalSettings);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_MaxMembers;
	int32 Var_LobbyType;
	FSIK_CreateLobbyOptional Var_OptionalSettings;
};
