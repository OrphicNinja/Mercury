// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateDsActionPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateDsActionPhase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsActionPhase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsActionPhase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execAutoReadyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoReadyTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execDropInLobbyClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropInLobbyClient(Z_Param_Out_PlayerId,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execHandleMissionEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMissionEnd(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execHandleMissionResultReady)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_MissionResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMissionResultReady(Z_Param_Out_MissionResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execHandlePlayerStateAdded)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateAddedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateAdded(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execHandlePlayerStateRemoved)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateRemovedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateRemoved(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execPlayerDisconnectedAtBeacon)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDisconnectedAtBeacon(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execPlayerReadyReceived)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerReadyReceived(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execPlayerStartTravel)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStartTravel(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsActionPhase::execPlayerWaitForReady)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_WaitForReadyPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerWaitForReady(Z_Param_Out_WaitForReadyPlayerId);
		P_NATIVE_END;
	}
	void USBZStateMachineStateDsActionPhase::StaticRegisterNativesUSBZStateMachineStateDsActionPhase()
	{
		UClass* Class = USBZStateMachineStateDsActionPhase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoReadyTimeout", &USBZStateMachineStateDsActionPhase::execAutoReadyTimeout },
			{ "DropInLobbyClient", &USBZStateMachineStateDsActionPhase::execDropInLobbyClient },
			{ "HandleMissionEnd", &USBZStateMachineStateDsActionPhase::execHandleMissionEnd },
			{ "HandleMissionResultReady", &USBZStateMachineStateDsActionPhase::execHandleMissionResultReady },
			{ "HandlePlayerStateAdded", &USBZStateMachineStateDsActionPhase::execHandlePlayerStateAdded },
			{ "HandlePlayerStateRemoved", &USBZStateMachineStateDsActionPhase::execHandlePlayerStateRemoved },
			{ "PlayerDisconnectedAtBeacon", &USBZStateMachineStateDsActionPhase::execPlayerDisconnectedAtBeacon },
			{ "PlayerReadyReceived", &USBZStateMachineStateDsActionPhase::execPlayerReadyReceived },
			{ "PlayerStartTravel", &USBZStateMachineStateDsActionPhase::execPlayerStartTravel },
			{ "PlayerWaitForReady", &USBZStateMachineStateDsActionPhase::execPlayerWaitForReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "AutoReadyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventDropInLobbyClient_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventDropInLobbyClient_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventDropInLobbyClient_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "DropInLobbyClient", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventDropInLobbyClient_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventHandleMissionEnd_Parms
		{
			int32 OutroVariation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventHandleMissionEnd_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "HandleMissionEnd", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventHandleMissionEnd_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventHandleMissionResultReady_Parms
		{
			FSBZEndMissionResultData MissionResultData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionResultData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::NewProp_MissionResultData = { "MissionResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventHandleMissionResultReady_Parms, MissionResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::NewProp_MissionResultData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "HandleMissionResultReady", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventHandleMissionResultReady_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventHandlePlayerStateAdded_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventHandlePlayerStateAdded_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "HandlePlayerStateAdded", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventHandlePlayerStateAdded_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventHandlePlayerStateRemoved_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventHandlePlayerStateRemoved_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "HandlePlayerStateRemoved", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventHandlePlayerStateRemoved_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventPlayerDisconnectedAtBeacon_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventPlayerDisconnectedAtBeacon_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "PlayerDisconnectedAtBeacon", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventPlayerDisconnectedAtBeacon_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventPlayerReadyReceived_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventPlayerReadyReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "PlayerReadyReceived", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventPlayerReadyReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventPlayerStartTravel_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventPlayerStartTravel_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "PlayerStartTravel", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventPlayerStartTravel_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics
	{
		struct SBZStateMachineStateDsActionPhase_eventPlayerWaitForReady_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId = { "WaitForReadyPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsActionPhase_eventPlayerWaitForReady_Parms, WaitForReadyPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::NewProp_WaitForReadyPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsActionPhase, nullptr, "PlayerWaitForReady", nullptr, nullptr, sizeof(SBZStateMachineStateDsActionPhase_eventPlayerWaitForReady_Parms), Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateDsActionPhase_NoRegister()
	{
		return USBZStateMachineStateDsActionPhase::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionPhaseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLongTimeoutDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialLongTimeoutDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDsStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_AutoReadyTimeout, "AutoReadyTimeout" }, // 1167633385
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_DropInLobbyClient, "DropInLobbyClient" }, // 952628892
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionEnd, "HandleMissionEnd" }, // 1750829699
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandleMissionResultReady, "HandleMissionResultReady" }, // 3636636070
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateAdded, "HandlePlayerStateAdded" }, // 943456642
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_HandlePlayerStateRemoved, "HandlePlayerStateRemoved" }, // 2891250750
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerDisconnectedAtBeacon, "PlayerDisconnectedAtBeacon" }, // 116245567
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerReadyReceived, "PlayerReadyReceived" }, // 3450415891
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerStartTravel, "PlayerStartTravel" }, // 2091175543
		{ &Z_Construct_UFunction_USBZStateMachineStateDsActionPhase_PlayerWaitForReady, "PlayerWaitForReady" }, // 2227437935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateDsActionPhase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_ActionPhaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsActionPhase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_ActionPhaseData = { "ActionPhaseData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsActionPhase, ActionPhaseData), Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_ActionPhaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_ActionPhaseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsActionPhase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_InitialLongTimeoutDelay = { "InitialLongTimeoutDelay", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsActionPhase, InitialLongTimeoutDelay), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_ActionPhaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::NewProp_InitialLongTimeoutDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateDsActionPhase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::ClassParams = {
		&USBZStateMachineStateDsActionPhase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateDsActionPhase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateDsActionPhase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateDsActionPhase, 643532089);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateDsActionPhase>()
	{
		return USBZStateMachineStateDsActionPhase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateDsActionPhase(Z_Construct_UClass_USBZStateMachineStateDsActionPhase, &USBZStateMachineStateDsActionPhase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateDsActionPhase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateDsActionPhase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
