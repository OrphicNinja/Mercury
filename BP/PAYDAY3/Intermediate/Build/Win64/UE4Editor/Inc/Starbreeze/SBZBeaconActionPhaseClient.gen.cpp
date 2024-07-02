// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBeaconActionPhaseClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBeaconActionPhaseClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseClient();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMissionInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerSlotInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotStatus();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientForceReadyButtonByServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientForceReadyButtonByServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientInitializeTravel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientInitializeTravel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientJoinPartyByCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinPartyByCode_Implementation(Z_Param_PartyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPlayerReadyAck)
	{
		P_GET_UBOOL(Z_Param_bIsReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerReadyAck_Implementation(Z_Param_bIsReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPlayerToReadyAck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerToReadyAck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPreMatchLobbyStatusUpdated)
	{
		P_GET_ENUM(ESBZPreMatchLobbyStatus,Z_Param_InStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreMatchLobbyStatusUpdated_Implementation(ESBZPreMatchLobbyStatus(Z_Param_InStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPreplanningAssetAdded)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetAdded_Implementation(Z_Param_InPlayerId,Z_Param_AccelByteItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPreplanningAssetRejected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetRejected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientPreplanningAssetRemoved)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetRemoved_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientReserveSlotAck)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_GET_STRUCT(FSBZMissionInfo,Z_Param_InMissionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReserveSlotAck_Implementation(Z_Param_bWasSuccessful,Z_Param_InMissionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientRestartPreMatchTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreMatchReadyTimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRestartPreMatchTimer_Implementation(Z_Param_PreMatchReadyTimeLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientRestartPreTravelTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreTravelTimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRestartPreTravelTimer_Implementation(Z_Param_PreTravelTimeLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientSetGamePort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GamePort);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameSessionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetGamePort_Implementation(Z_Param_GamePort,Z_Param_ServerVersion,Z_Param_GameSessionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientSetPlayerLoadout)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_STRUCT(FPD3PlayerLoadout,Z_Param_InLoadout);
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InSelectedCharacter);
		P_GET_ENUM(ESBZFirstPartyPlatform,Z_Param_FirstPartyPlatform);
		P_GET_ENUM(ESBZPlatform,Z_Param_InPlatform);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInfamyLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteUserName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteDisplayName);
		P_GET_UBOOL(Z_Param_bCrossPlayEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetPlayerLoadout_Implementation(Z_Param_InPlayerId,Z_Param_InLoadout,Z_Param_InSelectedCharacter,ESBZFirstPartyPlatform(Z_Param_FirstPartyPlatform),ESBZPlatform(Z_Param_InPlatform),Z_Param_InInfamyLevel,Z_Param_AccelByteUserName,Z_Param_AccelByteDisplayName,Z_Param_bCrossPlayEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientStartTravelAck)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartTravelAck_Implementation(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientStartWaitingPlayersLoadingComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartWaitingPlayersLoadingComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientTravelConnectionTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTravelConnectionTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientUpdateSlotsData)
	{
		P_GET_TARRAY(FSBZSlotData,Z_Param_InSlotsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateSlotsData_Implementation(Z_Param_InSlotsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execClientUpdateStayAsPartyList)
	{
		P_GET_TARRAY(FString,Z_Param_BackendPlayerIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateStayAsPartyList_Implementation(Z_Param_BackendPlayerIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execNotifyMissionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyMissionEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execOnActiveLoadoutChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActiveLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveLoadoutChanged(Z_Param_NewActiveLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execOnRep_CharactersInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CharactersInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execSendActiveLoadout)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendActiveLoadout(Z_Param_Out_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execSendPlayerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execSendPlayerUnready)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerUnready();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execSendPreplanningAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPreplanningAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execSendTogglePlayerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTogglePlayerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerAddPreplanningAsset)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddPreplanningAsset_Implementation(Z_Param_InPlayerId,Z_Param_AccelByteItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerGetGamePort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerGetGamePort_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerNotifyStartTravel)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerIdStartTravel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyStartTravel_Implementation(Z_Param_InPlayerIdStartTravel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerPlayerToReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerToReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerPlayerToReadyAck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerToReadyAck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerPlayerToReadyReceive)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerToReadyReceive_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerRemovePreplanningAsset)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemovePreplanningAsset_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerReserveSlot)
	{
		P_GET_TARRAY(FSBZPlayerSlotInfo,Z_Param_InPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReserveSlot_Validate(Z_Param_InPlayers))
		{
			RPC_ValidateFailed(TEXT("ServerReserveSlot_Validate"));
			return;
		}
		P_THIS->ServerReserveSlot_Implementation(Z_Param_InPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerCharactersArray)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_TARRAY(FSoftObjectPath,Z_Param_InPreferredPlayerCharacters);
		P_GET_TARRAY(FSoftObjectPath,Z_Param_InInventoryPlayerCharacters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerCharactersArray_Implementation(Z_Param_InPlayerId,Z_Param_InPreferredPlayerCharacters,Z_Param_InInventoryPlayerCharacters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerData)
	{
		P_GET_STRUCT(FSBZSlotData,Z_Param_InSlotData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerData_Implementation(Z_Param_InSlotData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerInfo)
	{
		P_GET_STRUCT(FSBZLobbyCharacterInfo,Z_Param_PlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetPlayerInfo_Validate(Z_Param_PlayerInfo))
		{
			RPC_ValidateFailed(TEXT("ServerSetPlayerInfo_Validate"));
			return;
		}
		P_THIS->ServerSetPlayerInfo_Implementation(Z_Param_PlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerLoadingComplete)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerLoadingComplete_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerLoadout)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_STRUCT(FPD3PlayerLoadout,Z_Param_InLoadout);
		P_GET_ENUM(ESBZFirstPartyPlatform,Z_Param_FirstPartyPlatform);
		P_GET_ENUM(ESBZPlatform,Z_Param_InPlatform);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInfamyLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteUserName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteDisplayName);
		P_GET_UBOOL(Z_Param_bCrossPlayEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerLoadout_Implementation(Z_Param_InPlayerId,Z_Param_InLoadout,ESBZFirstPartyPlatform(Z_Param_FirstPartyPlatform),ESBZPlatform(Z_Param_InPlatform),Z_Param_InInfamyLevel,Z_Param_AccelByteUserName,Z_Param_AccelByteDisplayName,Z_Param_bCrossPlayEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerReady)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerReady_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetPlayerUnready)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPlayerUnready_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerSetSlotStatus)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_ENUM(ESBZSlotStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetSlotStatus_Implementation(Z_Param_InPlayerId,ESBZSlotStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerTogglePlayerReady)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTogglePlayerReady_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerUpdateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpdateGameSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBeaconActionPhaseClient::execServerVoteStayAsParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerVoteStayAsParty_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer = FName(TEXT("ClientForceReadyButtonByServer"));
	void ASBZBeaconActionPhaseClient::ClientForceReadyButtonByServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientInitializeTravel = FName(TEXT("ClientInitializeTravel"));
	void ASBZBeaconActionPhaseClient::ClientInitializeTravel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientInitializeTravel),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode = FName(TEXT("ClientJoinPartyByCode"));
	void ASBZBeaconActionPhaseClient::ClientJoinPartyByCode(const FString& PartyCode)
	{
		SBZBeaconActionPhaseClient_eventClientJoinPartyByCode_Parms Parms;
		Parms.PartyCode=PartyCode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck = FName(TEXT("ClientPlayerReadyAck"));
	void ASBZBeaconActionPhaseClient::ClientPlayerReadyAck(bool bIsReady)
	{
		SBZBeaconActionPhaseClient_eventClientPlayerReadyAck_Parms Parms;
		Parms.bIsReady=bIsReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck = FName(TEXT("ClientPlayerToReadyAck"));
	void ASBZBeaconActionPhaseClient::ClientPlayerToReadyAck()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated = FName(TEXT("ClientPreMatchLobbyStatusUpdated"));
	void ASBZBeaconActionPhaseClient::ClientPreMatchLobbyStatusUpdated(ESBZPreMatchLobbyStatus InStatus)
	{
		SBZBeaconActionPhaseClient_eventClientPreMatchLobbyStatusUpdated_Parms Parms;
		Parms.InStatus=InStatus;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded = FName(TEXT("ClientPreplanningAssetAdded"));
	void ASBZBeaconActionPhaseClient::ClientPreplanningAssetAdded(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku)
	{
		SBZBeaconActionPhaseClient_eventClientPreplanningAssetAdded_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.AccelByteItemSku=AccelByteItemSku;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected = FName(TEXT("ClientPreplanningAssetRejected"));
	void ASBZBeaconActionPhaseClient::ClientPreplanningAssetRejected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved = FName(TEXT("ClientPreplanningAssetRemoved"));
	void ASBZBeaconActionPhaseClient::ClientPreplanningAssetRemoved(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventClientPreplanningAssetRemoved_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientReserveSlotAck = FName(TEXT("ClientReserveSlotAck"));
	void ASBZBeaconActionPhaseClient::ClientReserveSlotAck(bool bWasSuccessful, FSBZMissionInfo const& InMissionInfo)
	{
		SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		Parms.InMissionInfo=InMissionInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientReserveSlotAck),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer = FName(TEXT("ClientRestartPreMatchTimer"));
	void ASBZBeaconActionPhaseClient::ClientRestartPreMatchTimer(float PreMatchReadyTimeLimit)
	{
		SBZBeaconActionPhaseClient_eventClientRestartPreMatchTimer_Parms Parms;
		Parms.PreMatchReadyTimeLimit=PreMatchReadyTimeLimit;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer = FName(TEXT("ClientRestartPreTravelTimer"));
	void ASBZBeaconActionPhaseClient::ClientRestartPreTravelTimer(float PreTravelTimeLimit)
	{
		SBZBeaconActionPhaseClient_eventClientRestartPreTravelTimer_Parms Parms;
		Parms.PreTravelTimeLimit=PreTravelTimeLimit;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientSetGamePort = FName(TEXT("ClientSetGamePort"));
	void ASBZBeaconActionPhaseClient::ClientSetGamePort(int32 GamePort, const FString& ServerVersion, const FString& GameSessionId)
	{
		SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms Parms;
		Parms.GamePort=GamePort;
		Parms.ServerVersion=ServerVersion;
		Parms.GameSessionId=GameSessionId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientSetGamePort),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout = FName(TEXT("ClientSetPlayerLoadout"));
	void ASBZBeaconActionPhaseClient::ClientSetPlayerLoadout(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZFirstPartyPlatform FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled)
	{
		SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.InLoadout=InLoadout;
		Parms.InSelectedCharacter=InSelectedCharacter;
		Parms.FirstPartyPlatform=FirstPartyPlatform;
		Parms.InPlatform=InPlatform;
		Parms.InInfamyLevel=InInfamyLevel;
		Parms.AccelByteUserName=AccelByteUserName;
		Parms.AccelByteDisplayName=AccelByteDisplayName;
		Parms.bCrossPlayEnabled=bCrossPlayEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientStartTravelAck = FName(TEXT("ClientStartTravelAck"));
	void ASBZBeaconActionPhaseClient::ClientStartTravelAck(ESBZOnlineCode const& Result)
	{
		SBZBeaconActionPhaseClient_eventClientStartTravelAck_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientStartTravelAck),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete = FName(TEXT("ClientStartWaitingPlayersLoadingComplete"));
	void ASBZBeaconActionPhaseClient::ClientStartWaitingPlayersLoadingComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData = FName(TEXT("ClientUpdateSlotsData"));
	void ASBZBeaconActionPhaseClient::ClientUpdateSlotsData(TArray<FSBZSlotData> const& InSlotsData)
	{
		SBZBeaconActionPhaseClient_eventClientUpdateSlotsData_Parms Parms;
		Parms.InSlotsData=InSlotsData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList = FName(TEXT("ClientUpdateStayAsPartyList"));
	void ASBZBeaconActionPhaseClient::ClientUpdateStayAsPartyList(TArray<FString> const& BackendPlayerIds)
	{
		SBZBeaconActionPhaseClient_eventClientUpdateStayAsPartyList_Parms Parms;
		Parms.BackendPlayerIds=BackendPlayerIds;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_NotifyMissionEnd = FName(TEXT("NotifyMissionEnd"));
	void ASBZBeaconActionPhaseClient::NotifyMissionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_NotifyMissionEnd),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset = FName(TEXT("ServerAddPreplanningAsset"));
	void ASBZBeaconActionPhaseClient::ServerAddPreplanningAsset(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku)
	{
		SBZBeaconActionPhaseClient_eventServerAddPreplanningAsset_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.AccelByteItemSku=AccelByteItemSku;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerGetGamePort = FName(TEXT("ServerGetGamePort"));
	void ASBZBeaconActionPhaseClient::ServerGetGamePort()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerGetGamePort),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel = FName(TEXT("ServerNotifyStartTravel"));
	void ASBZBeaconActionPhaseClient::ServerNotifyStartTravel(FUniqueNetIdRepl const& InPlayerIdStartTravel)
	{
		SBZBeaconActionPhaseClient_eventServerNotifyStartTravel_Parms Parms;
		Parms.InPlayerIdStartTravel=InPlayerIdStartTravel;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck = FName(TEXT("ServerPlayerToReadyAck"));
	void ASBZBeaconActionPhaseClient::ServerPlayerToReadyAck()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive = FName(TEXT("ServerPlayerToReadyReceive"));
	void ASBZBeaconActionPhaseClient::ServerPlayerToReadyReceive(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerPlayerToReadyReceive_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset = FName(TEXT("ServerRemovePreplanningAsset"));
	void ASBZBeaconActionPhaseClient::ServerRemovePreplanningAsset(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerRemovePreplanningAsset_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerReserveSlot = FName(TEXT("ServerReserveSlot"));
	void ASBZBeaconActionPhaseClient::ServerReserveSlot(TArray<FSBZPlayerSlotInfo> const& InPlayers)
	{
		SBZBeaconActionPhaseClient_eventServerReserveSlot_Parms Parms;
		Parms.InPlayers=InPlayers;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerReserveSlot),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray = FName(TEXT("ServerSetPlayerCharactersArray"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerCharactersArray(FUniqueNetIdRepl const& InPlayerId, TArray<FSoftObjectPath> const& InPreferredPlayerCharacters, TArray<FSoftObjectPath> const& InInventoryPlayerCharacters)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.InPreferredPlayerCharacters=InPreferredPlayerCharacters;
		Parms.InInventoryPlayerCharacters=InInventoryPlayerCharacters;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerData = FName(TEXT("ServerSetPlayerData"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerData(FSBZSlotData const& InSlotData)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerData_Parms Parms;
		Parms.InSlotData=InSlotData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerData),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo = FName(TEXT("ServerSetPlayerInfo"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerInfo(FSBZLobbyCharacterInfo const& PlayerInfo)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerInfo_Parms Parms;
		Parms.PlayerInfo=PlayerInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete = FName(TEXT("ServerSetPlayerLoadingComplete"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerLoadingComplete(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerLoadingComplete_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout = FName(TEXT("ServerSetPlayerLoadout"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerLoadout(FUniqueNetIdRepl const& InPlayerId, FPD3PlayerLoadout const& InLoadout, ESBZFirstPartyPlatform const& FirstPartyPlatform, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.InLoadout=InLoadout;
		Parms.FirstPartyPlatform=FirstPartyPlatform;
		Parms.InPlatform=InPlatform;
		Parms.InInfamyLevel=InInfamyLevel;
		Parms.AccelByteUserName=AccelByteUserName;
		Parms.AccelByteDisplayName=AccelByteDisplayName;
		Parms.bCrossPlayEnabled=bCrossPlayEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerReady = FName(TEXT("ServerSetPlayerReady"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerReady(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerReady_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerReady),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready = FName(TEXT("ServerSetPlayerUnready"));
	void ASBZBeaconActionPhaseClient::ServerSetPlayerUnready(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerSetPlayerUnready_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerSetSlotStatus = FName(TEXT("ServerSetSlotStatus"));
	void ASBZBeaconActionPhaseClient::ServerSetSlotStatus(FUniqueNetIdRepl const& InPlayerId, ESBZSlotStatus Status)
	{
		SBZBeaconActionPhaseClient_eventServerSetSlotStatus_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.Status=Status;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerSetSlotStatus),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady = FName(TEXT("ServerTogglePlayerReady"));
	void ASBZBeaconActionPhaseClient::ServerTogglePlayerReady(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZBeaconActionPhaseClient_eventServerTogglePlayerReady_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady),&Parms);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerUpdateGameSession = FName(TEXT("ServerUpdateGameSession"));
	void ASBZBeaconActionPhaseClient::ServerUpdateGameSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerUpdateGameSession),NULL);
	}
	static FName NAME_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty = FName(TEXT("ServerVoteStayAsParty"));
	void ASBZBeaconActionPhaseClient::ServerVoteStayAsParty()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty),NULL);
	}
	void ASBZBeaconActionPhaseClient::StaticRegisterNativesASBZBeaconActionPhaseClient()
	{
		UClass* Class = ASBZBeaconActionPhaseClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientForceReadyButtonByServer", &ASBZBeaconActionPhaseClient::execClientForceReadyButtonByServer },
			{ "ClientInitializeTravel", &ASBZBeaconActionPhaseClient::execClientInitializeTravel },
			{ "ClientJoinPartyByCode", &ASBZBeaconActionPhaseClient::execClientJoinPartyByCode },
			{ "ClientPlayerReadyAck", &ASBZBeaconActionPhaseClient::execClientPlayerReadyAck },
			{ "ClientPlayerToReadyAck", &ASBZBeaconActionPhaseClient::execClientPlayerToReadyAck },
			{ "ClientPreMatchLobbyStatusUpdated", &ASBZBeaconActionPhaseClient::execClientPreMatchLobbyStatusUpdated },
			{ "ClientPreplanningAssetAdded", &ASBZBeaconActionPhaseClient::execClientPreplanningAssetAdded },
			{ "ClientPreplanningAssetRejected", &ASBZBeaconActionPhaseClient::execClientPreplanningAssetRejected },
			{ "ClientPreplanningAssetRemoved", &ASBZBeaconActionPhaseClient::execClientPreplanningAssetRemoved },
			{ "ClientReserveSlotAck", &ASBZBeaconActionPhaseClient::execClientReserveSlotAck },
			{ "ClientRestartPreMatchTimer", &ASBZBeaconActionPhaseClient::execClientRestartPreMatchTimer },
			{ "ClientRestartPreTravelTimer", &ASBZBeaconActionPhaseClient::execClientRestartPreTravelTimer },
			{ "ClientSetGamePort", &ASBZBeaconActionPhaseClient::execClientSetGamePort },
			{ "ClientSetPlayerLoadout", &ASBZBeaconActionPhaseClient::execClientSetPlayerLoadout },
			{ "ClientStartTravelAck", &ASBZBeaconActionPhaseClient::execClientStartTravelAck },
			{ "ClientStartWaitingPlayersLoadingComplete", &ASBZBeaconActionPhaseClient::execClientStartWaitingPlayersLoadingComplete },
			{ "ClientTravelConnectionTimeout", &ASBZBeaconActionPhaseClient::execClientTravelConnectionTimeout },
			{ "ClientUpdateSlotsData", &ASBZBeaconActionPhaseClient::execClientUpdateSlotsData },
			{ "ClientUpdateStayAsPartyList", &ASBZBeaconActionPhaseClient::execClientUpdateStayAsPartyList },
			{ "NotifyMissionEnd", &ASBZBeaconActionPhaseClient::execNotifyMissionEnd },
			{ "OnActiveLoadoutChanged", &ASBZBeaconActionPhaseClient::execOnActiveLoadoutChanged },
			{ "OnRep_CharactersInfo", &ASBZBeaconActionPhaseClient::execOnRep_CharactersInfo },
			{ "SendActiveLoadout", &ASBZBeaconActionPhaseClient::execSendActiveLoadout },
			{ "SendPlayerReady", &ASBZBeaconActionPhaseClient::execSendPlayerReady },
			{ "SendPlayerUnready", &ASBZBeaconActionPhaseClient::execSendPlayerUnready },
			{ "SendPreplanningAssets", &ASBZBeaconActionPhaseClient::execSendPreplanningAssets },
			{ "SendTogglePlayerReady", &ASBZBeaconActionPhaseClient::execSendTogglePlayerReady },
			{ "ServerAddPreplanningAsset", &ASBZBeaconActionPhaseClient::execServerAddPreplanningAsset },
			{ "ServerGetGamePort", &ASBZBeaconActionPhaseClient::execServerGetGamePort },
			{ "ServerNotifyStartTravel", &ASBZBeaconActionPhaseClient::execServerNotifyStartTravel },
			{ "ServerPlayerToReady", &ASBZBeaconActionPhaseClient::execServerPlayerToReady },
			{ "ServerPlayerToReadyAck", &ASBZBeaconActionPhaseClient::execServerPlayerToReadyAck },
			{ "ServerPlayerToReadyReceive", &ASBZBeaconActionPhaseClient::execServerPlayerToReadyReceive },
			{ "ServerRemovePreplanningAsset", &ASBZBeaconActionPhaseClient::execServerRemovePreplanningAsset },
			{ "ServerReserveSlot", &ASBZBeaconActionPhaseClient::execServerReserveSlot },
			{ "ServerSetPlayerCharactersArray", &ASBZBeaconActionPhaseClient::execServerSetPlayerCharactersArray },
			{ "ServerSetPlayerData", &ASBZBeaconActionPhaseClient::execServerSetPlayerData },
			{ "ServerSetPlayerInfo", &ASBZBeaconActionPhaseClient::execServerSetPlayerInfo },
			{ "ServerSetPlayerLoadingComplete", &ASBZBeaconActionPhaseClient::execServerSetPlayerLoadingComplete },
			{ "ServerSetPlayerLoadout", &ASBZBeaconActionPhaseClient::execServerSetPlayerLoadout },
			{ "ServerSetPlayerReady", &ASBZBeaconActionPhaseClient::execServerSetPlayerReady },
			{ "ServerSetPlayerUnready", &ASBZBeaconActionPhaseClient::execServerSetPlayerUnready },
			{ "ServerSetSlotStatus", &ASBZBeaconActionPhaseClient::execServerSetSlotStatus },
			{ "ServerTogglePlayerReady", &ASBZBeaconActionPhaseClient::execServerTogglePlayerReady },
			{ "ServerUpdateGameSession", &ASBZBeaconActionPhaseClient::execServerUpdateGameSession },
			{ "ServerVoteStayAsParty", &ASBZBeaconActionPhaseClient::execServerVoteStayAsParty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientForceReadyButtonByServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientInitializeTravel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::NewProp_PartyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientJoinPartyByCode_Parms, PartyCode), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::NewProp_PartyCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::NewProp_PartyCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientJoinPartyByCode", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientJoinPartyByCode_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics
	{
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((SBZBeaconActionPhaseClient_eventClientPlayerReadyAck_Parms*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBeaconActionPhaseClient_eventClientPlayerReadyAck_Parms), &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::NewProp_bIsReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPlayerReadyAck", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientPlayerReadyAck_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPlayerToReadyAck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::NewProp_InStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::NewProp_InStatus = { "InStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientPreMatchLobbyStatusUpdated_Parms, InStatus), Z_Construct_UEnum_Starbreeze_ESBZPreMatchLobbyStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::NewProp_InStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::NewProp_InStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPreMatchLobbyStatusUpdated", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientPreMatchLobbyStatusUpdated_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientPreplanningAssetAdded_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku = { "AccelByteItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientPreplanningAssetAdded_Parms, AccelByteItemSku), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPreplanningAssetAdded", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientPreplanningAssetAdded_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPreplanningAssetRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientPreplanningAssetRemoved_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientPreplanningAssetRemoved", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientPreplanningAssetRemoved_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMissionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMissionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms), &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_InMissionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_InMissionInfo = { "InMissionInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms, InMissionInfo), Z_Construct_UScriptStruct_FSBZMissionInfo, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_InMissionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_InMissionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::NewProp_InMissionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientReserveSlotAck", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientReserveSlotAck_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreMatchReadyTimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::NewProp_PreMatchReadyTimeLimit = { "PreMatchReadyTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientRestartPreMatchTimer_Parms, PreMatchReadyTimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::NewProp_PreMatchReadyTimeLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientRestartPreMatchTimer", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientRestartPreMatchTimer_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreTravelTimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::NewProp_PreTravelTimeLimit = { "PreTravelTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientRestartPreTravelTimer_Parms, PreTravelTimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::NewProp_PreTravelTimeLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientRestartPreTravelTimer", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientRestartPreTravelTimer_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GamePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GamePort = { "GamePort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms, GamePort), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms, ServerVersion), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms, GameSessionId), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GameSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GamePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_ServerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::NewProp_GameSessionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientSetGamePort", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientSetGamePort_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSelectedCharacter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteDisplayName;
		static void NewProp_bCrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InLoadout = { "InLoadout", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, InLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InSelectedCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InSelectedCharacter = { "InSelectedCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, InSelectedCharacter), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InSelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InSelectedCharacter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform = { "InPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, InPlatform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InInfamyLevel = { "InInfamyLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, InInfamyLevel), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteUserName = { "AccelByteUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, AccelByteUserName), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName = { "AccelByteDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms, AccelByteDisplayName), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData)) };
	void Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled_SetBit(void* Obj)
	{
		((SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms*)Obj)->bCrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled = { "bCrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms), &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InSelectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_InInfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientSetPlayerLoadout", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientSetPlayerLoadout_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientStartTravelAck_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientStartTravelAck", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientStartTravelAck_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientStartWaitingPlayersLoadingComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientTravelConnectionTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlotsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InSlotsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData_Inner = { "InSlotsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData = { "InSlotsData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientUpdateSlotsData_Parms, InSlotsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::NewProp_InSlotsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientUpdateSlotsData", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientUpdateSlotsData_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackendPlayerIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendPlayerIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackendPlayerIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds_Inner = { "BackendPlayerIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds = { "BackendPlayerIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventClientUpdateStayAsPartyList_Parms, BackendPlayerIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::NewProp_BackendPlayerIds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ClientUpdateStayAsPartyList", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventClientUpdateStayAsPartyList_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "NotifyMissionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics
	{
		struct SBZBeaconActionPhaseClient_eventOnActiveLoadoutChanged_Parms
		{
			int32 NewActiveLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex = { "NewActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventOnActiveLoadoutChanged_Parms, NewActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "OnActiveLoadoutChanged", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventOnActiveLoadoutChanged_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "OnRep_CharactersInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics
	{
		struct SBZBeaconActionPhaseClient_eventSendActiveLoadout_Parms
		{
			FUniqueNetIdRepl InPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventSendActiveLoadout_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "SendActiveLoadout", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventSendActiveLoadout_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "SendPlayerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "SendPlayerUnready", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "SendPreplanningAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "SendTogglePlayerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteItemSku;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerAddPreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku = { "AccelByteItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerAddPreplanningAsset_Parms, AccelByteItemSku), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerAddPreplanningAsset", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerAddPreplanningAsset_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerGetGamePort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerIdStartTravel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerIdStartTravel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::NewProp_InPlayerIdStartTravel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::NewProp_InPlayerIdStartTravel = { "InPlayerIdStartTravel", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerNotifyStartTravel_Parms, InPlayerIdStartTravel), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::NewProp_InPlayerIdStartTravel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::NewProp_InPlayerIdStartTravel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::NewProp_InPlayerIdStartTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerNotifyStartTravel", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerNotifyStartTravel_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerPlayerToReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerPlayerToReadyAck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerPlayerToReadyReceive_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerPlayerToReadyReceive", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerPlayerToReadyReceive_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerRemovePreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerRemovePreplanningAsset", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerRemovePreplanningAsset_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers_Inner = { "InPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerSlotInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers = { "InPlayers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerReserveSlot_Parms, InPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::NewProp_InPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerReserveSlot", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerReserveSlot_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPreferredPlayerCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPreferredPlayerCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPreferredPlayerCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InInventoryPlayerCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInventoryPlayerCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InInventoryPlayerCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters_Inner = { "InPreferredPlayerCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters = { "InPreferredPlayerCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms, InPreferredPlayerCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters_Inner = { "InInventoryPlayerCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters = { "InInventoryPlayerCharacters", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms, InInventoryPlayerCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InPreferredPlayerCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::NewProp_InInventoryPlayerCharacters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerCharactersArray", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerCharactersArray_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::NewProp_InSlotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::NewProp_InSlotData = { "InSlotData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerData_Parms, InSlotData), Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::NewProp_InSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::NewProp_InSlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::NewProp_InSlotData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerData", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerData_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerInfo_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::NewProp_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::NewProp_PlayerInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerInfo", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerInfo_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadingComplete_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerLoadingComplete", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadingComplete_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoadout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteDisplayName;
		static void NewProp_bCrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InLoadout = { "InLoadout", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, InLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InLoadout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform = { "InPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, InPlatform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InInfamyLevel = { "InInfamyLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, InInfamyLevel), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InInfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteUserName = { "AccelByteUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, AccelByteUserName), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName = { "AccelByteDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms, AccelByteDisplayName), METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName_MetaData)) };
	void Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled_SetBit(void* Obj)
	{
		((SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms*)Obj)->bCrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled = { "bCrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms), &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_InInfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_AccelByteDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::NewProp_bCrossPlayEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerLoadout", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerLoadout_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerReady_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerReady", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerReady_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetPlayerUnready_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetPlayerUnready", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetPlayerUnready_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetSlotStatus_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerSetSlotStatus_Parms, Status), Z_Construct_UEnum_Starbreeze_ESBZSlotStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerSetSlotStatus", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerSetSlotStatus_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseClient_eventServerTogglePlayerReady_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerTogglePlayerReady", nullptr, nullptr, sizeof(SBZBeaconActionPhaseClient_eventServerTogglePlayerReady_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerUpdateGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseClient, nullptr, "ServerVoteStayAsParty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBeaconActionPhaseClient_NoRegister()
	{
		return ASBZBeaconActionPhaseClient::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDsLobbyClient_MetaData[];
#endif
		static void NewProp_bIsDsLobbyClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDsLobbyClient;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinnedLoadouts_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PinnedLoadouts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedLoadouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PinnedLoadouts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientForceReadyButtonByServer, "ClientForceReadyButtonByServer" }, // 2864115103
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientInitializeTravel, "ClientInitializeTravel" }, // 3476007197
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientJoinPartyByCode, "ClientJoinPartyByCode" }, // 1889190308
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerReadyAck, "ClientPlayerReadyAck" }, // 2833945819
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPlayerToReadyAck, "ClientPlayerToReadyAck" }, // 1470216307
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreMatchLobbyStatusUpdated, "ClientPreMatchLobbyStatusUpdated" }, // 629479051
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetAdded, "ClientPreplanningAssetAdded" }, // 427428977
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRejected, "ClientPreplanningAssetRejected" }, // 3742443417
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientPreplanningAssetRemoved, "ClientPreplanningAssetRemoved" }, // 3588944951
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientReserveSlotAck, "ClientReserveSlotAck" }, // 4225595131
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreMatchTimer, "ClientRestartPreMatchTimer" }, // 805324199
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientRestartPreTravelTimer, "ClientRestartPreTravelTimer" }, // 1690217121
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetGamePort, "ClientSetGamePort" }, // 1573985646
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientSetPlayerLoadout, "ClientSetPlayerLoadout" }, // 2051927557
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartTravelAck, "ClientStartTravelAck" }, // 283210774
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientStartWaitingPlayersLoadingComplete, "ClientStartWaitingPlayersLoadingComplete" }, // 1349172843
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientTravelConnectionTimeout, "ClientTravelConnectionTimeout" }, // 2188441840
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateSlotsData, "ClientUpdateSlotsData" }, // 3106043207
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ClientUpdateStayAsPartyList, "ClientUpdateStayAsPartyList" }, // 702389527
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_NotifyMissionEnd, "NotifyMissionEnd" }, // 736235955
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnActiveLoadoutChanged, "OnActiveLoadoutChanged" }, // 4226092362
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_OnRep_CharactersInfo, "OnRep_CharactersInfo" }, // 1476878817
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendActiveLoadout, "SendActiveLoadout" }, // 3632170306
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerReady, "SendPlayerReady" }, // 2904239288
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPlayerUnready, "SendPlayerUnready" }, // 1690074520
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendPreplanningAssets, "SendPreplanningAssets" }, // 1232050679
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_SendTogglePlayerReady, "SendTogglePlayerReady" }, // 401140668
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerAddPreplanningAsset, "ServerAddPreplanningAsset" }, // 1062750413
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerGetGamePort, "ServerGetGamePort" }, // 2686801378
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerNotifyStartTravel, "ServerNotifyStartTravel" }, // 537478017
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReady, "ServerPlayerToReady" }, // 3054464249
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyAck, "ServerPlayerToReadyAck" }, // 441559197
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerPlayerToReadyReceive, "ServerPlayerToReadyReceive" }, // 1586664083
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerRemovePreplanningAsset, "ServerRemovePreplanningAsset" }, // 2267771078
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerReserveSlot, "ServerReserveSlot" }, // 2680492888
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerCharactersArray, "ServerSetPlayerCharactersArray" }, // 110310974
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerData, "ServerSetPlayerData" }, // 1047391059
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerInfo, "ServerSetPlayerInfo" }, // 3393305551
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadingComplete, "ServerSetPlayerLoadingComplete" }, // 316594909
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerLoadout, "ServerSetPlayerLoadout" }, // 1387721083
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerReady, "ServerSetPlayerReady" }, // 3574540645
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetPlayerUnready, "ServerSetPlayerUnready" }, // 844193055
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerSetSlotStatus, "ServerSetSlotStatus" }, // 2576103018
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerTogglePlayerReady, "ServerTogglePlayerReady" }, // 1102756046
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerUpdateGameSession, "ServerUpdateGameSession" }, // 586196456
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseClient_ServerVoteStayAsParty, "ServerVoteStayAsParty" }, // 3152666017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBeaconActionPhaseClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo_Inner = { "PlayersInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseClient" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo = { "PlayersInfo", "OnRep_CharactersInfo", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBeaconActionPhaseClient, PlayersInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseClient" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient_SetBit(void* Obj)
	{
		((ASBZBeaconActionPhaseClient*)Obj)->bIsDsLobbyClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient = { "bIsDsLobbyClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBeaconActionPhaseClient), &Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_ValueProp = { "PinnedLoadouts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_Key_KeyProp = { "PinnedLoadouts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseClient" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts = { "PinnedLoadouts", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBeaconActionPhaseClient, PinnedLoadouts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PlayersInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_bIsDsLobbyClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::NewProp_PinnedLoadouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBeaconActionPhaseClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::ClassParams = {
		&ASBZBeaconActionPhaseClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBeaconActionPhaseClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBeaconActionPhaseClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBeaconActionPhaseClient, 89360421);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBeaconActionPhaseClient>()
	{
		return ASBZBeaconActionPhaseClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBeaconActionPhaseClient(Z_Construct_UClass_ASBZBeaconActionPhaseClient, &ASBZBeaconActionPhaseClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBeaconActionPhaseClient"), false, nullptr, nullptr, nullptr);

	void ASBZBeaconActionPhaseClient::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayersInfo(TEXT("PlayersInfo"));

		const bool bIsValid = true
			&& Name_PlayersInfo == ClassReps[(int32)ENetFields_Private::PlayersInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZBeaconActionPhaseClient"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBeaconActionPhaseClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
