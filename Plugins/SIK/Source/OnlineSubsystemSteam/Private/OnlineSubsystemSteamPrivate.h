// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "OnlineSubsystem.h"


#define INVALID_INDEX -1

/** URL Prefix when using Steam socket connection */
#define STEAM_URL_PREFIX TEXT("steam.")
/** Filename containing the appid during development */
#define STEAMAPPIDFILENAME TEXT("steam_appid.txt")

/** pre-pended to all steam logging */
#undef ONLINE_LOG_PREFIX
#define ONLINE_LOG_PREFIX TEXT("STEAM: ")

THIRD_PARTY_INCLUDES_START
// IWYU pragma: begin_exports
#include "SteamSdk/Includes/steam/steam_api.h"
#include "SteamSdk/Includes/steam/steam_gameserver.h"
#include "SteamSdk/Includes/steam/isteamnetworkingsockets.h"
#include "SteamSdk/Includes/steam/steamnetworkingtypes.h"
// IWYU pragma: end_exports
THIRD_PARTY_INCLUDES_END

