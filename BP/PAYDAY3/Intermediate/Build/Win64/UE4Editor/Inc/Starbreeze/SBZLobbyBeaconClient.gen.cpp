// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyBeaconClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconClient();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientAddSlot)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddSlot_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientFreeSlot)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientFreeSlot_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientInitiateWaitActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientInitiateWaitActionPhase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientPreplanningAssetAdded)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetAdded_Implementation(Z_Param_InPlayerId,Z_Param_AccelByteItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientPreplanningAssetRejected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetRejected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientPreplanningAssetRemoved)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPreplanningAssetRemoved_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientReserveSlotAck)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReserveSlotAck_Implementation(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execClientStopWaitingOtherPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStopWaitingOtherPlayers_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execMulticastSlotUpdated)
	{
		P_GET_STRUCT(FSBZSlotData,Z_Param_InSlotData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSlotUpdated_Implementation(Z_Param_InSlotData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execOnRep_LobbyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LobbyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerAddPreplanningAsset)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelByteItemSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddPreplanningAsset_Implementation(Z_Param_InPlayerId,Z_Param_AccelByteItemSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerMoveToServerAck)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveToServerAck_Validate(Z_Param_InPlayerId))
		{
			RPC_ValidateFailed(TEXT("ServerMoveToServerAck_Validate"));
			return;
		}
		P_THIS->ServerMoveToServerAck_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerPlayerToReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerToReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerPlayerToReadyReceive)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerPlayerToReadyReceive_Validate(Z_Param_InPlayerId))
		{
			RPC_ValidateFailed(TEXT("ServerPlayerToReadyReceive_Validate"));
			return;
		}
		P_THIS->ServerPlayerToReadyReceive_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerRemovePreplanningAsset)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemovePreplanningAsset_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerReserveSlot)
	{
		P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_InPlayerIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReserveSlot_Validate(Z_Param_InPlayerIds))
		{
			RPC_ValidateFailed(TEXT("ServerReserveSlot_Validate"));
			return;
		}
		P_THIS->ServerReserveSlot_Implementation(Z_Param_InPlayerIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerSetPlayerAcceptedMatch)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_UBOOL(Z_Param_bIsConfirmed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetPlayerAcceptedMatch_Validate(Z_Param_InPlayerId,Z_Param_bIsConfirmed))
		{
			RPC_ValidateFailed(TEXT("ServerSetPlayerAcceptedMatch_Validate"));
			return;
		}
		P_THIS->ServerSetPlayerAcceptedMatch_Implementation(Z_Param_InPlayerId,Z_Param_bIsConfirmed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerSetPlayerReady)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_UBOOL(Z_Param_bIsReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetPlayerReady_Validate(Z_Param_InPlayerId,Z_Param_bIsReady))
		{
			RPC_ValidateFailed(TEXT("ServerSetPlayerReady_Validate"));
			return;
		}
		P_THIS->ServerSetPlayerReady_Implementation(Z_Param_InPlayerId,Z_Param_bIsReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerUpdatePlayerInfo)
	{
		P_GET_STRUCT(FSBZLobbyCharacterInfo,Z_Param_PlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePlayerInfo_Validate(Z_Param_PlayerInfo))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePlayerInfo_Validate"));
			return;
		}
		P_THIS->ServerUpdatePlayerInfo_Implementation(Z_Param_PlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLobbyBeaconClient::execServerUpdateSlot)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPlayerId);
		P_GET_STRUCT(FSBZSlotData,Z_Param_InSlotData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpdateSlot_Implementation(Z_Param_InPlayerId,Z_Param_InSlotData);
		P_NATIVE_END;
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientAddSlot = FName(TEXT("ClientAddSlot"));
	void ASBZLobbyBeaconClient::ClientAddSlot(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventClientAddSlot_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientAddSlot),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientFreeSlot = FName(TEXT("ClientFreeSlot"));
	void ASBZLobbyBeaconClient::ClientFreeSlot(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventClientFreeSlot_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientFreeSlot),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase = FName(TEXT("ClientInitiateWaitActionPhase"));
	void ASBZLobbyBeaconClient::ClientInitiateWaitActionPhase()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase),NULL);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded = FName(TEXT("ClientPreplanningAssetAdded"));
	void ASBZLobbyBeaconClient::ClientPreplanningAssetAdded(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku)
	{
		SBZLobbyBeaconClient_eventClientPreplanningAssetAdded_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.AccelByteItemSku=AccelByteItemSku;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected = FName(TEXT("ClientPreplanningAssetRejected"));
	void ASBZLobbyBeaconClient::ClientPreplanningAssetRejected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected),NULL);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved = FName(TEXT("ClientPreplanningAssetRemoved"));
	void ASBZLobbyBeaconClient::ClientPreplanningAssetRemoved(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventClientPreplanningAssetRemoved_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientReserveSlotAck = FName(TEXT("ClientReserveSlotAck"));
	void ASBZLobbyBeaconClient::ClientReserveSlotAck(bool bWasSuccessful)
	{
		SBZLobbyBeaconClient_eventClientReserveSlotAck_Parms Parms;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientReserveSlotAck),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers = FName(TEXT("ClientStopWaitingOtherPlayers"));
	void ASBZLobbyBeaconClient::ClientStopWaitingOtherPlayers()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers),NULL);
	}
	static FName NAME_ASBZLobbyBeaconClient_MulticastSlotUpdated = FName(TEXT("MulticastSlotUpdated"));
	void ASBZLobbyBeaconClient::MulticastSlotUpdated(FSBZSlotData InSlotData)
	{
		SBZLobbyBeaconClient_eventMulticastSlotUpdated_Parms Parms;
		Parms.InSlotData=InSlotData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_MulticastSlotUpdated),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerAddPreplanningAsset = FName(TEXT("ServerAddPreplanningAsset"));
	void ASBZLobbyBeaconClient::ServerAddPreplanningAsset(FUniqueNetIdRepl const& InPlayerId, const FString& AccelByteItemSku)
	{
		SBZLobbyBeaconClient_eventServerAddPreplanningAsset_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.AccelByteItemSku=AccelByteItemSku;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerAddPreplanningAsset),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerMoveToServerAck = FName(TEXT("ServerMoveToServerAck"));
	void ASBZLobbyBeaconClient::ServerMoveToServerAck(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventServerMoveToServerAck_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerMoveToServerAck),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive = FName(TEXT("ServerPlayerToReadyReceive"));
	void ASBZLobbyBeaconClient::ServerPlayerToReadyReceive(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventServerPlayerToReadyReceive_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset = FName(TEXT("ServerRemovePreplanningAsset"));
	void ASBZLobbyBeaconClient::ServerRemovePreplanningAsset(FUniqueNetIdRepl const& InPlayerId)
	{
		SBZLobbyBeaconClient_eventServerRemovePreplanningAsset_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerReserveSlot = FName(TEXT("ServerReserveSlot"));
	void ASBZLobbyBeaconClient::ServerReserveSlot(TArray<FUniqueNetIdRepl> const& InPlayerIds)
	{
		SBZLobbyBeaconClient_eventServerReserveSlot_Parms Parms;
		Parms.InPlayerIds=InPlayerIds;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerReserveSlot),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch = FName(TEXT("ServerSetPlayerAcceptedMatch"));
	void ASBZLobbyBeaconClient::ServerSetPlayerAcceptedMatch(FUniqueNetIdRepl const& InPlayerId, bool bIsConfirmed)
	{
		SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.bIsConfirmed=bIsConfirmed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerSetPlayerReady = FName(TEXT("ServerSetPlayerReady"));
	void ASBZLobbyBeaconClient::ServerSetPlayerReady(FUniqueNetIdRepl const& InPlayerId, bool bIsReady)
	{
		SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.bIsReady=bIsReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerSetPlayerReady),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo = FName(TEXT("ServerUpdatePlayerInfo"));
	void ASBZLobbyBeaconClient::ServerUpdatePlayerInfo(FSBZLobbyCharacterInfo const& PlayerInfo)
	{
		SBZLobbyBeaconClient_eventServerUpdatePlayerInfo_Parms Parms;
		Parms.PlayerInfo=PlayerInfo;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo),&Parms);
	}
	static FName NAME_ASBZLobbyBeaconClient_ServerUpdateSlot = FName(TEXT("ServerUpdateSlot"));
	void ASBZLobbyBeaconClient::ServerUpdateSlot(FUniqueNetIdRepl const& InPlayerId, FSBZSlotData InSlotData)
	{
		SBZLobbyBeaconClient_eventServerUpdateSlot_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		Parms.InSlotData=InSlotData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLobbyBeaconClient_ServerUpdateSlot),&Parms);
	}
	void ASBZLobbyBeaconClient::StaticRegisterNativesASBZLobbyBeaconClient()
	{
		UClass* Class = ASBZLobbyBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAddSlot", &ASBZLobbyBeaconClient::execClientAddSlot },
			{ "ClientFreeSlot", &ASBZLobbyBeaconClient::execClientFreeSlot },
			{ "ClientInitiateWaitActionPhase", &ASBZLobbyBeaconClient::execClientInitiateWaitActionPhase },
			{ "ClientPreplanningAssetAdded", &ASBZLobbyBeaconClient::execClientPreplanningAssetAdded },
			{ "ClientPreplanningAssetRejected", &ASBZLobbyBeaconClient::execClientPreplanningAssetRejected },
			{ "ClientPreplanningAssetRemoved", &ASBZLobbyBeaconClient::execClientPreplanningAssetRemoved },
			{ "ClientReserveSlotAck", &ASBZLobbyBeaconClient::execClientReserveSlotAck },
			{ "ClientStopWaitingOtherPlayers", &ASBZLobbyBeaconClient::execClientStopWaitingOtherPlayers },
			{ "MulticastSlotUpdated", &ASBZLobbyBeaconClient::execMulticastSlotUpdated },
			{ "OnRep_LobbyState", &ASBZLobbyBeaconClient::execOnRep_LobbyState },
			{ "ServerAddPreplanningAsset", &ASBZLobbyBeaconClient::execServerAddPreplanningAsset },
			{ "ServerMoveToServerAck", &ASBZLobbyBeaconClient::execServerMoveToServerAck },
			{ "ServerPlayerToReady", &ASBZLobbyBeaconClient::execServerPlayerToReady },
			{ "ServerPlayerToReadyReceive", &ASBZLobbyBeaconClient::execServerPlayerToReadyReceive },
			{ "ServerRemovePreplanningAsset", &ASBZLobbyBeaconClient::execServerRemovePreplanningAsset },
			{ "ServerReserveSlot", &ASBZLobbyBeaconClient::execServerReserveSlot },
			{ "ServerSetPlayerAcceptedMatch", &ASBZLobbyBeaconClient::execServerSetPlayerAcceptedMatch },
			{ "ServerSetPlayerReady", &ASBZLobbyBeaconClient::execServerSetPlayerReady },
			{ "ServerUpdatePlayerInfo", &ASBZLobbyBeaconClient::execServerUpdatePlayerInfo },
			{ "ServerUpdateSlot", &ASBZLobbyBeaconClient::execServerUpdateSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventClientAddSlot_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientAddSlot", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventClientAddSlot_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventClientFreeSlot_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientFreeSlot", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventClientFreeSlot_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientInitiateWaitActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventClientPreplanningAssetAdded_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku = { "AccelByteItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventClientPreplanningAssetAdded_Parms, AccelByteItemSku), METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::NewProp_AccelByteItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientPreplanningAssetAdded", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventClientPreplanningAssetAdded_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientPreplanningAssetRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventClientPreplanningAssetRemoved_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientPreplanningAssetRemoved", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventClientPreplanningAssetRemoved_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics
	{
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SBZLobbyBeaconClient_eventClientReserveSlotAck_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLobbyBeaconClient_eventClientReserveSlotAck_Parms), &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientReserveSlotAck", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventClientReserveSlotAck_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ClientStopWaitingOtherPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::NewProp_InSlotData = { "InSlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventMulticastSlotUpdated_Parms, InSlotData), Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::NewProp_InSlotData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "MulticastSlotUpdated", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventMulticastSlotUpdated_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "OnRep_LobbyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerAddPreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku = { "AccelByteItemSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerAddPreplanningAsset_Parms, AccelByteItemSku), METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::NewProp_AccelByteItemSku,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerAddPreplanningAsset", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerAddPreplanningAsset_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerMoveToServerAck_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerMoveToServerAck", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerMoveToServerAck_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerPlayerToReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerPlayerToReadyReceive_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerPlayerToReadyReceive", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerPlayerToReadyReceive_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerRemovePreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerRemovePreplanningAsset", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerRemovePreplanningAsset_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPlayerIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds_Inner = { "InPlayerIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds = { "InPlayerIds", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerReserveSlot_Parms, InPlayerIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::NewProp_InPlayerIds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerReserveSlot", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerReserveSlot_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static void NewProp_bIsConfirmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConfirmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_InPlayerId_MetaData)) };
	void Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_bIsConfirmed_SetBit(void* Obj)
	{
		((SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms*)Obj)->bIsConfirmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_bIsConfirmed = { "bIsConfirmed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms), &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_bIsConfirmed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::NewProp_bIsConfirmed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerSetPlayerAcceptedMatch", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerSetPlayerAcceptedMatch_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId_MetaData)) };
	void Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms), &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::NewProp_bIsReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerSetPlayerReady", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerSetPlayerReady_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::NewProp_PlayerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerUpdatePlayerInfo_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::NewProp_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::NewProp_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::NewProp_PlayerInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerUpdatePlayerInfo", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerUpdatePlayerInfo_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerUpdateSlot_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InSlotData = { "InSlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyBeaconClient_eventServerUpdateSlot_Parms, InSlotData), Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::NewProp_InSlotData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLobbyBeaconClient, nullptr, "ServerUpdateSlot", nullptr, nullptr, sizeof(SBZLobbyBeaconClient_eventServerUpdateSlot_Parms), Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLobbyBeaconClient_NoRegister()
	{
		return ASBZLobbyBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLobbyBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientAddSlot, "ClientAddSlot" }, // 629968909
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientFreeSlot, "ClientFreeSlot" }, // 570091378
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientInitiateWaitActionPhase, "ClientInitiateWaitActionPhase" }, // 3009346006
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetAdded, "ClientPreplanningAssetAdded" }, // 1541023313
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRejected, "ClientPreplanningAssetRejected" }, // 458994338
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientPreplanningAssetRemoved, "ClientPreplanningAssetRemoved" }, // 3088338569
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientReserveSlotAck, "ClientReserveSlotAck" }, // 3672639557
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ClientStopWaitingOtherPlayers, "ClientStopWaitingOtherPlayers" }, // 1993753596
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_MulticastSlotUpdated, "MulticastSlotUpdated" }, // 2925519625
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_OnRep_LobbyState, "OnRep_LobbyState" }, // 445673350
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerAddPreplanningAsset, "ServerAddPreplanningAsset" }, // 3859153888
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerMoveToServerAck, "ServerMoveToServerAck" }, // 2547205400
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReady, "ServerPlayerToReady" }, // 1795095052
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerPlayerToReadyReceive, "ServerPlayerToReadyReceive" }, // 3093786325
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerRemovePreplanningAsset, "ServerRemovePreplanningAsset" }, // 3973728805
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerReserveSlot, "ServerReserveSlot" }, // 89972436
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerAcceptedMatch, "ServerSetPlayerAcceptedMatch" }, // 1215896608
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerSetPlayerReady, "ServerSetPlayerReady" }, // 1135366553
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdatePlayerInfo, "ServerUpdatePlayerInfo" }, // 3598893410
		{ &Z_Construct_UFunction_ASBZLobbyBeaconClient_ServerUpdateSlot, "ServerUpdateSlot" }, // 4072193053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLobbyBeaconClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::NewProp_LobbyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyBeaconClient" },
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::NewProp_LobbyState = { "LobbyState", "OnRep_LobbyState", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyBeaconClient, LobbyState), Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::NewProp_LobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::NewProp_LobbyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::NewProp_LobbyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLobbyBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::ClassParams = {
		&ASBZLobbyBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLobbyBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLobbyBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLobbyBeaconClient, 2060161570);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLobbyBeaconClient>()
	{
		return ASBZLobbyBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLobbyBeaconClient(Z_Construct_UClass_ASBZLobbyBeaconClient, &ASBZLobbyBeaconClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLobbyBeaconClient"), false, nullptr, nullptr, nullptr);

	void ASBZLobbyBeaconClient::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LobbyState(TEXT("LobbyState"));

		const bool bIsValid = true
			&& Name_LobbyState == ClassReps[(int32)ENetFields_Private::LobbyState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZLobbyBeaconClient"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLobbyBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
