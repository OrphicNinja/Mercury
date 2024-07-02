// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitSoloGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitSoloGame() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitSoloGame();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnAsyncLoadAssetDatabaseDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAsyncLoadAssetDatabaseDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnFetchMapConfigurationDataDone)
	{
		P_GET_ENUM_REF(ESBZMetaRequestResult,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_InMapAssetName);
		P_GET_STRUCT(FSBZMatchmakingSessionResult,Z_Param_InMatchmakingResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFetchMapConfigurationDataDone((ESBZMetaRequestResult&)(Z_Param_Out_Result),Z_Param_InMapAssetName,Z_Param_InMatchmakingResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnGetSkuToItemIdMappingForItemsToGrantDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetSkuToItemIdMappingForItemsToGrantDone(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnLoadChallengesDone)
	{
		P_GET_ENUM_REF(ESBZMetaRequestResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadChallengesDone((ESBZMetaRequestResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnServerGameRecordsReceived)
	{
		P_GET_ENUM_REF(ESBZMetaRequestResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerGameRecordsReceived((ESBZMetaRequestResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execOnServerRetrieveEntitlementsDone)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerRetrieveEntitlementsDone(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitSoloGame::execPlayerSpawnDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerSpawnDelay();
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitSoloGame::StaticRegisterNativesUSBZStateMachineStateWaitSoloGame()
	{
		UClass* Class = USBZStateMachineStateWaitSoloGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAsyncLoadAssetDatabaseDone", &USBZStateMachineStateWaitSoloGame::execOnAsyncLoadAssetDatabaseDone },
			{ "OnFetchMapConfigurationDataDone", &USBZStateMachineStateWaitSoloGame::execOnFetchMapConfigurationDataDone },
			{ "OnGetSkuToItemIdMappingForItemsToGrantDone", &USBZStateMachineStateWaitSoloGame::execOnGetSkuToItemIdMappingForItemsToGrantDone },
			{ "OnLoadChallengesDone", &USBZStateMachineStateWaitSoloGame::execOnLoadChallengesDone },
			{ "OnServerGameRecordsReceived", &USBZStateMachineStateWaitSoloGame::execOnServerGameRecordsReceived },
			{ "OnServerRetrieveEntitlementsDone", &USBZStateMachineStateWaitSoloGame::execOnServerRetrieveEntitlementsDone },
			{ "PlayerSpawnDelay", &USBZStateMachineStateWaitSoloGame::execPlayerSpawnDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnAsyncLoadAssetDatabaseDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics
	{
		struct SBZStateMachineStateWaitSoloGame_eventOnFetchMapConfigurationDataDone_Parms
		{
			ESBZMetaRequestResult Result;
			FString InMapAssetName;
			FSBZMatchmakingSessionResult InMatchmakingResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMapAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InMapAssetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMatchmakingResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnFetchMapConfigurationDataDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMapAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMapAssetName = { "InMapAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnFetchMapConfigurationDataDone_Parms, InMapAssetName), METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMapAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMapAssetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMatchmakingResult = { "InMatchmakingResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnFetchMapConfigurationDataDone_Parms, InMatchmakingResult), Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMapAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::NewProp_InMatchmakingResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnFetchMapConfigurationDataDone", nullptr, nullptr, sizeof(SBZStateMachineStateWaitSoloGame_eventOnFetchMapConfigurationDataDone_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics
	{
		struct SBZStateMachineStateWaitSoloGame_eventOnGetSkuToItemIdMappingForItemsToGrantDone_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnGetSkuToItemIdMappingForItemsToGrantDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnGetSkuToItemIdMappingForItemsToGrantDone", nullptr, nullptr, sizeof(SBZStateMachineStateWaitSoloGame_eventOnGetSkuToItemIdMappingForItemsToGrantDone_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics
	{
		struct SBZStateMachineStateWaitSoloGame_eventOnLoadChallengesDone_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnLoadChallengesDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnLoadChallengesDone", nullptr, nullptr, sizeof(SBZStateMachineStateWaitSoloGame_eventOnLoadChallengesDone_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics
	{
		struct SBZStateMachineStateWaitSoloGame_eventOnServerGameRecordsReceived_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnServerGameRecordsReceived_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnServerGameRecordsReceived", nullptr, nullptr, sizeof(SBZStateMachineStateWaitSoloGame_eventOnServerGameRecordsReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics
	{
		struct SBZStateMachineStateWaitSoloGame_eventOnServerRetrieveEntitlementsDone_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitSoloGame_eventOnServerRetrieveEntitlementsDone_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "OnServerRetrieveEntitlementsDone", nullptr, nullptr, sizeof(SBZStateMachineStateWaitSoloGame_eventOnServerRetrieveEntitlementsDone_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, nullptr, "PlayerSpawnDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_NoRegister()
	{
		return USBZStateMachineStateWaitSoloGame::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnAsyncLoadAssetDatabaseDone, "OnAsyncLoadAssetDatabaseDone" }, // 1301691418
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnFetchMapConfigurationDataDone, "OnFetchMapConfigurationDataDone" }, // 459701048
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnGetSkuToItemIdMappingForItemsToGrantDone, "OnGetSkuToItemIdMappingForItemsToGrantDone" }, // 1616933799
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnLoadChallengesDone, "OnLoadChallengesDone" }, // 4271018750
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerGameRecordsReceived, "OnServerGameRecordsReceived" }, // 1831134245
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_OnServerRetrieveEntitlementsDone, "OnServerRetrieveEntitlementsDone" }, // 293868859
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitSoloGame_PlayerSpawnDelay, "PlayerSpawnDelay" }, // 4066373186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitSoloGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitSoloGame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitSoloGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitSoloGame, LoadingScreen), Z_Construct_UClass_USBZLoadingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::NewProp_LoadingScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::NewProp_LoadingScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitSoloGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::ClassParams = {
		&USBZStateMachineStateWaitSoloGame::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitSoloGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitSoloGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitSoloGame, 123869335);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitSoloGame>()
	{
		return USBZStateMachineStateWaitSoloGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitSoloGame(Z_Construct_UClass_USBZStateMachineStateWaitSoloGame, &USBZStateMachineStateWaitSoloGame::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitSoloGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitSoloGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
