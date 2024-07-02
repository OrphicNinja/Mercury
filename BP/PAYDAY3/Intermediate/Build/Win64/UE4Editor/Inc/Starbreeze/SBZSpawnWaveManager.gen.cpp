// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSettings();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder();
// End Cross Module References
	DEFINE_FUNCTION(USBZSpawnWaveManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSpawnWaveManager**)Z_Param__Result=USBZSpawnWaveManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execGetSpawnWaveSettingsProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSpawnWaveSettingsProxyComponent**)Z_Param__Result=P_THIS->GetSpawnWaveSettingsProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execOnPawnKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnKilled(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execOnPawnSpawned)
	{
		P_GET_OBJECT(USBZSpawnManager,Z_Param_SpawnManager);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSpawned(Z_Param_SpawnManager,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execPopulateSpawnTypeLimitsOnWave)
	{
		P_GET_STRUCT_REF(FSBZSpawnWaveSettings,Z_Param_Out_WaveSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSpawnWaveManager::PopulateSpawnTypeLimitsOnWave(Z_Param_Out_WaveSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execSetDifficulty)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_NewDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(ESBZDifficulty(Z_Param_NewDifficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execSetOrderOnSpawnedPawns)
	{
		P_GET_STRUCT_REF(FSBZSpawnWaveFilteredOrder,Z_Param_Out_FilteredOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrderOnSpawnedPawns(Z_Param_Out_FilteredOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnWaveManager::execSetSpawnWaveSettingsProxy)
	{
		P_GET_OBJECT(USBZSpawnWaveSettingsProxyComponent,Z_Param_InSpawnWaveSettingsProxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnWaveSettingsProxy(Z_Param_InSpawnWaveSettingsProxy);
		P_NATIVE_END;
	}
	void USBZSpawnWaveManager::StaticRegisterNativesUSBZSpawnWaveManager()
	{
		UClass* Class = USBZSpawnWaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSpawnWaveManager::execGet },
			{ "GetSpawnWaveSettingsProxy", &USBZSpawnWaveManager::execGetSpawnWaveSettingsProxy },
			{ "OnPawnKilled", &USBZSpawnWaveManager::execOnPawnKilled },
			{ "OnPawnSpawned", &USBZSpawnWaveManager::execOnPawnSpawned },
			{ "PopulateSpawnTypeLimitsOnWave", &USBZSpawnWaveManager::execPopulateSpawnTypeLimitsOnWave },
			{ "SetDifficulty", &USBZSpawnWaveManager::execSetDifficulty },
			{ "SetOrderOnSpawnedPawns", &USBZSpawnWaveManager::execSetOrderOnSpawnedPawns },
			{ "SetSpawnWaveSettingsProxy", &USBZSpawnWaveManager::execSetSpawnWaveSettingsProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics
	{
		struct SBZSpawnWaveManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZSpawnWaveManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZSpawnWaveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventGet_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics
	{
		struct SBZSpawnWaveManager_eventGetSpawnWaveSettingsProxy_Parms
		{
			USBZSpawnWaveSettingsProxyComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventGetSpawnWaveSettingsProxy_Parms, ReturnValue), Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "GetSpawnWaveSettingsProxy", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventGetSpawnWaveSettingsProxy_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics
	{
		struct SBZSpawnWaveManager_eventOnPawnKilled_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventOnPawnKilled_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "OnPawnKilled", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventOnPawnKilled_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics
	{
		struct SBZSpawnWaveManager_eventOnPawnSpawned_Parms
		{
			USBZSpawnManager* SpawnManager;
			APawn* Pawn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventOnPawnSpawned_Parms, SpawnManager), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventOnPawnSpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_SpawnManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "OnPawnSpawned", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventOnPawnSpawned_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics
	{
		struct SBZSpawnWaveManager_eventPopulateSpawnTypeLimitsOnWave_Parms
		{
			FSBZSpawnWaveSettings WaveSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::NewProp_WaveSettings = { "WaveSettings", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventPopulateSpawnTypeLimitsOnWave_Parms, WaveSettings), Z_Construct_UScriptStruct_FSBZSpawnWaveSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::NewProp_WaveSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "PopulateSpawnTypeLimitsOnWave", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventPopulateSpawnTypeLimitsOnWave_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics
	{
		struct SBZSpawnWaveManager_eventSetDifficulty_Parms
		{
			ESBZDifficulty NewDifficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::NewProp_NewDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::NewProp_NewDifficulty = { "NewDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventSetDifficulty_Parms, NewDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::NewProp_NewDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::NewProp_NewDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventSetDifficulty_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics
	{
		struct SBZSpawnWaveManager_eventSetOrderOnSpawnedPawns_Parms
		{
			FSBZSpawnWaveFilteredOrder FilteredOrder;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilteredOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::NewProp_FilteredOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::NewProp_FilteredOrder = { "FilteredOrder", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventSetOrderOnSpawnedPawns_Parms, FilteredOrder), Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::NewProp_FilteredOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::NewProp_FilteredOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::NewProp_FilteredOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "SetOrderOnSpawnedPawns", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventSetOrderOnSpawnedPawns_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics
	{
		struct SBZSpawnWaveManager_eventSetSpawnWaveSettingsProxy_Parms
		{
			const USBZSpawnWaveSettingsProxyComponent* InSpawnWaveSettingsProxy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSpawnWaveSettingsProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSpawnWaveSettingsProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::NewProp_InSpawnWaveSettingsProxy_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::NewProp_InSpawnWaveSettingsProxy = { "InSpawnWaveSettingsProxy", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnWaveManager_eventSetSpawnWaveSettingsProxy_Parms, InSpawnWaveSettingsProxy), Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::NewProp_InSpawnWaveSettingsProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::NewProp_InSpawnWaveSettingsProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::NewProp_InSpawnWaveSettingsProxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnWaveManager, nullptr, "SetSpawnWaveSettingsProxy", nullptr, nullptr, sizeof(SBZSpawnWaveManager_eventSetSpawnWaveSettingsProxy_Parms), Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSpawnWaveManager_NoRegister()
	{
		return USBZSpawnWaveManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnWaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWaveSettingsProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnWaveSettingsProxy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnWaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSpawnWaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_Get, "Get" }, // 3348169382
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_GetSpawnWaveSettingsProxy, "GetSpawnWaveSettingsProxy" }, // 4182294981
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnKilled, "OnPawnKilled" }, // 2196462812
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_OnPawnSpawned, "OnPawnSpawned" }, // 707035670
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_PopulateSpawnTypeLimitsOnWave, "PopulateSpawnTypeLimitsOnWave" }, // 1833721014
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_SetDifficulty, "SetDifficulty" }, // 899625204
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_SetOrderOnSpawnedPawns, "SetOrderOnSpawnedPawns" }, // 1902510783
		{ &Z_Construct_UFunction_USBZSpawnWaveManager_SetSpawnWaveSettingsProxy, "SetSpawnWaveSettingsProxy" }, // 2574664259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpawnWaveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnWaveSettingsProxy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnWaveSettingsProxy = { "SpawnWaveSettingsProxy", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnWaveManager, SpawnWaveSettingsProxy), Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnWaveSettingsProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnWaveSettingsProxy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns_Inner = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveManager" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnWaveManager, SpawnedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSpawnWaveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnWaveSettingsProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveManager_Statics::NewProp_SpawnedPawns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnWaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnWaveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnWaveManager_Statics::ClassParams = {
		&USBZSpawnWaveManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSpawnWaveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnWaveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnWaveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnWaveManager, 928476791);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnWaveManager>()
	{
		return USBZSpawnWaveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnWaveManager(Z_Construct_UClass_USBZSpawnWaveManager, &USBZSpawnWaveManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnWaveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnWaveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
