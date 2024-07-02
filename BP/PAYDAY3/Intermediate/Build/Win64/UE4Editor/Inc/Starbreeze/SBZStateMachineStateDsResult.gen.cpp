// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateDsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateDsResult() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsResult_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateDsResult::execDestinationMapLoaded)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestinationMapLoaded(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsResult::execOnRestartAccepted)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartAccepted(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsResult::execOnRestartAcceptTimerFinsihed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartAcceptTimerFinsihed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsResult::execOnRestartLevelTimeExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartLevelTimeExpired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateDsResult::execOnRestartTimerFinsihed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartTimerFinsihed();
		P_NATIVE_END;
	}
	void USBZStateMachineStateDsResult::StaticRegisterNativesUSBZStateMachineStateDsResult()
	{
		UClass* Class = USBZStateMachineStateDsResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestinationMapLoaded", &USBZStateMachineStateDsResult::execDestinationMapLoaded },
			{ "OnRestartAccepted", &USBZStateMachineStateDsResult::execOnRestartAccepted },
			{ "OnRestartAcceptTimerFinsihed", &USBZStateMachineStateDsResult::execOnRestartAcceptTimerFinsihed },
			{ "OnRestartLevelTimeExpired", &USBZStateMachineStateDsResult::execOnRestartLevelTimeExpired },
			{ "OnRestartTimerFinsihed", &USBZStateMachineStateDsResult::execOnRestartTimerFinsihed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics
	{
		struct SBZStateMachineStateDsResult_eventDestinationMapLoaded_Parms
		{
			UWorld* NewWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsResult_eventDestinationMapLoaded_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsResult, nullptr, "DestinationMapLoaded", nullptr, nullptr, sizeof(SBZStateMachineStateDsResult_eventDestinationMapLoaded_Parms), Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics
	{
		struct SBZStateMachineStateDsResult_eventOnRestartAccepted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsResult_eventOnRestartAccepted_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsResult, nullptr, "OnRestartAccepted", nullptr, nullptr, sizeof(SBZStateMachineStateDsResult_eventOnRestartAccepted_Parms), Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsResult, nullptr, "OnRestartAcceptTimerFinsihed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsResult, nullptr, "OnRestartLevelTimeExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsResult, nullptr, "OnRestartTimerFinsihed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateDsResult_NoRegister()
	{
		return USBZStateMachineStateDsResult::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateDsResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStateTimerHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultStateTimerHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStateTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResultStateTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartAcceptTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestartAcceptTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartInitiateTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestartInitiateTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultWidget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRequestedRestart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRequestedRestart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRequestedRestart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartAcceptTimerHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestartAcceptTimerHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartLevelTimerHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestartLevelTimerHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDsStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateDsResult_DestinationMapLoaded, "DestinationMapLoaded" }, // 2408554071
		{ &Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAccepted, "OnRestartAccepted" }, // 1615969674
		{ &Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartAcceptTimerFinsihed, "OnRestartAcceptTimerFinsihed" }, // 3536854359
		{ &Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartLevelTimeExpired, "OnRestartLevelTimeExpired" }, // 3595098457
		{ &Z_Construct_UFunction_USBZStateMachineStateDsResult_OnRestartTimerFinsihed, "OnRestartTimerFinsihed" }, // 4132673970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateDsResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimerHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimerHandler = { "ResultStateTimerHandler", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, ResultStateTimerHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimerHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimerHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimeout = { "ResultStateTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, ResultStateTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimeout = { "RestartAcceptTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartAcceptTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartInitiateTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartInitiateTimeout = { "RestartInitiateTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartInitiateTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartInitiateTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartInitiateTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultWidget = { "ResultWidget", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, ResultWidget), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultWidget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart_Inner = { "PlayerRequestedRestart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart = { "PlayerRequestedRestart", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, PlayerRequestedRestart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimerHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimerHandler = { "RestartAcceptTimerHandler", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartAcceptTimerHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimerHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimerHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartLevelTimerHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsResult" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartLevelTimerHandler = { "RestartLevelTimerHandler", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsResult, RestartLevelTimerHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartLevelTimerHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartLevelTimerHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimerHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultStateTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartInitiateTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_ResultWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_PlayerRequestedRestart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartAcceptTimerHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::NewProp_RestartLevelTimerHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateDsResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::ClassParams = {
		&USBZStateMachineStateDsResult::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateDsResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateDsResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateDsResult, 1050008759);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateDsResult>()
	{
		return USBZStateMachineStateDsResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateDsResult(Z_Construct_UClass_USBZStateMachineStateDsResult, &USBZStateMachineStateDsResult::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateDsResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateDsResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
