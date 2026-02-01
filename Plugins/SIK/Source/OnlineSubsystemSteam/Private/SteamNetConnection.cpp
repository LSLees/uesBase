// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIKSteamNetConnection.h"
#include "SocketSubsystemSteam.h"
#include "SIKSteamNetDriver.h"

USIKSteamNetConnection::USIKSteamNetConnection(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	bIsPassthrough(false)
{
}

void USIKSteamNetConnection::InitLocalConnection(UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket, int32 InPacketOverhead)
{
	bIsPassthrough = InURL.Host.StartsWith(STEAM_URL_PREFIX) ? false : true;
	if (!bIsPassthrough)
	{
		DisableAddressResolution();
	}
	
	Super::InitLocalConnection(InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead);
	if (!bIsPassthrough && RemoteAddr.IsValid())
	{
		FSocketSubsystemSteam* SocketSubsystem = (FSocketSubsystemSteam*)ISocketSubsystem::Get(STEAM_SUBSYSTEM);
		if (SocketSubsystem)
		{
			SocketSubsystem->RegisterConnection(this);
		}
	}
}

void USIKSteamNetConnection::InitRemoteConnection(UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, const class FInternetAddr& InRemoteAddr, EConnectionState InState, int32 InMaxPacket, int32 InPacketOverhead)
{
	bIsPassthrough = ((USIKSteamNetDriver*)InDriver)->bIsPassthrough;
	if (!bIsPassthrough)
	{
		DisableAddressResolution();
	}

	Super::InitRemoteConnection(InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead);
	if (!bIsPassthrough && RemoteAddr.IsValid())
	{
		FSocketSubsystemSteam* SocketSubsystem = (FSocketSubsystemSteam*)ISocketSubsystem::Get(STEAM_SUBSYSTEM);
		if (SocketSubsystem)
		{
			SocketSubsystem->RegisterConnection(this);
		}
	}
}

void USIKSteamNetConnection::CleanUp()
{
	Super::CleanUp();

	if (!bIsPassthrough)
	{
		FSocketSubsystemSteam* SocketSubsystem = (FSocketSubsystemSteam*)ISocketSubsystem::Get(STEAM_SUBSYSTEM);
		if (SocketSubsystem)
		{
			// Unregister the connection AFTER the parent class has had a chance to close/flush connections
			SocketSubsystem->UnregisterConnection(this);
		}
	}
}
