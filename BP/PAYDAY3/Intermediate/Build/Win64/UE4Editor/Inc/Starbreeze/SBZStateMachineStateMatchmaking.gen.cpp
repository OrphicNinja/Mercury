// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateMatchmaking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execFireMatchAcceptUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireMatchAcceptUnlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execHandleLostConnectionToHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToHost(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execHandleLostConnectionToPartyHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToPartyHost(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execHandleMatchInfoUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMatchInfoUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execHandlePlayerCountChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerCountChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateMatchmaking::execHandleSessionBecomeOutdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSessionBecomeOutdated();
		P_NATIVE_END;
	}
	void USBZStateMachineStateMatchmaking::StaticRegisterNativesUSBZStateMachineStateMatchmaking()
	{
		UClass* Class = USBZStateMachineStateMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireMatchAcceptUnlock", &USBZStateMachineStateMatchmaking::execFireMatchAcceptUnlock },
			{ "HandleLostConnectionToHost", &USBZStateMachineStateMatchmaking::execHandleLostConnectionToHost },
			{ "HandleLostConnectionToPartyHost", &USBZStateMachineStateMatchmaking::execHandleLostConnectionToPartyHost },
			{ "HandleMatchInfoUpdated", &USBZStateMachineStateMatchmaking::execHandleMatchInfoUpdated },
			{ "HandlePlayerCountChanged", &USBZStateMachineStateMatchmaking::execHandlePlayerCountChanged },
			{ "HandleSessionBecomeOutdated", &USBZStateMachineStateMatchmaking::execHandleSessionBecomeOutdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "FireMatchAcceptUnlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics
	{
		struct SBZStateMachineStateMatchmaking_eventHandleLostConnectionToHost_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateMatchmaking_eventHandleLostConnectionToHost_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "HandleLostConnectionToHost", nullptr, nullptr, sizeof(SBZStateMachineStateMatchmaking_eventHandleLostConnectionToHost_Parms), Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics
	{
		struct SBZStateMachineStateMatchmaking_eventHandleLostConnectionToPartyHost_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateMatchmaking_eventHandleLostConnectionToPartyHost_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "HandleLostConnectionToPartyHost", nullptr, nullptr, sizeof(SBZStateMachineStateMatchmaking_eventHandleLostConnectionToPartyHost_Parms), Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "HandleMatchInfoUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "HandlePlayerCountChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateMatchmaking, nullptr, "HandleSessionBecomeOutdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateMatchmaking_NoRegister()
	{
		return USBZStateMachineStateMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptMatchTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptMatchTimeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptMatchUnlockTimeDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptMatchUnlockTimeDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptMatchUnlockTimeShipping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptMatchUnlockTimeShipping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptMatchUnlockTimePrivateParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptMatchUnlockTimePrivateParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptMatchUnlockTimeCamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptMatchUnlockTimeCamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchmakingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_FireMatchAcceptUnlock, "FireMatchAcceptUnlock" }, // 1027934882
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToHost, "HandleLostConnectionToHost" }, // 3115655842
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleLostConnectionToPartyHost, "HandleLostConnectionToPartyHost" }, // 1291164485
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleMatchInfoUpdated, "HandleMatchInfoUpdated" }, // 2794015967
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandlePlayerCountChanged, "HandlePlayerCountChanged" }, // 4054443907
		{ &Z_Construct_UFunction_USBZStateMachineStateMatchmaking_HandleSessionBecomeOutdated, "HandleSessionBecomeOutdated" }, // 161907828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchTimeMax = { "AcceptMatchTimeMax", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchTimeMax), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchTimeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeDebug = { "AcceptMatchUnlockTimeDebug", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeDebug), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeShipping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeShipping = { "AcceptMatchUnlockTimeShipping", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeShipping), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeShipping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimePrivateParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimePrivateParty = { "AcceptMatchUnlockTimePrivateParty", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimePrivateParty), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimePrivateParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimePrivateParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeCamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeCamp = { "AcceptMatchUnlockTimeCamp", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, AcceptMatchUnlockTimeCamp), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeCamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeCamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_MatchmakingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_MatchmakingData = { "MatchmakingData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateMatchmaking, MatchmakingData), Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_MatchmakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_MatchmakingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeShipping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimePrivateParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_AcceptMatchUnlockTimeCamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::NewProp_MatchmakingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::ClassParams = {
		&USBZStateMachineStateMatchmaking::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateMatchmaking, 900819068);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateMatchmaking>()
	{
		return USBZStateMachineStateMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateMatchmaking(Z_Construct_UClass_USBZStateMachineStateMatchmaking, &USBZStateMachineStateMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
