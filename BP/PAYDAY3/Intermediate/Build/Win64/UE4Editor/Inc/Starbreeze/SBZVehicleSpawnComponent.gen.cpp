// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSpawnComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSpawnComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSpawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAerialVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleSpawnResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnCompletedDelegateBP__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnAerialReachedPathEnd)
	{
		P_GET_OBJECT(ASBZAerialVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAerialReachedPathEnd(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnAerialStarted)
	{
		P_GET_OBJECT(ASBZAerialVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAerialStarted(Z_Param_Vehicle,Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnPawnSpawned)
	{
		P_GET_OBJECT(APD3PawnSpawnGroup,Z_Param_InSpawnGroup);
		P_GET_OBJECT(ASBZPawnSpawnBase,Z_Param_Spawner);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSpawned(Z_Param_InSpawnGroup,Z_Param_Spawner,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnWheeledReachedPathEnd)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWheeledReachedPathEnd(Z_Param_Vehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execOnWheeledStarted)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWheeledStarted(Z_Param_Vehicle,Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSpawnComponent::execSpawnCompleted)
	{
		P_GET_ENUM(ESBZVehicleSpawnResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCompleted(ESBZVehicleSpawnResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZVehicleSpawnComponent::StaticRegisterNativesUSBZVehicleSpawnComponent()
	{
		UClass* Class = USBZVehicleSpawnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAerialReachedPathEnd", &USBZVehicleSpawnComponent::execOnAerialReachedPathEnd },
			{ "OnAerialStarted", &USBZVehicleSpawnComponent::execOnAerialStarted },
			{ "OnHeistStateChanged", &USBZVehicleSpawnComponent::execOnHeistStateChanged },
			{ "OnPawnSpawned", &USBZVehicleSpawnComponent::execOnPawnSpawned },
			{ "OnWheeledReachedPathEnd", &USBZVehicleSpawnComponent::execOnWheeledReachedPathEnd },
			{ "OnWheeledStarted", &USBZVehicleSpawnComponent::execOnWheeledStarted },
			{ "SpawnCompleted", &USBZVehicleSpawnComponent::execSpawnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnAerialReachedPathEnd_Parms
		{
			ASBZAerialVehicle* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnAerialReachedPathEnd_Parms, Vehicle), Z_Construct_UClass_ASBZAerialVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnAerialReachedPathEnd", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnAerialReachedPathEnd_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnAerialStarted_Parms
		{
			ASBZAerialVehicle* Vehicle;
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnAerialStarted_Parms, Vehicle), Z_Construct_UClass_ASBZAerialVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnAerialStarted_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnAerialStarted", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnAerialStarted_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnPawnSpawned_Parms
		{
			APD3PawnSpawnGroup* InSpawnGroup;
			ASBZPawnSpawnBase* Spawner;
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSpawnGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_InSpawnGroup = { "InSpawnGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnPawnSpawned_Parms, InSpawnGroup), Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnPawnSpawned_Parms, Spawner), Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnPawnSpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_InSpawnGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_Spawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnPawnSpawned", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnPawnSpawned_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnWheeledReachedPathEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnWheeledReachedPathEnd_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnWheeledReachedPathEnd", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnWheeledReachedPathEnd_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics
	{
		struct SBZVehicleSpawnComponent_eventOnWheeledStarted_Parms
		{
			ASBZWheeledVehicle* Vehicle;
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnWheeledStarted_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventOnWheeledStarted_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "OnWheeledStarted", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventOnWheeledStarted_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics
	{
		struct SBZVehicleSpawnComponent_eventSpawnCompleted_Parms
		{
			ESBZVehicleSpawnResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSpawnComponent_eventSpawnCompleted_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZVehicleSpawnResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSpawnComponent, nullptr, "SpawnCompleted", nullptr, nullptr, sizeof(SBZVehicleSpawnComponent_eventSpawnCompleted_Parms), Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister()
	{
		return USBZVehicleSpawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleSpawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpawnCompletedBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnCompletedBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroupSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnGroupSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnerSelectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnerSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableForAssault_MetaData[];
#endif
		static void NewProp_bEnableForAssault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableForAssault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialSpawnOnly_MetaData[];
#endif
		static void NewProp_bInitialSpawnOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialSpawnOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomSpawnCompleted_MetaData[];
#endif
		static void NewProp_bCustomSpawnCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomSpawnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialReachedPathEnd, "OnAerialReachedPathEnd" }, // 79746928
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnAerialStarted, "OnAerialStarted" }, // 2899283209
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnHeistStateChanged, "OnHeistStateChanged" }, // 2859436320
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnPawnSpawned, "OnPawnSpawned" }, // 4157155969
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledReachedPathEnd, "OnWheeledReachedPathEnd" }, // 3107123402
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_OnWheeledStarted, "OnWheeledStarted" }, // 4210961907
		{ &Z_Construct_UFunction_USBZVehicleSpawnComponent_SpawnCompleted, "SpawnCompleted" }, // 3314413929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZVehicleSpawnComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_OnSpawnCompletedBP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_OnSpawnCompletedBP = { "OnSpawnCompletedBP", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, OnSpawnCompletedBP), Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnCompletedDelegateBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_OnSpawnCompletedBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_OnSpawnCompletedBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroupSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroupSelector = { "SpawnGroupSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnGroupSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroupSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroupSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors_Inner = { "SpawnerSelectors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors = { "SpawnerSelectors", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnerSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault_SetBit(void* Obj)
	{
		((USBZVehicleSpawnComponent*)Obj)->bEnableForAssault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault = { "bEnableForAssault", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZVehicleSpawnComponent), &Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_MaxNumSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_MaxNumSpawn = { "MaxNumSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, MaxNumSpawn), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_MaxNumSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_MaxNumSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly_SetBit(void* Obj)
	{
		((USBZVehicleSpawnComponent*)Obj)->bInitialSpawnOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly = { "bInitialSpawnOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZVehicleSpawnComponent), &Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted_SetBit(void* Obj)
	{
		((USBZVehicleSpawnComponent*)Obj)->bCustomSpawnCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted = { "bCustomSpawnCompleted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZVehicleSpawnComponent), &Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroup = { "SpawnGroup", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnGroup), Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroup_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSpawnComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSpawnComponent, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_OnSpawnCompletedBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroupSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnerSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bEnableForAssault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_MaxNumSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bInitialSpawnOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_bCustomSpawnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_SpawnGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::NewProp_Spawners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleSpawnComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::ClassParams = {
		&USBZVehicleSpawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleSpawnComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleSpawnComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleSpawnComponent, 3313609158);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleSpawnComponent>()
	{
		return USBZVehicleSpawnComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleSpawnComponent(Z_Construct_UClass_USBZVehicleSpawnComponent, &USBZVehicleSpawnComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleSpawnComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleSpawnComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
