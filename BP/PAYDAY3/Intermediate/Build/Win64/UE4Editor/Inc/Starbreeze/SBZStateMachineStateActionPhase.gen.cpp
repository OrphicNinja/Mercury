// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateActionPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateActionPhase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateActionPhase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateActionPhase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execAutoReadyTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoReadyTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execBlackScreenDoneTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlackScreenDoneTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execDropInLobbyClient)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropInLobbyClient(Z_Param_Out_PlayerId,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execHandleMissionEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMissionEnd(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execHandlePlayerStateAdded)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateAddedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateAdded(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execHandlePlayerStateChanged)
	{
		P_GET_OBJECT(ASBZPlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OldStateName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewStateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateChanged(Z_Param_PlayerController,Z_Param_Out_OldStateName,Z_Param_Out_NewStateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execHandlePlayerStateRemoved)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateRemovedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateRemoved(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execPlayerDisconnectedAtBeacon)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDisconnectedAtBeacon(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateActionPhase::execPlayerReadyReceived)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerReadyReceived(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	void USBZStateMachineStateActionPhase::StaticRegisterNativesUSBZStateMachineStateActionPhase()
	{
		UClass* Class = USBZStateMachineStateActionPhase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoReadyTimeout", &USBZStateMachineStateActionPhase::execAutoReadyTimeout },
			{ "BlackScreenDoneTimeout", &USBZStateMachineStateActionPhase::execBlackScreenDoneTimeout },
			{ "DropInLobbyClient", &USBZStateMachineStateActionPhase::execDropInLobbyClient },
			{ "HandleMissionEnd", &USBZStateMachineStateActionPhase::execHandleMissionEnd },
			{ "HandlePlayerStateAdded", &USBZStateMachineStateActionPhase::execHandlePlayerStateAdded },
			{ "HandlePlayerStateChanged", &USBZStateMachineStateActionPhase::execHandlePlayerStateChanged },
			{ "HandlePlayerStateRemoved", &USBZStateMachineStateActionPhase::execHandlePlayerStateRemoved },
			{ "PlayerDisconnectedAtBeacon", &USBZStateMachineStateActionPhase::execPlayerDisconnectedAtBeacon },
			{ "PlayerReadyReceived", &USBZStateMachineStateActionPhase::execPlayerReadyReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "AutoReadyTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "BlackScreenDoneTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics
	{
		struct SBZStateMachineStateActionPhase_eventDropInLobbyClient_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventDropInLobbyClient_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventDropInLobbyClient_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::NewProp_DisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "DropInLobbyClient", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventDropInLobbyClient_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics
	{
		struct SBZStateMachineStateActionPhase_eventHandleMissionEnd_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandleMissionEnd_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "HandleMissionEnd", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventHandleMissionEnd_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics
	{
		struct SBZStateMachineStateActionPhase_eventHandlePlayerStateAdded_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandlePlayerStateAdded_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "HandlePlayerStateAdded", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventHandlePlayerStateAdded_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics
	{
		struct SBZStateMachineStateActionPhase_eventHandlePlayerStateChanged_Parms
		{
			ASBZPlayerController* PlayerController;
			FName OldStateName;
			FName NewStateName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewStateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandlePlayerStateChanged_Parms, PlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_OldStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_OldStateName = { "OldStateName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandlePlayerStateChanged_Parms, OldStateName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_OldStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_OldStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_NewStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_NewStateName = { "NewStateName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandlePlayerStateChanged_Parms, NewStateName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_NewStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_NewStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_OldStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::NewProp_NewStateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "HandlePlayerStateChanged", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventHandlePlayerStateChanged_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics
	{
		struct SBZStateMachineStateActionPhase_eventHandlePlayerStateRemoved_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventHandlePlayerStateRemoved_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "HandlePlayerStateRemoved", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventHandlePlayerStateRemoved_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics
	{
		struct SBZStateMachineStateActionPhase_eventPlayerDisconnectedAtBeacon_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventPlayerDisconnectedAtBeacon_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "PlayerDisconnectedAtBeacon", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventPlayerDisconnectedAtBeacon_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics
	{
		struct SBZStateMachineStateActionPhase_eventPlayerReadyReceived_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateActionPhase_eventPlayerReadyReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateActionPhase, nullptr, "PlayerReadyReceived", nullptr, nullptr, sizeof(SBZStateMachineStateActionPhase_eventPlayerReadyReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateActionPhase_NoRegister()
	{
		return USBZStateMachineStateActionPhase::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhaseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionPhaseWidget;
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
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_AutoReadyTimeout, "AutoReadyTimeout" }, // 1071169829
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_BlackScreenDoneTimeout, "BlackScreenDoneTimeout" }, // 1245385350
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_DropInLobbyClient, "DropInLobbyClient" }, // 929372059
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandleMissionEnd, "HandleMissionEnd" }, // 3096591753
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateAdded, "HandlePlayerStateAdded" }, // 2441512174
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateChanged, "HandlePlayerStateChanged" }, // 193934785
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_HandlePlayerStateRemoved, "HandlePlayerStateRemoved" }, // 96751838
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerDisconnectedAtBeacon, "PlayerDisconnectedAtBeacon" }, // 431186566
		{ &Z_Construct_UFunction_USBZStateMachineStateActionPhase_PlayerReadyReceived, "PlayerReadyReceived" }, // 2575439380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateActionPhase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateActionPhase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseWidget = { "ActionPhaseWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateActionPhase, ActionPhaseWidget), Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateActionPhase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseData = { "ActionPhaseData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateActionPhase, ActionPhaseData), Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateActionPhase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateActionPhase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_InitialLongTimeoutDelay = { "InitialLongTimeoutDelay", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateActionPhase, InitialLongTimeoutDelay), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_InitialLongTimeoutDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_ActionPhaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::NewProp_InitialLongTimeoutDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateActionPhase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::ClassParams = {
		&USBZStateMachineStateActionPhase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateActionPhase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateActionPhase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateActionPhase, 871425747);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateActionPhase>()
	{
		return USBZStateMachineStateActionPhase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateActionPhase(Z_Construct_UClass_USBZStateMachineStateActionPhase, &USBZStateMachineStateActionPhase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateActionPhase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateActionPhase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
