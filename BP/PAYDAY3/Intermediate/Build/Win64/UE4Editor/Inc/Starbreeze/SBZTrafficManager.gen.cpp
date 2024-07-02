// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficManager.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficSettings_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficNode();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficSpline_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficDestinationNode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficLights_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficRouteArray();
// End Cross Module References
	DEFINE_FUNCTION(USBZTrafficManager::execHandleCivilianArrived)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCivilianArrived(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleEscapeVanArrived)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEscapeVanArrived(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleFirstResponderArrived)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFirstResponderArrived(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleSwatVanArrived)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSwatVanArrived(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleVehicleBeginObstacle)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVehicleBeginObstacle(Z_Param_Vehicle,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleVehicleEndObstacle)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVehicleEndObstacle(Z_Param_Vehicle,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execHandleVehicleStopped)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVehicleStopped(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execOnEnteredActionPhase)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredActionPhase(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTrafficManager::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	void USBZTrafficManager::StaticRegisterNativesUSBZTrafficManager()
	{
		UClass* Class = USBZTrafficManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCivilianArrived", &USBZTrafficManager::execHandleCivilianArrived },
			{ "HandleEscapeVanArrived", &USBZTrafficManager::execHandleEscapeVanArrived },
			{ "HandleFirstResponderArrived", &USBZTrafficManager::execHandleFirstResponderArrived },
			{ "HandleHeistStateChanged", &USBZTrafficManager::execHandleHeistStateChanged },
			{ "HandleSwatVanArrived", &USBZTrafficManager::execHandleSwatVanArrived },
			{ "HandleVehicleBeginObstacle", &USBZTrafficManager::execHandleVehicleBeginObstacle },
			{ "HandleVehicleEndObstacle", &USBZTrafficManager::execHandleVehicleEndObstacle },
			{ "HandleVehicleStopped", &USBZTrafficManager::execHandleVehicleStopped },
			{ "OnEnteredActionPhase", &USBZTrafficManager::execOnEnteredActionPhase },
			{ "OnExitedActionPhase", &USBZTrafficManager::execOnExitedActionPhase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics
	{
		struct SBZTrafficManager_eventHandleCivilianArrived_Parms
		{
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleCivilianArrived_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleCivilianArrived", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleCivilianArrived_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics
	{
		struct SBZTrafficManager_eventHandleEscapeVanArrived_Parms
		{
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleEscapeVanArrived_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleEscapeVanArrived", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleEscapeVanArrived_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics
	{
		struct SBZTrafficManager_eventHandleFirstResponderArrived_Parms
		{
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleFirstResponderArrived_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleFirstResponderArrived", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleFirstResponderArrived_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics
	{
		struct SBZTrafficManager_eventHandleHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleHeistStateChanged", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleHeistStateChanged_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics
	{
		struct SBZTrafficManager_eventHandleSwatVanArrived_Parms
		{
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleSwatVanArrived_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleSwatVanArrived", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleSwatVanArrived_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics
	{
		struct SBZTrafficManager_eventHandleVehicleBeginObstacle_Parms
		{
			ASBZWheeledVehicle* Vehicle;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleVehicleBeginObstacle_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleVehicleBeginObstacle_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleVehicleBeginObstacle", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleVehicleBeginObstacle_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics
	{
		struct SBZTrafficManager_eventHandleVehicleEndObstacle_Parms
		{
			ASBZWheeledVehicle* Vehicle;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleVehicleEndObstacle_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleVehicleEndObstacle_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleVehicleEndObstacle", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleVehicleEndObstacle_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics
	{
		struct SBZTrafficManager_eventHandleVehicleStopped_Parms
		{
			ASBZWheeledVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventHandleVehicleStopped_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "HandleVehicleStopped", nullptr, nullptr, sizeof(SBZTrafficManager_eventHandleVehicleStopped_Parms), Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics
	{
		struct SBZTrafficManager_eventOnEnteredActionPhase_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficManager_eventOnEnteredActionPhase_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "OnEnteredActionPhase", nullptr, nullptr, sizeof(SBZTrafficManager_eventOnEnteredActionPhase_Parms), Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTrafficManager, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister()
	{
		return USBZTrafficManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZTrafficManager_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrafficNodeGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficNodeGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficNodeGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrafficNodeGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationNodeGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationNodeGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationNodeGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DestinationNodeGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnerNodeGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerNodeGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerNodeGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnerNodeGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehiclesToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclesToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehiclesToSpawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PedestrianTrafficNavLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestrianTrafficNavLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PedestrianTrafficNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToNextSpawnAttempt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToNextSpawnAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountFirstRespondersLeftToArrive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountFirstRespondersLeftToArrive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeVan_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscapeVan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCivilianTrafficEnabled_MetaData[];
#endif
		static void NewProp_bCivilianTrafficEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCivilianTrafficEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToNextCivilianSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToNextCivilianSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountActiveCivilianVehicles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountActiveCivilianVehicles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParkedCivilianVehicles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParkedCivilianVehicles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParkedCivilianVehicles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridlockArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridlockArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridlockArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficLightArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrafficLightArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundHornTimerGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundHornTimerGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundHornTimerGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SoundHornTimerGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCivilianRouteArrayGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedCivilianRouteArrayGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCivilianRouteArrayGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedCivilianRouteArrayGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedFirstResponderRouteArrayGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedFirstResponderRouteArrayGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFirstResponderRouteArrayGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedFirstResponderRouteArrayGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedFBIVanRouteArrayGraph_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedFBIVanRouteArrayGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFBIVanRouteArrayGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedFBIVanRouteArrayGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInActionPhase_MetaData[];
#endif
		static void NewProp_bIsInActionPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInActionPhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTrafficManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTrafficManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleCivilianArrived, "HandleCivilianArrived" }, // 4213875386
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleEscapeVanArrived, "HandleEscapeVanArrived" }, // 4198090857
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleFirstResponderArrived, "HandleFirstResponderArrived" }, // 3730757065
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleHeistStateChanged, "HandleHeistStateChanged" }, // 1214653157
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleSwatVanArrived, "HandleSwatVanArrived" }, // 2706633235
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleVehicleBeginObstacle, "HandleVehicleBeginObstacle" }, // 464887986
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleVehicleEndObstacle, "HandleVehicleEndObstacle" }, // 4199967395
		{ &Z_Construct_UFunction_USBZTrafficManager_HandleVehicleStopped, "HandleVehicleStopped" }, // 1181705842
		{ &Z_Construct_UFunction_USBZTrafficManager_OnEnteredActionPhase, "OnEnteredActionPhase" }, // 727675505
		{ &Z_Construct_UFunction_USBZTrafficManager_OnExitedActionPhase, "OnExitedActionPhase" }, // 2554051345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTrafficManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, Settings), Z_Construct_UClass_USBZTrafficSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_ValueProp = { "TrafficNodeGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_Key_KeyProp = { "TrafficNodeGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph = { "TrafficNodeGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, TrafficNodeGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_ValueProp = { "DestinationNodeGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficDestinationNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_Key_KeyProp = { "DestinationNodeGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph = { "DestinationNodeGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, DestinationNodeGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_ValueProp = { "SpawnerNodeGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficSpawnerNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_Key_KeyProp = { "SpawnerNodeGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph = { "SpawnerNodeGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, SpawnerNodeGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray_Inner = { "VehicleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficVehicleInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray = { "VehicleArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, VehicleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn_Inner = { "VehiclesToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficSpawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn = { "VehiclesToSpawn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, VehiclesToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks_Inner = { "PedestrianTrafficNavLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks = { "PedestrianTrafficNavLinks", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, PedestrianTrafficNavLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextSpawnAttempt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextSpawnAttempt = { "TimeToNextSpawnAttempt", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, TimeToNextSpawnAttempt), METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextSpawnAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextSpawnAttempt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountFirstRespondersLeftToArrive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountFirstRespondersLeftToArrive = { "AmountFirstRespondersLeftToArrive", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, AmountFirstRespondersLeftToArrive), METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountFirstRespondersLeftToArrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountFirstRespondersLeftToArrive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_EscapeVan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_EscapeVan = { "EscapeVan", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, EscapeVan), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_EscapeVan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_EscapeVan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	void Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled_SetBit(void* Obj)
	{
		((USBZTrafficManager*)Obj)->bCivilianTrafficEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled = { "bCivilianTrafficEnabled", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZTrafficManager), &Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextCivilianSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextCivilianSpawn = { "TimeToNextCivilianSpawn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, TimeToNextCivilianSpawn), METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextCivilianSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextCivilianSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountActiveCivilianVehicles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountActiveCivilianVehicles = { "AmountActiveCivilianVehicles", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, AmountActiveCivilianVehicles), METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountActiveCivilianVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountActiveCivilianVehicles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles_Inner = { "ParkedCivilianVehicles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles = { "ParkedCivilianVehicles", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, ParkedCivilianVehicles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray_Inner = { "GridlockArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficGridlockInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray = { "GridlockArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, GridlockArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray_Inner = { "TrafficLightArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficLights_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray = { "TrafficLightArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, TrafficLightArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_ValueProp = { "SoundHornTimerGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_Key_KeyProp = { "SoundHornTimerGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph = { "SoundHornTimerGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, SoundHornTimerGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_ValueProp = { "CachedCivilianRouteArrayGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficRouteArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_Key_KeyProp = { "CachedCivilianRouteArrayGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph = { "CachedCivilianRouteArrayGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, CachedCivilianRouteArrayGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_ValueProp = { "CachedFirstResponderRouteArrayGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficRouteArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_Key_KeyProp = { "CachedFirstResponderRouteArrayGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph = { "CachedFirstResponderRouteArrayGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, CachedFirstResponderRouteArrayGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_ValueProp = { "CachedFBIVanRouteArrayGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZTrafficRouteArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_Key_KeyProp = { "CachedFBIVanRouteArrayGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph = { "CachedFBIVanRouteArrayGraph", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTrafficManager, CachedFBIVanRouteArrayGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficManager" },
		{ "ModuleRelativePath", "Public/SBZTrafficManager.h" },
	};
#endif
	void Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase_SetBit(void* Obj)
	{
		((USBZTrafficManager*)Obj)->bIsInActionPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase = { "bIsInActionPhase", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZTrafficManager), &Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTrafficManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficNodeGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_DestinationNodeGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SpawnerNodeGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehicleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_VehiclesToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_PedestrianTrafficNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextSpawnAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountFirstRespondersLeftToArrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_EscapeVan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bCivilianTrafficEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TimeToNextCivilianSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_AmountActiveCivilianVehicles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_ParkedCivilianVehicles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_GridlockArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_TrafficLightArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_SoundHornTimerGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedCivilianRouteArrayGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFirstResponderRouteArrayGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_CachedFBIVanRouteArrayGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTrafficManager_Statics::NewProp_bIsInActionPhase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTrafficManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTrafficManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTrafficManager_Statics::ClassParams = {
		&USBZTrafficManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZTrafficManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTrafficManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrafficManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTrafficManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTrafficManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTrafficManager, 3748334836);
	template<> STARBREEZE_API UClass* StaticClass<USBZTrafficManager>()
	{
		return USBZTrafficManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTrafficManager(Z_Construct_UClass_USBZTrafficManager, &USBZTrafficManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTrafficManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTrafficManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
