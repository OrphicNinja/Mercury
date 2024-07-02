// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateABPreMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateABPreMatch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateABPreMatch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateABPreMatch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execDelayedTravelToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayedTravelToServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execHandleBeaconDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeaconDisconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execHandleInitializeTravel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInitializeTravel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execHandleLobbyStateUpdated)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLobbyStateUpdated(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execHandleReceivedPlayerReadyAck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleReceivedPlayerReadyAck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateABPreMatch::execOnPlayerReadyStatusUpdated)
	{
		P_GET_UBOOL(Z_Param_bIsReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerReadyStatusUpdated(Z_Param_bIsReady);
		P_NATIVE_END;
	}
	void USBZStateMachineStateABPreMatch::StaticRegisterNativesUSBZStateMachineStateABPreMatch()
	{
		UClass* Class = USBZStateMachineStateABPreMatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayedTravelToServer", &USBZStateMachineStateABPreMatch::execDelayedTravelToServer },
			{ "HandleBeaconDisconnect", &USBZStateMachineStateABPreMatch::execHandleBeaconDisconnect },
			{ "HandleInitializeTravel", &USBZStateMachineStateABPreMatch::execHandleInitializeTravel },
			{ "HandleLobbyStateUpdated", &USBZStateMachineStateABPreMatch::execHandleLobbyStateUpdated },
			{ "HandleReceivedPlayerReadyAck", &USBZStateMachineStateABPreMatch::execHandleReceivedPlayerReadyAck },
			{ "OnPlayerReadyStatusUpdated", &USBZStateMachineStateABPreMatch::execOnPlayerReadyStatusUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "DelayedTravelToServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "HandleBeaconDisconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "HandleInitializeTravel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics
	{
		struct SBZStateMachineStateABPreMatch_eventHandleLobbyStateUpdated_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateABPreMatch_eventHandleLobbyStateUpdated_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "HandleLobbyStateUpdated", nullptr, nullptr, sizeof(SBZStateMachineStateABPreMatch_eventHandleLobbyStateUpdated_Parms), Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "HandleReceivedPlayerReadyAck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics
	{
		struct SBZStateMachineStateABPreMatch_eventOnPlayerReadyStatusUpdated_Parms
		{
			bool bIsReady;
		};
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((SBZStateMachineStateABPreMatch_eventOnPlayerReadyStatusUpdated_Parms*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStateMachineStateABPreMatch_eventOnPlayerReadyStatusUpdated_Parms), &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::NewProp_bIsReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABPreMatch, nullptr, "OnPlayerReadyStatusUpdated", nullptr, nullptr, sizeof(SBZStateMachineStateABPreMatch_eventOnPlayerReadyStatusUpdated_Parms), Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateABPreMatch_NoRegister()
	{
		return USBZStateMachineStateABPreMatch::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchmakingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_DelayedTravelToServer, "DelayedTravelToServer" }, // 2167328046
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleBeaconDisconnect, "HandleBeaconDisconnect" }, // 1420215116
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleInitializeTravel, "HandleInitializeTravel" }, // 2027792733
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleLobbyStateUpdated, "HandleLobbyStateUpdated" }, // 4086336029
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_HandleReceivedPlayerReadyAck, "HandleReceivedPlayerReadyAck" }, // 3320642461
		{ &Z_Construct_UFunction_USBZStateMachineStateABPreMatch_OnPlayerReadyStatusUpdated, "OnPlayerReadyStatusUpdated" }, // 1548347673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateABPreMatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::NewProp_MatchmakingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateABPreMatch" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::NewProp_MatchmakingData = { "MatchmakingData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateABPreMatch, MatchmakingData), Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::NewProp_MatchmakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::NewProp_MatchmakingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::NewProp_MatchmakingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateABPreMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::ClassParams = {
		&USBZStateMachineStateABPreMatch::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateABPreMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateABPreMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateABPreMatch, 3173986379);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateABPreMatch>()
	{
		return USBZStateMachineStateABPreMatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateABPreMatch(Z_Construct_UClass_USBZStateMachineStateABPreMatch, &USBZStateMachineStateABPreMatch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateABPreMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateABPreMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
