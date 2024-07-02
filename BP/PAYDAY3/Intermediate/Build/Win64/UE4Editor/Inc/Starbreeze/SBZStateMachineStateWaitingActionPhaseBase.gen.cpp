// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitingActionPhaseBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitingActionPhaseBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataWaitActionPhase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execDelayedNetworkBeaconError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayedNetworkBeaconError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleBeaconNetworkError)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeaconNetworkError(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleCinematicStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCinematicStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleCinematicStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCinematicStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleGameReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleNetworkError)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNetworkError(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseBase::execHandleTransitionGameModeReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTransitionGameModeReady();
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitingActionPhaseBase::StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseBase()
	{
		UClass* Class = USBZStateMachineStateWaitingActionPhaseBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayedNetworkBeaconError", &USBZStateMachineStateWaitingActionPhaseBase::execDelayedNetworkBeaconError },
			{ "HandleBeaconNetworkError", &USBZStateMachineStateWaitingActionPhaseBase::execHandleBeaconNetworkError },
			{ "HandleCinematicStarted", &USBZStateMachineStateWaitingActionPhaseBase::execHandleCinematicStarted },
			{ "HandleCinematicStopped", &USBZStateMachineStateWaitingActionPhaseBase::execHandleCinematicStopped },
			{ "HandleGameReady", &USBZStateMachineStateWaitingActionPhaseBase::execHandleGameReady },
			{ "HandleNetworkError", &USBZStateMachineStateWaitingActionPhaseBase::execHandleNetworkError },
			{ "HandleTransitionGameModeReady", &USBZStateMachineStateWaitingActionPhaseBase::execHandleTransitionGameModeReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "DelayedNetworkBeaconError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseBase_eventHandleBeaconNetworkError_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseBase_eventHandleBeaconNetworkError_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleBeaconNetworkError", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseBase_eventHandleBeaconNetworkError_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleCinematicStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleCinematicStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleGameReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseBase_eventHandleNetworkError_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseBase_eventHandleNetworkError_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleNetworkError", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseBase_eventHandleNetworkError_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, nullptr, "HandleTransitionGameModeReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_NoRegister()
	{
		return USBZStateMachineStateWaitingActionPhaseBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionTimeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionTimeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitActionPhaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitActionPhaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_DelayedNetworkBeaconError, "DelayedNetworkBeaconError" }, // 3772934224
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleBeaconNetworkError, "HandleBeaconNetworkError" }, // 131505373
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStarted, "HandleCinematicStarted" }, // 3708778069
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleCinematicStopped, "HandleCinematicStopped" }, // 1998879610
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleGameReady, "HandleGameReady" }, // 2400313987
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleNetworkError, "HandleNetworkError" }, // 1620090708
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseBase_HandleTransitionGameModeReady, "HandleTransitionGameModeReady" }, // 2420178746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitingActionPhaseBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_TransitionTimeOutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitingActionPhaseBase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_TransitionTimeOutTime = { "TransitionTimeOutTime", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhaseBase, TransitionTimeOutTime), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_TransitionTimeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_TransitionTimeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_WaitActionPhaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitingActionPhaseBase" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_WaitActionPhaseData = { "WaitActionPhaseData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhaseBase, WaitActionPhaseData), Z_Construct_UClass_USBZStateMachineDataWaitActionPhase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_WaitActionPhaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_WaitActionPhaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_TransitionTimeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::NewProp_WaitActionPhaseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitingActionPhaseBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::ClassParams = {
		&USBZStateMachineStateWaitingActionPhaseBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitingActionPhaseBase, 1670801144);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitingActionPhaseBase>()
	{
		return USBZStateMachineStateWaitingActionPhaseBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitingActionPhaseBase(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase, &USBZStateMachineStateWaitingActionPhaseBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitingActionPhaseBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitingActionPhaseBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
