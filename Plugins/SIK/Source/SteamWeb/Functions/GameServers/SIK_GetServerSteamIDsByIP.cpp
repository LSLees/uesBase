// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetServerSteamIDsByIP.h"

USIK_GetServerSteamIDsByIP* USIK_GetServerSteamIDsByIP::GetServerSteamIDsByIP(const FString& Key,
    const TArray<FString>& ServerIPs)
{
    USIK_GetServerSteamIDsByIP* Node = NewObject<USIK_GetServerSteamIDsByIP>();
    Node->Var_Key = Key;
    Node->Var_ServerIPs = ServerIPs;
    return Node;
}

void USIK_GetServerSteamIDsByIP::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/GetServerSteamIDsByIP/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    TArray<TSharedPtr<FJsonValue>> ServerIPsArray;
    for (FString ServerIP : Var_ServerIPs)
    {
        ServerIPsArray.Add(MakeShareable(new FJsonValueString(ServerIP)));
    }
    JsonObject->SetArrayField("server_ips", ServerIPsArray);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetServerSteamIDsByIP::OnResponseReceived);
    Request->ProcessRequest();
}
