// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaultManager.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaultManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AssaultManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AssaultManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AssaultSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest();
// End Cross Module References
	DEFINE_FUNCTION(UPD3AssaultManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3AssaultManager**)Z_Param__Result=UPD3AssaultManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execIsAssaultActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAssaultActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execOnDamageTakenEvent)
	{
		P_GET_STRUCT_REF(FSBZDamageEvent,Z_Param_Out_DamageEventdata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageTakenEvent(Z_Param_Out_DamageEventdata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execOnECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execOnPawnSpawned)
	{
		P_GET_OBJECT(USBZSpawnManager,Z_Param_SpawnManager);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSpawned(Z_Param_SpawnManager,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execOnPlayersAliveChanged)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayersAliveChanged(Z_Param_Out_Players);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execRequestVehicleSpawn)
	{
		P_GET_OBJECT(USBZAssaultVehicleSpawnerData,Z_Param_VehicleData);
		P_GET_OBJECT(ASBZSpline,Z_Param_EnterSpline);
		P_GET_OBJECT(ASBZSpline,Z_Param_ExitSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestVehicleSpawn(Z_Param_VehicleData,Z_Param_EnterSpline,Z_Param_ExitSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execSetAdditionalDistanceScoreWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalDistanceScoreWeight(Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execSetAdditionalTimeScoreWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalTimeScoreWeight(Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execSetAssaultActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssaultActive(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execSetLevelProgression)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLevelProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelProgression(Z_Param_InLevelProgression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execSetVehicleSpawnEnabled)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleSpawnEnabled(Z_Param_Spline,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3AssaultManager::execStartEndlessAssault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndlessAssault();
		P_NATIVE_END;
	}
	void UPD3AssaultManager::StaticRegisterNativesUPD3AssaultManager()
	{
		UClass* Class = UPD3AssaultManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UPD3AssaultManager::execGet },
			{ "IsAssaultActive", &UPD3AssaultManager::execIsAssaultActive },
			{ "OnDamageTakenEvent", &UPD3AssaultManager::execOnDamageTakenEvent },
			{ "OnECMCountChanged", &UPD3AssaultManager::execOnECMCountChanged },
			{ "OnHeistStateChanged", &UPD3AssaultManager::execOnHeistStateChanged },
			{ "OnPawnSpawned", &UPD3AssaultManager::execOnPawnSpawned },
			{ "OnPlayersAliveChanged", &UPD3AssaultManager::execOnPlayersAliveChanged },
			{ "RequestVehicleSpawn", &UPD3AssaultManager::execRequestVehicleSpawn },
			{ "SetAdditionalDistanceScoreWeight", &UPD3AssaultManager::execSetAdditionalDistanceScoreWeight },
			{ "SetAdditionalTimeScoreWeight", &UPD3AssaultManager::execSetAdditionalTimeScoreWeight },
			{ "SetAssaultActive", &UPD3AssaultManager::execSetAssaultActive },
			{ "SetLevelProgression", &UPD3AssaultManager::execSetLevelProgression },
			{ "SetVehicleSpawnEnabled", &UPD3AssaultManager::execSetVehicleSpawnEnabled },
			{ "StartEndlessAssault", &UPD3AssaultManager::execStartEndlessAssault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_Get_Statics
	{
		struct PD3AssaultManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			UPD3AssaultManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UPD3AssaultManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "Get", nullptr, nullptr, sizeof(PD3AssaultManager_eventGet_Parms), Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics
	{
		struct PD3AssaultManager_eventIsAssaultActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PD3AssaultManager_eventIsAssaultActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3AssaultManager_eventIsAssaultActive_Parms), &Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "IsAssaultActive", nullptr, nullptr, sizeof(PD3AssaultManager_eventIsAssaultActive_Parms), Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics
	{
		struct PD3AssaultManager_eventOnDamageTakenEvent_Parms
		{
			FSBZDamageEvent DamageEventdata;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEventdata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::NewProp_DamageEventdata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::NewProp_DamageEventdata = { "DamageEventdata", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnDamageTakenEvent_Parms, DamageEventdata), Z_Construct_UScriptStruct_FSBZDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::NewProp_DamageEventdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::NewProp_DamageEventdata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::NewProp_DamageEventdata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "OnDamageTakenEvent", nullptr, nullptr, sizeof(PD3AssaultManager_eventOnDamageTakenEvent_Parms), Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics
	{
		struct PD3AssaultManager_eventOnECMCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((PD3AssaultManager_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3AssaultManager_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(PD3AssaultManager_eventOnECMCountChanged_Parms), Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics
	{
		struct PD3AssaultManager_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(PD3AssaultManager_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics
	{
		struct PD3AssaultManager_eventOnPawnSpawned_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnPawnSpawned_Parms, SpawnManager), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnPawnSpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_SpawnManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "OnPawnSpawned", nullptr, nullptr, sizeof(PD3AssaultManager_eventOnPawnSpawned_Parms), Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics
	{
		struct PD3AssaultManager_eventOnPlayersAliveChanged_Parms
		{
			TArray<UObject*> Players;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventOnPlayersAliveChanged_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::NewProp_Players,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "OnPlayersAliveChanged", nullptr, nullptr, sizeof(PD3AssaultManager_eventOnPlayersAliveChanged_Parms), Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics
	{
		struct PD3AssaultManager_eventRequestVehicleSpawn_Parms
		{
			USBZAssaultVehicleSpawnerData* VehicleData;
			ASBZSpline* EnterSpline;
			ASBZSpline* ExitSpline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterSpline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_VehicleData = { "VehicleData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventRequestVehicleSpawn_Parms, VehicleData), Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_EnterSpline = { "EnterSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventRequestVehicleSpawn_Parms, EnterSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_ExitSpline = { "ExitSpline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventRequestVehicleSpawn_Parms, ExitSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_VehicleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_EnterSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::NewProp_ExitSpline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "RequestVehicleSpawn", nullptr, nullptr, sizeof(PD3AssaultManager_eventRequestVehicleSpawn_Parms), Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics
	{
		struct PD3AssaultManager_eventSetAdditionalDistanceScoreWeight_Parms
		{
			float InWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventSetAdditionalDistanceScoreWeight_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "SetAdditionalDistanceScoreWeight", nullptr, nullptr, sizeof(PD3AssaultManager_eventSetAdditionalDistanceScoreWeight_Parms), Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics
	{
		struct PD3AssaultManager_eventSetAdditionalTimeScoreWeight_Parms
		{
			float InWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventSetAdditionalTimeScoreWeight_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "SetAdditionalTimeScoreWeight", nullptr, nullptr, sizeof(PD3AssaultManager_eventSetAdditionalTimeScoreWeight_Parms), Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics
	{
		struct PD3AssaultManager_eventSetAssaultActive_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((PD3AssaultManager_eventSetAssaultActive_Parms*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3AssaultManager_eventSetAssaultActive_Parms), &Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "SetAssaultActive", nullptr, nullptr, sizeof(PD3AssaultManager_eventSetAssaultActive_Parms), Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics
	{
		struct PD3AssaultManager_eventSetLevelProgression_Parms
		{
			float InLevelProgression;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLevelProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::NewProp_InLevelProgression = { "InLevelProgression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventSetLevelProgression_Parms, InLevelProgression), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::NewProp_InLevelProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "SetLevelProgression", nullptr, nullptr, sizeof(PD3AssaultManager_eventSetLevelProgression_Parms), Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics
	{
		struct PD3AssaultManager_eventSetVehicleSpawnEnabled_Parms
		{
			ASBZSpline* Spline;
			bool bEnabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AssaultManager_eventSetVehicleSpawnEnabled_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PD3AssaultManager_eventSetVehicleSpawnEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3AssaultManager_eventSetVehicleSpawnEnabled_Parms), &Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "SetVehicleSpawnEnabled", nullptr, nullptr, sizeof(PD3AssaultManager_eventSetVehicleSpawnEnabled_Parms), Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AssaultManager, nullptr, "StartEndlessAssault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3AssaultManager_NoRegister()
	{
		return UPD3AssaultManager::StaticClass();
	}
	struct Z_Construct_UClass_UPD3AssaultManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CachedSpawnOrders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSpawnOrders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedSpawnOrders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnGroupSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SpawnGroupSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountedTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CountedTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMBlockedTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ECMBlockedTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleSpawnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleSpawnRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableTypeCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowableTypeCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuddySystemAdditionalSpecials_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuddySystemAdditionalSpecials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3AssaultManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3AssaultManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3AssaultManager_Get, "Get" }, // 3124150301
		{ &Z_Construct_UFunction_UPD3AssaultManager_IsAssaultActive, "IsAssaultActive" }, // 2459642081
		{ &Z_Construct_UFunction_UPD3AssaultManager_OnDamageTakenEvent, "OnDamageTakenEvent" }, // 3553284553
		{ &Z_Construct_UFunction_UPD3AssaultManager_OnECMCountChanged, "OnECMCountChanged" }, // 924581853
		{ &Z_Construct_UFunction_UPD3AssaultManager_OnHeistStateChanged, "OnHeistStateChanged" }, // 2059661926
		{ &Z_Construct_UFunction_UPD3AssaultManager_OnPawnSpawned, "OnPawnSpawned" }, // 2800801108
		{ &Z_Construct_UFunction_UPD3AssaultManager_OnPlayersAliveChanged, "OnPlayersAliveChanged" }, // 2398020644
		{ &Z_Construct_UFunction_UPD3AssaultManager_RequestVehicleSpawn, "RequestVehicleSpawn" }, // 2675014100
		{ &Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalDistanceScoreWeight, "SetAdditionalDistanceScoreWeight" }, // 1655825330
		{ &Z_Construct_UFunction_UPD3AssaultManager_SetAdditionalTimeScoreWeight, "SetAdditionalTimeScoreWeight" }, // 2398260228
		{ &Z_Construct_UFunction_UPD3AssaultManager_SetAssaultActive, "SetAssaultActive" }, // 207315667
		{ &Z_Construct_UFunction_UPD3AssaultManager_SetLevelProgression, "SetLevelProgression" }, // 2087822782
		{ &Z_Construct_UFunction_UPD3AssaultManager_SetVehicleSpawnEnabled, "SetVehicleSpawnEnabled" }, // 634915468
		{ &Z_Construct_UFunction_UPD3AssaultManager_StartEndlessAssault, "StartEndlessAssault" }, // 958201887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3AssaultManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, Settings), Z_Construct_UClass_UPD3AssaultSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders_Inner = { "CachedSpawnOrders", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISquadOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders = { "CachedSpawnOrders", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, CachedSpawnOrders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet_ElementProp = { "SpawnGroupSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet = { "SpawnGroupSet", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, SpawnGroupSet), METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CountedTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CountedTypes = { "CountedTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, CountedTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CountedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CountedTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ECMBlockedTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ECMBlockedTypes = { "ECMBlockedTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, ECMBlockedTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ECMBlockedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ECMBlockedTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests_Inner = { "VehicleSpawnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests = { "VehicleSpawnRequests", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, VehicleSpawnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ThrowableTypeCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ThrowableTypeCooldown = { "ThrowableTypeCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ThrowableTypeCooldown, UPD3AssaultManager), STRUCT_OFFSET(UPD3AssaultManager, ThrowableTypeCooldown), METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ThrowableTypeCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ThrowableTypeCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_BuddySystemAdditionalSpecials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultManager" },
		{ "ModuleRelativePath", "Public/PD3AssaultManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_BuddySystemAdditionalSpecials = { "BuddySystemAdditionalSpecials", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AssaultManager, BuddySystemAdditionalSpecials), METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_BuddySystemAdditionalSpecials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_BuddySystemAdditionalSpecials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3AssaultManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CachedSpawnOrders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_SpawnGroupSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_CountedTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ECMBlockedTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_VehicleSpawnRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_ThrowableTypeCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AssaultManager_Statics::NewProp_BuddySystemAdditionalSpecials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3AssaultManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3AssaultManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3AssaultManager_Statics::ClassParams = {
		&UPD3AssaultManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3AssaultManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3AssaultManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AssaultManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3AssaultManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3AssaultManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3AssaultManager, 3851694088);
	template<> STARBREEZE_API UClass* StaticClass<UPD3AssaultManager>()
	{
		return UPD3AssaultManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3AssaultManager(Z_Construct_UClass_UPD3AssaultManager, &UPD3AssaultManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3AssaultManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3AssaultManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
