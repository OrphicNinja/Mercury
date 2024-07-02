// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateDsWaitingForPlayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateDsWaitingForPlayers() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execAutoReadyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoReadyTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execBlackScreenDoneTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlackScreenDoneTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execCleanState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execDropInLobbyClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropInLobbyClient(Z_Param_Out_PlayerId,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execEndIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execHandlePlayerStateAdded)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateAddedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateAdded(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execHandlePlayerStateRemoved)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateRemovedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateRemoved(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execIntroSequenceTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntroSequenceTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execOnPlayersReadyTimerComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayersReadyTimerComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execPlayerDisconnectedAtBeacon)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDisconnectedAtBeacon(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execPlayerReadyReceived)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_ReadyPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerReadyReceived(Z_Param_Out_ReadyPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execPlayerStartTravel)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStartTravel(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execPlayerWaitForReady)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_WaitForReadyPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerWaitForReady(Z_Param_Out_WaitForReadyPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsWaitingForPlayers::execUnregisterClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterClient(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	void USBZStateMachineStateDsWaitingForPlayers::StaticRegisterNativesUSBZStateMachineStateDsWaitingForPlayers()
	{
		UClass* Class = USBZStateMachineStateDsWaitingForPlayers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoReadyTimeout", &USBZStateMachineStateDsWaitingForPlayers::execAutoReadyTimeout },
			{ "BlackScreenDoneTimeout", &USBZStateMachineStateDsWaitingForPlayers::execBlackScreenDoneTimeout },
			{ "CleanState", &USBZStateMachineStateDsWaitingForPlayers::execCleanState },
			{ "DropInLobbyClient", &USBZStateMachineStateDsWaitingForPlayers::execDropInLobbyClient },
			{ "EndIntroSequence", &USBZStateMachineStateDsWaitingForPlayers::execEndIntroSequence },
			{ "HandlePlayerStateAdded", &USBZStateMachineStateDsWaitingForPlayers::execHandlePlayerStateAdded },
			{ "HandlePlayerStateRemoved", &USBZStateMachineStateDsWaitingForPlayers::execHandlePlayerStateRemoved },
			{ "IntroSequenceTimeout", &USBZStateMachineStateDsWaitingForPlayers::execIntroSequenceTimeout },
			{ "OnPlayersReadyTimerComplete", &USBZStateMachineStateDsWaitingForPlayers::execOnPlayersReadyTimerComplete },
			{ "PlayerDisconnectedAtBeacon", &USBZStateMachineStateDsWaitingForPlayers::execPlayerDisconnectedAtBeacon },
			{ "PlayerReadyReceived", &USBZStateMachineStateDsWaitingForPlayers::execPlayerReadyReceived },
			{ "PlayerStartTravel", &USBZStateMachineStateDsWaitingForPlayers::execPlayerStartTravel },
			{ "PlayerWaitForReady", &USBZStateMachineStateDsWaitingForPlayers::execPlayerWaitForReady },
			{ "UnregisterClient", &USBZStateMachineStateDsWaitingForPlayers::execUnregisterClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "AutoReadyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "BlackScreenDoneTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "CleanState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventDropInLobbyClient_Parms
		{
			FUniqueNetIdRepl PlayerId;
			FString DisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventDropInLobbyClient_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventDropInLobbyClient_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::NewProp_DisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "DropInLobbyClient", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventDropInLobbyClient_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "EndIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateAdded_Parms
		{
			FSBZPlayerStateAddedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateAdded_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "HandlePlayerStateAdded", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateAdded_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateRemoved_Parms
		{
			FSBZPlayerStateRemovedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateRemoved_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "HandlePlayerStateRemoved", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventHandlePlayerStateRemoved_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "IntroSequenceTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "OnPlayersReadyTimerComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventPlayerDisconnectedAtBeacon_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventPlayerDisconnectedAtBeacon_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "PlayerDisconnectedAtBeacon", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventPlayerDisconnectedAtBeacon_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventPlayerReadyReceived_Parms
		{
			FUniqueNetIdRepl ReadyPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadyPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::NewProp_ReadyPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::NewProp_ReadyPlayerId = { "ReadyPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventPlayerReadyReceived_Parms, ReadyPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::NewProp_ReadyPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::NewProp_ReadyPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::NewProp_ReadyPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "PlayerReadyReceived", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventPlayerReadyReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventPlayerStartTravel_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventPlayerStartTravel_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "PlayerStartTravel", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventPlayerStartTravel_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventPlayerWaitForReady_Parms
		{
			FUniqueNetIdRepl WaitForReadyPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitForReadyPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaitForReadyPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId = { "WaitForReadyPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventPlayerWaitForReady_Parms, WaitForReadyPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "PlayerWaitForReady", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventPlayerWaitForReady_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics
	{
		struct SBZStateMachineStateDsWaitingForPlayers_eventUnregisterClient_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsWaitingForPlayers_eventUnregisterClient_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, nullptr, "UnregisterClient", nullptr, nullptr, sizeof(SBZStateMachineStateDsWaitingForPlayers_eventUnregisterClient_Parms), Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_NoRegister()
	{
		return USBZStateMachineStateDsWaitingForPlayers::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersReadyTimeoutValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayersReadyTimeoutValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersReadyTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersReadyTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDsStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_AutoReadyTimeout, "AutoReadyTimeout" }, // 1621481231
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_BlackScreenDoneTimeout, "BlackScreenDoneTimeout" }, // 3986297119
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_CleanState, "CleanState" }, // 1503457421
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_DropInLobbyClient, "DropInLobbyClient" }, // 2484893227
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_EndIntroSequence, "EndIntroSequence" }, // 3442922841
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateAdded, "HandlePlayerStateAdded" }, // 2667784588
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_HandlePlayerStateRemoved, "HandlePlayerStateRemoved" }, // 3635014843
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_IntroSequenceTimeout, "IntroSequenceTimeout" }, // 97095339
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_OnPlayersReadyTimerComplete, "OnPlayersReadyTimerComplete" }, // 1024563522
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerDisconnectedAtBeacon, "PlayerDisconnectedAtBeacon" }, // 1563928989
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerReadyReceived, "PlayerReadyReceived" }, // 1128654748
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerStartTravel, "PlayerStartTravel" }, // 445615843
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_PlayerWaitForReady, "PlayerWaitForReady" }, // 880472407
		{ &Z_Construct_UFunction_USBZStateMachineStateDsWaitingForPlayers_UnregisterClient, "UnregisterClient" }, // 2507572337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateDsWaitingForPlayers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimeoutValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsWaitingForPlayers" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimeoutValue = { "PlayersReadyTimeoutValue", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsWaitingForPlayers, PlayersReadyTimeoutValue), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimeoutValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimeoutValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsWaitingForPlayers" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsWaitingForPlayers.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimer = { "PlayersReadyTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsWaitingForPlayers, PlayersReadyTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimeoutValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::NewProp_PlayersReadyTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateDsWaitingForPlayers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::ClassParams = {
		&USBZStateMachineStateDsWaitingForPlayers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateDsWaitingForPlayers, 616844984);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateDsWaitingForPlayers>()
	{
		return USBZStateMachineStateDsWaitingForPlayers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateDsWaitingForPlayers(Z_Construct_UClass_USBZStateMachineStateDsWaitingForPlayers, &USBZStateMachineStateDsWaitingForPlayers::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateDsWaitingForPlayers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateDsWaitingForPlayers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
