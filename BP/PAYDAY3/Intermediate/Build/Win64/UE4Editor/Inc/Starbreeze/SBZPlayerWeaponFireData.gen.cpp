// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerWeaponFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerWeaponFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerWeaponFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerWeaponFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponFireData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerWeaponFireData::execGetDamageOnEachDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceStep);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutDamageArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDamageOnEachDistance(Z_Param_MinDistance,Z_Param_MaxDistance,Z_Param_DistanceStep,Z_Param_Out_OutDamageArray);
		P_NATIVE_END;
	}
	void USBZPlayerWeaponFireData::StaticRegisterNativesUSBZPlayerWeaponFireData()
	{
		UClass* Class = USBZPlayerWeaponFireData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamageOnEachDistance", &USBZPlayerWeaponFireData::execGetDamageOnEachDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics
	{
		struct SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms
		{
			float MinDistance;
			float MaxDistance;
			float DistanceStep;
			TArray<float> OutDamageArray;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutDamageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDamageArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms, MinDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_DistanceStep = { "DistanceStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms, DistanceStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_OutDamageArray_Inner = { "OutDamageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_OutDamageArray = { "OutDamageArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms, OutDamageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_DistanceStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_OutDamageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::NewProp_OutDamageArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerWeaponFireData, nullptr, "GetDamageOnEachDistance", nullptr, nullptr, sizeof(SBZPlayerWeaponFireData_eventGetDamageOnEachDistance_Parms), Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerWeaponFireData_NoRegister()
	{
		return USBZPlayerWeaponFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerWeaponFireData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenBurstsSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenBurstsSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloadEndCycledEachRound_MetaData[];
#endif
		static void NewProp_bIsReloadEndCycledEachRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloadEndCycledEachRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLeftInChamber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoLeftInChamber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerFiredRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoPerFiredRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventoryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoInventoryMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWeaponFireData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerWeaponFireData_GetDamageOnEachDistance, "GetDamageOnEachDistance" }, // 36984149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerWeaponFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_TimeBetweenBurstsSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_TimeBetweenBurstsSeconds = { "TimeBetweenBurstsSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, TimeBetweenBurstsSeconds), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_TimeBetweenBurstsSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_TimeBetweenBurstsSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound_SetBit(void* Obj)
	{
		((USBZPlayerWeaponFireData*)Obj)->bIsReloadEndCycledEachRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound = { "bIsReloadEndCycledEachRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerWeaponFireData), &Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLoaded = { "AmmoLoaded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoLoaded), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLeftInChamber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLeftInChamber = { "AmmoLeftInChamber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoLeftInChamber), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLeftInChamber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLeftInChamber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPerFiredRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPerFiredRound = { "AmmoPerFiredRound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoPerFiredRound), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPerFiredRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPerFiredRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventoryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventoryMax = { "AmmoInventoryMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoInventoryMax), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventoryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventoryMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventory = { "AmmoInventory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoInventory), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPickup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPickup = { "AmmoPickup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, AmmoPickup), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_MuzzleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZPlayerWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_MuzzleData = { "MuzzleData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerWeaponFireData, MuzzleData), Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_MuzzleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_MuzzleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_TimeBetweenBurstsSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_bIsReloadEndCycledEachRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoLeftInChamber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPerFiredRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventoryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_AmmoPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::NewProp_MuzzleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerWeaponFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::ClassParams = {
		&USBZPlayerWeaponFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerWeaponFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerWeaponFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerWeaponFireData, 3456665932);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerWeaponFireData>()
	{
		return USBZPlayerWeaponFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerWeaponFireData(Z_Construct_UClass_USBZPlayerWeaponFireData, &USBZPlayerWeaponFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerWeaponFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerWeaponFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
