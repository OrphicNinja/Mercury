// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSession() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMissionInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobbyLocalState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionRequestType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServiceStatus();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnNetworkDisconnectDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnNetworkReconnectDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnlinePartyJoinTypeUpdatedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnInviteProcessingBeginDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPlayerMuted__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnLobbySlotLoadoutChangeEventDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSlotReservationComplete__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnPartyCreated__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParty_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameSessionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecentPlayersManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSettingsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInvites_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKickingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVotingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSearch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSession_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGlobalLobby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFriendManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZJobOverviewSync_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineVoip_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameRecordsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockedPlayerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAvatarCache_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineSession::execGetBeaconMissionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMissionInfo*)Z_Param__Result=P_THIS->GetBeaconMissionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetFoundPlayersCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFoundPlayersCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetLobbyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLobbyLocalState**)Z_Param__Result=P_THIS->GetLobbyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetMatchmakingRegion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMatchmakingRegion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetMenuEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMenuEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetPartyMembersCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartyMembersCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetPlayersCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayersCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execGetUiLobbyInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZLobbyCharacterInfoUi>*)Z_Param__Result=P_THIS->GetUiLobbyInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execHandleOnlinePlatformError)
	{
		P_GET_ENUM(ESBZOnlineSessionRequestType,Z_Param_RequestType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnlinePlatformError(ESBZOnlineSessionRequestType(Z_Param_RequestType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execIsLocalClientReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalClientReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execOnNetworkStatus)
	{
		P_GET_ENUM(ESBZServiceStatus,Z_Param_ServiceStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetworkStatus(ESBZServiceStatus(Z_Param_ServiceStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSession::execSetLocalClientReady)
	{
		P_GET_UBOOL(Z_Param_bIsClientReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalClientReady(Z_Param_bIsClientReady);
		P_NATIVE_END;
	}
	void USBZOnlineSession::StaticRegisterNativesUSBZOnlineSession()
	{
		UClass* Class = USBZOnlineSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBeaconMissionInfo", &USBZOnlineSession::execGetBeaconMissionInfo },
			{ "GetFoundPlayersCount", &USBZOnlineSession::execGetFoundPlayersCount },
			{ "GetLobbyState", &USBZOnlineSession::execGetLobbyState },
			{ "GetMatchmakingRegion", &USBZOnlineSession::execGetMatchmakingRegion },
			{ "GetMenuEvent", &USBZOnlineSession::execGetMenuEvent },
			{ "GetPartyMembersCount", &USBZOnlineSession::execGetPartyMembersCount },
			{ "GetPlayersCount", &USBZOnlineSession::execGetPlayersCount },
			{ "GetUiLobbyInfo", &USBZOnlineSession::execGetUiLobbyInfo },
			{ "HandleOnlinePlatformError", &USBZOnlineSession::execHandleOnlinePlatformError },
			{ "IsLocalClientReady", &USBZOnlineSession::execIsLocalClientReady },
			{ "OnNetworkStatus", &USBZOnlineSession::execOnNetworkStatus },
			{ "SetLocalClientReady", &USBZOnlineSession::execSetLocalClientReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics
	{
		struct SBZOnlineSession_eventGetBeaconMissionInfo_Parms
		{
			FSBZMissionInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetBeaconMissionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMissionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetBeaconMissionInfo", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetBeaconMissionInfo_Parms), Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics
	{
		struct SBZOnlineSession_eventGetFoundPlayersCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetFoundPlayersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetFoundPlayersCount", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetFoundPlayersCount_Parms), Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics
	{
		struct SBZOnlineSession_eventGetLobbyState_Parms
		{
			USBZLobbyLocalState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetLobbyState_Parms, ReturnValue), Z_Construct_UClass_USBZLobbyLocalState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetLobbyState", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetLobbyState_Parms), Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetLobbyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetLobbyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics
	{
		struct SBZOnlineSession_eventGetMatchmakingRegion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetMatchmakingRegion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetMatchmakingRegion", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetMatchmakingRegion_Parms), Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics
	{
		struct SBZOnlineSession_eventGetMenuEvent_Parms
		{
			FString EventName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetMenuEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetMenuEvent", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetMenuEvent_Parms), Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics
	{
		struct SBZOnlineSession_eventGetPartyMembersCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetPartyMembersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetPartyMembersCount", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetPartyMembersCount_Parms), Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics
	{
		struct SBZOnlineSession_eventGetPlayersCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetPlayersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetPlayersCount", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetPlayersCount_Parms), Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics
	{
		struct SBZOnlineSession_eventGetUiLobbyInfo_Parms
		{
			TArray<FSBZLobbyCharacterInfoUi> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventGetUiLobbyInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "GetUiLobbyInfo", nullptr, nullptr, sizeof(SBZOnlineSession_eventGetUiLobbyInfo_Parms), Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics
	{
		struct SBZOnlineSession_eventHandleOnlinePlatformError_Parms
		{
			ESBZOnlineSessionRequestType RequestType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventHandleOnlinePlatformError_Parms, RequestType), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionRequestType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::NewProp_RequestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::NewProp_RequestType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "HandleOnlinePlatformError", nullptr, nullptr, sizeof(SBZOnlineSession_eventHandleOnlinePlatformError_Parms), Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics
	{
		struct SBZOnlineSession_eventIsLocalClientReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSession_eventIsLocalClientReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSession_eventIsLocalClientReady_Parms), &Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "IsLocalClientReady", nullptr, nullptr, sizeof(SBZOnlineSession_eventIsLocalClientReady_Parms), Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics
	{
		struct SBZOnlineSession_eventOnNetworkStatus_Parms
		{
			ESBZServiceStatus ServiceStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServiceStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServiceStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::NewProp_ServiceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::NewProp_ServiceStatus = { "ServiceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSession_eventOnNetworkStatus_Parms, ServiceStatus), Z_Construct_UEnum_Starbreeze_ESBZServiceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::NewProp_ServiceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::NewProp_ServiceStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "OnNetworkStatus", nullptr, nullptr, sizeof(SBZOnlineSession_eventOnNetworkStatus_Parms), Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics
	{
		struct SBZOnlineSession_eventSetLocalClientReady_Parms
		{
			bool bIsClientReady;
		};
		static void NewProp_bIsClientReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClientReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::NewProp_bIsClientReady_SetBit(void* Obj)
	{
		((SBZOnlineSession_eventSetLocalClientReady_Parms*)Obj)->bIsClientReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::NewProp_bIsClientReady = { "bIsClientReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSession_eventSetLocalClientReady_Parms), &Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::NewProp_bIsClientReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::NewProp_bIsClientReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSession, nullptr, "SetLocalClientReady", nullptr, nullptr, sizeof(SBZOnlineSession_eventSetLocalClientReady_Parms), Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister()
	{
		return USBZOnlineSession::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMissionEndReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionEndReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNetworkDisconnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNetworkDisconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNetworkReconnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNetworkReconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBecamePartyHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBecamePartyHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBecamePartyClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBecamePartyClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeftParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocalPartyJoinTypeUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocalPartyJoinTypeUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInviteProcessingBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInviteProcessingBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInviteProcessingFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInviteProcessingFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchmakingStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchmakingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchOutdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchOutdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchRejected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchRejected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchRestartRejected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchRestartRejected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchAccepted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchInfoUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchInfoUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchmAcceptUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchmAcceptUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyWaitPlayersCountdownStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyWaitPlayersCountdownStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyWaitGameCountdownStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyWaitGameCountdownStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitActionPhaseStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitActionPhaseStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaitOtherPlayersStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitOtherPlayersStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMatchmakingStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMatchmakingStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocalClientReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocalClientReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNetworkError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNetworkError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyStateUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyStateUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerMuted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerMuted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbySlotLoadoutChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbySlotLoadoutChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSlotReservationComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotReservationComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPartyCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartyCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameSessionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentPlayersManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecentPlayersManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSessionSettingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSessionSettingManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invites_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickingManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VotingManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Matchmaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Matchmaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSessionUtils_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSessionUtils;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSessionRequestHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSessionRequestHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSessionSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSessionSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P2P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOverviewSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JobOverviewSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSlotsClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSlotsClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSlotsHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSlotsHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Voip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHostPartyByDefault_MetaData[];
#endif
		static void NewProp_bHostPartyByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHostPartyByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRecordsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameRecordsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedPlayerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedPlayerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvatarCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSession,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineSession_GetBeaconMissionInfo, "GetBeaconMissionInfo" }, // 4000195578
		{ &Z_Construct_UFunction_USBZOnlineSession_GetFoundPlayersCount, "GetFoundPlayersCount" }, // 1959654465
		{ &Z_Construct_UFunction_USBZOnlineSession_GetLobbyState, "GetLobbyState" }, // 142159360
		{ &Z_Construct_UFunction_USBZOnlineSession_GetMatchmakingRegion, "GetMatchmakingRegion" }, // 3682267462
		{ &Z_Construct_UFunction_USBZOnlineSession_GetMenuEvent, "GetMenuEvent" }, // 3910616520
		{ &Z_Construct_UFunction_USBZOnlineSession_GetPartyMembersCount, "GetPartyMembersCount" }, // 356738795
		{ &Z_Construct_UFunction_USBZOnlineSession_GetPlayersCount, "GetPlayersCount" }, // 3771837267
		{ &Z_Construct_UFunction_USBZOnlineSession_GetUiLobbyInfo, "GetUiLobbyInfo" }, // 50354797
		{ &Z_Construct_UFunction_USBZOnlineSession_HandleOnlinePlatformError, "HandleOnlinePlatformError" }, // 1273340481
		{ &Z_Construct_UFunction_USBZOnlineSession_IsLocalClientReady, "IsLocalClientReady" }, // 4156167528
		{ &Z_Construct_UFunction_USBZOnlineSession_OnNetworkStatus, "OnNetworkStatus" }, // 2731573487
		{ &Z_Construct_UFunction_USBZOnlineSession_SetLocalClientReady, "SetLocalClientReady" }, // 1401073286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMissionEndReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMissionEndReceived = { "OnMissionEndReceived", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMissionEndReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMissionEndReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMissionEndReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkDisconnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkDisconnect = { "OnNetworkDisconnect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnNetworkDisconnect), Z_Construct_UDelegateFunction_Starbreeze_OnNetworkDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkDisconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkReconnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkReconnect = { "OnNetworkReconnect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnNetworkReconnect), Z_Construct_UDelegateFunction_Starbreeze_OnNetworkReconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkReconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkReconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyHost = { "OnBecamePartyHost", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnBecamePartyHost), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyClient = { "OnBecamePartyClient", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnBecamePartyClient), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLeftParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLeftParty = { "OnLeftParty", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLeftParty), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLeftParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLeftParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalPartyJoinTypeUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalPartyJoinTypeUpdated = { "OnLocalPartyJoinTypeUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLocalPartyJoinTypeUpdated), Z_Construct_UDelegateFunction_Starbreeze_OnlinePartyJoinTypeUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalPartyJoinTypeUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalPartyJoinTypeUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingBegin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingBegin = { "OnInviteProcessingBegin", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnInviteProcessingBegin), Z_Construct_UDelegateFunction_Starbreeze_OnInviteProcessingBeginDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingFinish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingFinish = { "OnInviteProcessingFinish", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnInviteProcessingFinish), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStarted = { "OnMatchmakingStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchmakingStarted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchFound = { "OnMatchFound", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchFound), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchOutdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchOutdated = { "OnMatchOutdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchOutdated), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchOutdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchOutdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRejected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRejected = { "OnMatchRejected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchRejected), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRejected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRejected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRestartRejected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRestartRejected = { "OnMatchRestartRejected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchRestartRejected), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRestartRejected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRestartRejected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchAccepted = { "OnMatchAccepted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchAccepted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchInfoUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchInfoUpdated = { "OnMatchInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchInfoUpdated), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchInfoUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmAcceptUnlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmAcceptUnlock = { "OnMatchmAcceptUnlock", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchmAcceptUnlock), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmAcceptUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmAcceptUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitPlayersCountdownStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitPlayersCountdownStarted = { "OnLobbyWaitPlayersCountdownStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLobbyWaitPlayersCountdownStarted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitPlayersCountdownStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitPlayersCountdownStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitGameCountdownStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitGameCountdownStarted = { "OnLobbyWaitGameCountdownStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLobbyWaitGameCountdownStarted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitGameCountdownStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitGameCountdownStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitActionPhaseStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitActionPhaseStarted = { "OnWaitActionPhaseStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnWaitActionPhaseStarted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitActionPhaseStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitActionPhaseStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitOtherPlayersStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitOtherPlayersStarted = { "OnWaitOtherPlayersStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnWaitOtherPlayersStarted), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineUiEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitOtherPlayersStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitOtherPlayersStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStopped = { "OnMatchmakingStopped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnMatchmakingStopped), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyComplete = { "OnLobbyComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLobbyComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalClientReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalClientReady = { "OnLocalClientReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLocalClientReady), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalClientReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalClientReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkError = { "OnNetworkError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnNetworkError), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyStateUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyStateUpdated = { "OnLobbyStateUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLobbyStateUpdated), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyStateUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyStateUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPlayerMuted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPlayerMuted = { "OnPlayerMuted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnPlayerMuted), Z_Construct_UDelegateFunction_Starbreeze_OnPlayerMuted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPlayerMuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPlayerMuted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbySlotLoadoutChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbySlotLoadoutChanged = { "OnLobbySlotLoadoutChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnLobbySlotLoadoutChanged), Z_Construct_UDelegateFunction_Starbreeze_OnLobbySlotLoadoutChangeEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbySlotLoadoutChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbySlotLoadoutChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnSlotReservationComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnSlotReservationComplete = { "OnSlotReservationComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnSlotReservationComplete), Z_Construct_UDelegateFunction_Starbreeze_OnSlotReservationComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnSlotReservationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnSlotReservationComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPartyCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPartyCreated = { "OnPartyCreated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnPartyCreated), Z_Construct_UDelegateFunction_Starbreeze_OnPartyCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPartyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPartyCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Party), Z_Construct_UClass_USBZParty_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Party_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Party_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_PartyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_PartyManager = { "PartyManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, PartyManager), Z_Construct_UClass_USBZPartyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_PartyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_PartyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameSessionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameSessionManager = { "GameSessionManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, GameSessionManager), Z_Construct_UClass_USBZGameSessionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameSessionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameSessionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_RecentPlayersManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_RecentPlayersManager = { "RecentPlayersManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, RecentPlayersManager), Z_Construct_UClass_USBZRecentPlayersManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_RecentPlayersManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_RecentPlayersManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSettingManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSettingManager = { "OnlineSessionSettingManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSessionSettingManager), Z_Construct_UClass_USBZOnlineSessionSettingsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSettingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSettingManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Lobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Lobby), Z_Construct_UClass_USBZLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Lobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Chat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Chat = { "Chat", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Chat), Z_Construct_UClass_USBZChat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Chat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Chat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Invites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Invites = { "Invites", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Invites), Z_Construct_UClass_USBZInvites_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Invites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Invites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_KickingManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_KickingManager = { "KickingManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, KickingManager), Z_Construct_UClass_USBZKickingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_KickingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_KickingManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_VotingManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_VotingManager = { "VotingManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, VotingManager), Z_Construct_UClass_USBZVotingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_VotingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_VotingManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Matchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Matchmaking = { "Matchmaking", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Matchmaking), Z_Construct_UClass_USBZMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Matchmaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Matchmaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionUtils_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionUtils = { "OnlineSessionUtils", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSessionUtils), Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionUtils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionUtils_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionRequestHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionRequestHandler = { "OnlineSessionRequestHandler", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSessionRequestHandler), Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionRequestHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionRequestHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSearch = { "OnlineSessionSearch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSessionSearch), Z_Construct_UClass_USBZOnlineSessionSearch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_P2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_P2P = { "P2P", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, P2P), Z_Construct_UClass_USBZP2PSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_P2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_P2P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GlobalLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GlobalLobby = { "GlobalLobby", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, GlobalLobby), Z_Construct_UClass_USBZGlobalLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GlobalLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GlobalLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_FriendManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_FriendManager = { "FriendManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, FriendManager), Z_Construct_UClass_USBZFriendManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_FriendManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_FriendManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_JobOverviewSync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_JobOverviewSync = { "JobOverviewSync", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, JobOverviewSync), Z_Construct_UClass_ASBZJobOverviewSync_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_JobOverviewSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_JobOverviewSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsClient = { "OnlineSlotsClient", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSlotsClient), Z_Construct_UClass_USBZOnlineSlotsClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsHost = { "OnlineSlotsHost", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, OnlineSlotsHost), Z_Construct_UClass_USBZOnlineSlotsHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Voip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Voip = { "Voip", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, Voip), Z_Construct_UClass_USBZOnlineVoip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Voip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Voip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	void Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault_SetBit(void* Obj)
	{
		((USBZOnlineSession*)Obj)->bHostPartyByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault = { "bHostPartyByDefault", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZOnlineSession), &Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameRecordsManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameRecordsManager = { "GameRecordsManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, GameRecordsManager), Z_Construct_UClass_USBZGameRecordsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameRecordsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameRecordsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_BlockedPlayerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_BlockedPlayerManager = { "BlockedPlayerManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, BlockedPlayerManager), Z_Construct_UClass_USBZBlockedPlayerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_BlockedPlayerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_BlockedPlayerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_AvatarCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSession" },
		{ "ModuleRelativePath", "Public/SBZOnlineSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_AvatarCache = { "AvatarCache", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSession, AvatarCache), Z_Construct_UClass_USBZAvatarCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_AvatarCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_AvatarCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMissionEndReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkReconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnBecamePartyClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLeftParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalPartyJoinTypeUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnInviteProcessingFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchOutdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRejected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchRestartRejected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchInfoUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmAcceptUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitPlayersCountdownStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyWaitGameCountdownStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitActionPhaseStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnWaitOtherPlayersStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnMatchmakingStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLocalClientReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnNetworkError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbyStateUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPlayerMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnLobbySlotLoadoutChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnSlotReservationComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnPartyCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Party,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_PartyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameSessionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_RecentPlayersManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSettingManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Lobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Chat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Invites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_KickingManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_VotingManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Matchmaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionUtils,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionRequestHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSessionSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_P2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GlobalLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_FriendManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_JobOverviewSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_OnlineSlotsHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_Voip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_bHostPartyByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_GameRecordsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_BlockedPlayerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSession_Statics::NewProp_AvatarCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSession_Statics::ClassParams = {
		&USBZOnlineSession::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOnlineSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSession, 576727218);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSession>()
	{
		return USBZOnlineSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSession(Z_Construct_UClass_USBZOnlineSession, &USBZOnlineSession::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
