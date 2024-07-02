// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateResult() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateResult_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnExpireRestartTimerUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExpireRestartTimerUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnRestartAccepted)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartAccepted(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnRestartAcceptTimerUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartAcceptTimerUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnRestartCountdownTimerStarted)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeRemainingUntilRestart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartCountdownTimerStarted(Z_Param_TimeRemainingUntilRestart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnRestartCountdownTimerUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartCountdownTimerUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execOnRestartTimeExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartTimeExpired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateResult::execSetupMergePartyDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMergePartyDone();
		P_NATIVE_END;
	}
	void USBZStateMachineStateResult::StaticRegisterNativesUSBZStateMachineStateResult()
	{
		UClass* Class = USBZStateMachineStateResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExpireRestartTimerUpdate", &USBZStateMachineStateResult::execOnExpireRestartTimerUpdate },
			{ "OnRestartAccepted", &USBZStateMachineStateResult::execOnRestartAccepted },
			{ "OnRestartAcceptTimerUpdated", &USBZStateMachineStateResult::execOnRestartAcceptTimerUpdated },
			{ "OnRestartCountdownTimerStarted", &USBZStateMachineStateResult::execOnRestartCountdownTimerStarted },
			{ "OnRestartCountdownTimerUpdated", &USBZStateMachineStateResult::execOnRestartCountdownTimerUpdated },
			{ "OnRestartTimeExpired", &USBZStateMachineStateResult::execOnRestartTimeExpired },
			{ "SetupMergePartyDone", &USBZStateMachineStateResult::execSetupMergePartyDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnExpireRestartTimerUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics
	{
		struct SBZStateMachineStateResult_eventOnRestartAccepted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateResult_eventOnRestartAccepted_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnRestartAccepted", nullptr, nullptr, sizeof(SBZStateMachineStateResult_eventOnRestartAccepted_Parms), Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnRestartAcceptTimerUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics
	{
		struct SBZStateMachineStateResult_eventOnRestartCountdownTimerStarted_Parms
		{
			float TimeRemainingUntilRestart;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemainingUntilRestart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::NewProp_TimeRemainingUntilRestart = { "TimeRemainingUntilRestart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateResult_eventOnRestartCountdownTimerStarted_Parms, TimeRemainingUntilRestart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::NewProp_TimeRemainingUntilRestart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnRestartCountdownTimerStarted", nullptr, nullptr, sizeof(SBZStateMachineStateResult_eventOnRestartCountdownTimerStarted_Parms), Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnRestartCountdownTimerUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "OnRestartTimeExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateResult, nullptr, "SetupMergePartyDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateResult_NoRegister()
	{
		return USBZStateMachineStateResult::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultWidget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRequestedRestart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRequestedRestart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRequestedRestart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnExpireRestartTimerUpdate, "OnExpireRestartTimerUpdate" }, // 2164338739
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAccepted, "OnRestartAccepted" }, // 2174803800
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartAcceptTimerUpdated, "OnRestartAcceptTimerUpdated" }, // 2292773232
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerStarted, "OnRestartCountdownTimerStarted" }, // 3871104814
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartCountdownTimerUpdated, "OnRestartCountdownTimerUpdated" }, // 2345125629
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_OnRestartTimeExpired, "OnRestartTimeExpired" }, // 765491061
		{ &Z_Construct_UFunction_USBZStateMachineStateResult_SetupMergePartyDone, "SetupMergePartyDone" }, // 3925931354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_ResultWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_ResultWidget = { "ResultWidget", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateResult, ResultWidget), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_ResultWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_ResultWidget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart_Inner = { "PlayerRequestedRestart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart = { "PlayerRequestedRestart", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateResult, PlayerRequestedRestart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_ResultWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateResult_Statics::NewProp_PlayerRequestedRestart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateResult_Statics::ClassParams = {
		&USBZStateMachineStateResult::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateResult_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateResult, 2804980158);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateResult>()
	{
		return USBZStateMachineStateResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateResult(Z_Construct_UClass_USBZStateMachineStateResult, &USBZStateMachineStateResult::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
