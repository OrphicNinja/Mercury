// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCivilianManager.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCivilianManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManagerSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCivilianManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCivilianManager**)Z_Param__Result=USBZCivilianManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCivilianManager::execIsAllowedToFlee)
	{
		P_GET_OBJECT(ASBZAIController,Z_Param_AIController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowedToFlee(Z_Param_AIController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCivilianManager::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCivilianManager::execOnPawnSpawned)
	{
		P_GET_OBJECT(USBZSpawnManager,Z_Param_SpawnManager);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSpawned(Z_Param_SpawnManager,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCivilianManager::execStopStaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopStaying();
		P_NATIVE_END;
	}
	void USBZCivilianManager::StaticRegisterNativesUSBZCivilianManager()
	{
		UClass* Class = USBZCivilianManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZCivilianManager::execGet },
			{ "IsAllowedToFlee", &USBZCivilianManager::execIsAllowedToFlee },
			{ "OnHeistStateChanged", &USBZCivilianManager::execOnHeistStateChanged },
			{ "OnPawnSpawned", &USBZCivilianManager::execOnPawnSpawned },
			{ "StopStaying", &USBZCivilianManager::execStopStaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCivilianManager_Get_Statics
	{
		struct SBZCivilianManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZCivilianManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZCivilianManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCivilianManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCivilianManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCivilianManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZCivilianManager_eventGet_Parms), Z_Construct_UFunction_USBZCivilianManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCivilianManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCivilianManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics
	{
		struct SBZCivilianManager_eventIsAllowedToFlee_Parms
		{
			ASBZAIController* AIController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventIsAllowedToFlee_Parms, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCivilianManager_eventIsAllowedToFlee_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCivilianManager_eventIsAllowedToFlee_Parms), &Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCivilianManager, nullptr, "IsAllowedToFlee", nullptr, nullptr, sizeof(SBZCivilianManager_eventIsAllowedToFlee_Parms), Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics
	{
		struct SBZCivilianManager_eventOnHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCivilianManager, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZCivilianManager_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics
	{
		struct SBZCivilianManager_eventOnPawnSpawned_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventOnPawnSpawned_Parms, SpawnManager), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_SpawnManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCivilianManager_eventOnPawnSpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_SpawnManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCivilianManager, nullptr, "OnPawnSpawned", nullptr, nullptr, sizeof(SBZCivilianManager_eventOnPawnSpawned_Parms), Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCivilianManager, nullptr, "StopStaying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCivilianManager_StopStaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCivilianManager_StopStaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCivilianManager_NoRegister()
	{
		return USBZCivilianManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCivilianManager_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnGroupArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnGroupArray;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_StayingCivilians_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayingCivilians_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StayingCivilians;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCivilianManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCivilianManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCivilianManager_Get, "Get" }, // 3308859285
		{ &Z_Construct_UFunction_USBZCivilianManager_IsAllowedToFlee, "IsAllowedToFlee" }, // 2487159012
		{ &Z_Construct_UFunction_USBZCivilianManager_OnHeistStateChanged, "OnHeistStateChanged" }, // 3103503741
		{ &Z_Construct_UFunction_USBZCivilianManager_OnPawnSpawned, "OnPawnSpawned" }, // 3093970801
		{ &Z_Construct_UFunction_USBZCivilianManager_StopStaying, "StopStaying" }, // 340805469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCivilianManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManager" },
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManager, Settings), Z_Construct_UClass_USBZCivilianManagerSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray_Inner = { "SpawnGroupArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManager" },
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray = { "SpawnGroupArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManager, SpawnGroupArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians_Inner = { "StayingCivilians", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManager" },
		{ "ModuleRelativePath", "Public/SBZCivilianManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians = { "StayingCivilians", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManager, StayingCivilians), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCivilianManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_SpawnGroupArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManager_Statics::NewProp_StayingCivilians,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCivilianManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCivilianManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCivilianManager_Statics::ClassParams = {
		&USBZCivilianManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCivilianManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCivilianManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCivilianManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCivilianManager, 2392951231);
	template<> STARBREEZE_API UClass* StaticClass<USBZCivilianManager>()
	{
		return USBZCivilianManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCivilianManager(Z_Construct_UClass_USBZCivilianManager, &USBZCivilianManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCivilianManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCivilianManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
