// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateLobby() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateLobby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateLobby();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execHandleLostConnectionToHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToHost(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execHandleLostConnectionToPartyHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToPartyHost(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execHandleWaitActionPhaseReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleWaitActionPhaseReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execOnMissionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMissionEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execReceivedHostUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivedHostUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execResetWaitPlayersTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetWaitPlayersTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execStartWaitForServerPlayerReadyAck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWaitForServerPlayerReadyAck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execStartWaitGameTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWaitGameTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execStartWaitPlayersTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWaitPlayersTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execTryUpdateWaitPlayersTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryUpdateWaitPlayersTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execWaitGameTickSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitGameTickSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateLobby::execWaitPlayersTickSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitPlayersTickSeconds();
		P_NATIVE_END;
	}
	void USBZStateMachineStateLobby::StaticRegisterNativesUSBZStateMachineStateLobby()
	{
		UClass* Class = USBZStateMachineStateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLostConnectionToHost", &USBZStateMachineStateLobby::execHandleLostConnectionToHost },
			{ "HandleLostConnectionToPartyHost", &USBZStateMachineStateLobby::execHandleLostConnectionToPartyHost },
			{ "HandleWaitActionPhaseReceived", &USBZStateMachineStateLobby::execHandleWaitActionPhaseReceived },
			{ "OnMissionEnd", &USBZStateMachineStateLobby::execOnMissionEnd },
			{ "ReceivedHostUpdate", &USBZStateMachineStateLobby::execReceivedHostUpdate },
			{ "ResetWaitPlayersTimer", &USBZStateMachineStateLobby::execResetWaitPlayersTimer },
			{ "StartWaitForServerPlayerReadyAck", &USBZStateMachineStateLobby::execStartWaitForServerPlayerReadyAck },
			{ "StartWaitGameTimer", &USBZStateMachineStateLobby::execStartWaitGameTimer },
			{ "StartWaitPlayersTimer", &USBZStateMachineStateLobby::execStartWaitPlayersTimer },
			{ "TryUpdateWaitPlayersTimer", &USBZStateMachineStateLobby::execTryUpdateWaitPlayersTimer },
			{ "WaitGameTickSeconds", &USBZStateMachineStateLobby::execWaitGameTickSeconds },
			{ "WaitPlayersTickSeconds", &USBZStateMachineStateLobby::execWaitPlayersTickSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics
	{
		struct SBZStateMachineStateLobby_eventHandleLostConnectionToHost_Parms
		{
			ESBZOnlineCode ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateLobby_eventHandleLostConnectionToHost_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "HandleLostConnectionToHost", nullptr, nullptr, sizeof(SBZStateMachineStateLobby_eventHandleLostConnectionToHost_Parms), Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics
	{
		struct SBZStateMachineStateLobby_eventHandleLostConnectionToPartyHost_Parms
		{
			ESBZOnlineCode ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateLobby_eventHandleLostConnectionToPartyHost_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "HandleLostConnectionToPartyHost", nullptr, nullptr, sizeof(SBZStateMachineStateLobby_eventHandleLostConnectionToPartyHost_Parms), Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "HandleWaitActionPhaseReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "OnMissionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "ReceivedHostUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "ResetWaitPlayersTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "StartWaitForServerPlayerReadyAck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "StartWaitGameTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "StartWaitPlayersTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "TryUpdateWaitPlayersTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "WaitGameTickSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateLobby, nullptr, "WaitPlayersTickSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateLobby_NoRegister()
	{
		return USBZStateMachineStateLobby::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersWaitTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersWaitTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhasePlayersWaitTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionPhasePlayersWaitTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStartTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameStartTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToHost, "HandleLostConnectionToHost" }, // 3659446746
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_HandleLostConnectionToPartyHost, "HandleLostConnectionToPartyHost" }, // 4218580692
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_HandleWaitActionPhaseReceived, "HandleWaitActionPhaseReceived" }, // 1242579040
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_OnMissionEnd, "OnMissionEnd" }, // 2137383245
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_ReceivedHostUpdate, "ReceivedHostUpdate" }, // 2392286743
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_ResetWaitPlayersTimer, "ResetWaitPlayersTimer" }, // 3148650296
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitForServerPlayerReadyAck, "StartWaitForServerPlayerReadyAck" }, // 1566182844
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitGameTimer, "StartWaitGameTimer" }, // 4220884248
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_StartWaitPlayersTimer, "StartWaitPlayersTimer" }, // 1347109649
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_TryUpdateWaitPlayersTimer, "TryUpdateWaitPlayersTimer" }, // 1156704752
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_WaitGameTickSeconds, "WaitGameTickSeconds" }, // 3415759004
		{ &Z_Construct_UFunction_USBZStateMachineStateLobby_WaitPlayersTickSeconds, "WaitPlayersTickSeconds" }, // 3900921994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_PlayersWaitTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateLobby" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_PlayersWaitTimeout = { "PlayersWaitTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateLobby, PlayersWaitTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_PlayersWaitTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_PlayersWaitTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_ActionPhasePlayersWaitTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateLobby" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_ActionPhasePlayersWaitTimeout = { "ActionPhasePlayersWaitTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateLobby, ActionPhasePlayersWaitTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_ActionPhasePlayersWaitTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_ActionPhasePlayersWaitTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_GameStartTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateLobby" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_GameStartTimeout = { "GameStartTimeout", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateLobby, GameStartTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_GameStartTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_GameStartTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_PlayersWaitTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_ActionPhasePlayersWaitTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateLobby_Statics::NewProp_GameStartTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateLobby_Statics::ClassParams = {
		&USBZStateMachineStateLobby::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateLobby, 993031410);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateLobby>()
	{
		return USBZStateMachineStateLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateLobby(Z_Construct_UClass_USBZStateMachineStateLobby, &USBZStateMachineStateLobby::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
