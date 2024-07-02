// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponBaseAttackData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZProjectileImpactType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
// End Cross Module References
	DEFINE_FUNCTION(USBZWeaponFireData::execGetCriticalMultipliersOnEachDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceStep);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutMultiplierArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCriticalMultipliersOnEachDistance(Z_Param_MinDistance,Z_Param_MaxDistance,Z_Param_DistanceStep,Z_Param_Out_OutMultiplierArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWeaponFireData::execGetProjectilesPerFiredRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetProjectilesPerFiredRound();
		P_NATIVE_END;
	}
	void USBZWeaponFireData::StaticRegisterNativesUSBZWeaponFireData()
	{
		UClass* Class = USBZWeaponFireData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCriticalMultipliersOnEachDistance", &USBZWeaponFireData::execGetCriticalMultipliersOnEachDistance },
			{ "GetProjectilesPerFiredRound", &USBZWeaponFireData::execGetProjectilesPerFiredRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics
	{
		struct SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms
		{
			float MinDistance;
			float MaxDistance;
			float DistanceStep;
			TArray<float> OutMultiplierArray;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMultiplierArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMultiplierArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms, MinDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_DistanceStep = { "DistanceStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms, DistanceStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_OutMultiplierArray_Inner = { "OutMultiplierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_OutMultiplierArray = { "OutMultiplierArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms, OutMultiplierArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_DistanceStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_OutMultiplierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::NewProp_OutMultiplierArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponFireData, nullptr, "GetCriticalMultipliersOnEachDistance", nullptr, nullptr, sizeof(SBZWeaponFireData_eventGetCriticalMultipliersOnEachDistance_Parms), Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics
	{
		struct SBZWeaponFireData_eventGetProjectilesPerFiredRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponFireData_eventGetProjectilesPerFiredRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponFireData, nullptr, "GetProjectilesPerFiredRound", nullptr, nullptr, sizeof(SBZWeaponFireData_eventGetProjectilesPerFiredRound_Parms), Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWeaponFireData_NoRegister()
	{
		return USBZWeaponFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponFireData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CriticalDamageMultiplierDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamageMultiplierDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CriticalDamageMultiplierDistanceArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilesPerFiredRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ProjectilesPerFiredRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstRoundCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BurstRoundCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumPenetrationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumPenetrationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitEnvironmentAfterPenetration_MetaData[];
#endif
		static void NewProp_bCanHitEnvironmentAfterPenetration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitEnvironmentAfterPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPenetrateBlocked_MetaData[];
#endif
		static void NewProp_bCanPenetrateBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPenetrateBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlayerRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalPlayerRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImpactType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImpactType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoVisibilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoVisibilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoVisibilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadeProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GrenadeProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetrationProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetrationProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstigatorPlayerDamageScale_MetaData[];
#endif
		static void NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFriendlyFireAllowed_MetaData[];
#endif
		static void NewProp_bIsFriendlyFireAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFriendlyFireAllowed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceProjectileArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceProjectileArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceProjectileArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLoadedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoLoadedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoPerReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoVisibleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoVisibleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoVisibleMaxPreviewOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoVisibleMaxPreviewOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEmptyAmmoEjected_MetaData[];
#endif
		static void NewProp_bIsEmptyAmmoEjected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEmptyAmmoEjected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquippedAmmoLoadedTracked_MetaData[];
#endif
		static void NewProp_bIsEquippedAmmoLoadedTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquippedAmmoLoadedTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChamberRotatedEachFiredRound_MetaData[];
#endif
		static void NewProp_bIsChamberRotatedEachFiredRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChamberRotatedEachFiredRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChamberRotatedEachReloadedRound_MetaData[];
#endif
		static void NewProp_bIsChamberRotatedEachReloadedRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChamberRotatedEachReloadedRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingRemoveMagazineCycle_MetaData[];
#endif
		static void NewProp_bIsUsingRemoveMagazineCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingRemoveMagazineCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInsertMagazine_MetaData[];
#endif
		static void NewProp_bIsUsingInsertMagazine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInsertMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInsertMagazineCycle_MetaData[];
#endif
		static void NewProp_bIsUsingInsertMagazineCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInsertMagazineCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInsertAmmoCycle1_MetaData[];
#endif
		static void NewProp_bIsUsingInsertAmmoCycle1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInsertAmmoCycle1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInsertAmmoCycle2_MetaData[];
#endif
		static void NewProp_bIsUsingInsertAmmoCycle2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInsertAmmoCycle2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWeaponBaseAttackData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWeaponFireData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWeaponFireData_GetCriticalMultipliersOnEachDistance, "GetCriticalMultipliersOnEachDistance" }, // 3086559788
		{ &Z_Construct_UFunction_USBZWeaponFireData_GetProjectilesPerFiredRound, "GetProjectilesPerFiredRound" }, // 3802246271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray_Inner = { "CriticalDamageMultiplierDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageMultiplierDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray = { "CriticalDamageMultiplierDistanceArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, CriticalDamageMultiplierDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, FireMode), Z_Construct_UEnum_Starbreeze_ESBZFireMode, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType = { "FireType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, FireType), Z_Construct_UEnum_Starbreeze_ESBZFireType, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ProjectilesPerFiredRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ProjectilesPerFiredRound = { "ProjectilesPerFiredRound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, ProjectilesPerFiredRound), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ProjectilesPerFiredRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ProjectilesPerFiredRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_BurstRoundCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_BurstRoundCount = { "BurstRoundCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, BurstRoundCount), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_BurstRoundCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_BurstRoundCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_MaximumPenetrationCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_MaximumPenetrationCount = { "MaximumPenetrationCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, MaximumPenetrationCount), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_MaximumPenetrationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_MaximumPenetrationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bCanHitEnvironmentAfterPenetration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration = { "bCanHitEnvironmentAfterPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bCanPenetrateBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked = { "bCanPenetrateBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, Range), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AdditionalPlayerRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AdditionalPlayerRange = { "AdditionalPlayerRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AdditionalPlayerRange), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AdditionalPlayerRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AdditionalPlayerRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_OverHealDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_OverHealDamageMultiplier = { "OverHealDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, OverHealDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_OverHealDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_OverHealDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType = { "ImpactType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, ImpactType), Z_Construct_UEnum_Starbreeze_ESBZProjectileImpactType, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType = { "AmmoVisibilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AmmoVisibilityType), Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_GrenadeProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_GrenadeProjectileClass = { "GrenadeProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, GrenadeProjectileClass), Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_GrenadeProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_GrenadeProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetrationProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetrationProjectile = { "ArmorPenetrationProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, ArmorPenetrationProjectile), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetrationProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetrationProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FriendlyPlayerDamageScale = { "FriendlyPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, FriendlyPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_InstigatorPlayerDamageScale = { "InstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, InstigatorPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bUseInstigatorPlayerDamageScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale = { "bUseInstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsFriendlyFireAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed = { "bIsFriendlyFireAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray_Inner = { "DamageDistanceProjectileArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray = { "DamageDistanceProjectileArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, DamageDistanceProjectileArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoLoadedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoLoadedMax = { "AmmoLoadedMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AmmoLoadedMax), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoLoadedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoLoadedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoPerReload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoPerReload = { "AmmoPerReload", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AmmoPerReload), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoPerReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoPerReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMax = { "AmmoVisibleMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AmmoVisibleMax), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMaxPreviewOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMaxPreviewOverride = { "AmmoVisibleMaxPreviewOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, AmmoVisibleMaxPreviewOverride), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMaxPreviewOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMaxPreviewOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsEmptyAmmoEjected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected = { "bIsEmptyAmmoEjected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsEquippedAmmoLoadedTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked = { "bIsEquippedAmmoLoadedTracked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsChamberRotatedEachFiredRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound = { "bIsChamberRotatedEachFiredRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsChamberRotatedEachReloadedRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound = { "bIsChamberRotatedEachReloadedRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsUsingRemoveMagazineCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle = { "bIsUsingRemoveMagazineCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsUsingInsertMagazine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine = { "bIsUsingInsertMagazine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsUsingInsertMagazineCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle = { "bIsUsingInsertMagazineCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsUsingInsertAmmoCycle1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1 = { "bIsUsingInsertAmmoCycle1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2_SetBit(void* Obj)
	{
		((USBZWeaponFireData*)Obj)->bIsUsingInsertAmmoCycle2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2 = { "bIsUsingInsertAmmoCycle2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWeaponFireData), &Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_RoundsPerMinute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponFireData, RoundsPerMinute), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_RoundsPerMinute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_RoundsPerMinute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_CriticalDamageMultiplierDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ProjectilesPerFiredRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_BurstRoundCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_MaximumPenetrationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanHitEnvironmentAfterPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bCanPenetrateBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AdditionalPlayerRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_OverHealDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ImpactType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_GrenadeProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_ArmorPenetrationProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_FriendlyPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_InstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bUseInstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsFriendlyFireAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_DamageDistanceProjectileArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoLoadedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoPerReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_AmmoVisibleMaxPreviewOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEmptyAmmoEjected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsEquippedAmmoLoadedTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachFiredRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsChamberRotatedEachReloadedRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingRemoveMagazineCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertMagazineCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_bIsUsingInsertAmmoCycle2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponFireData_Statics::NewProp_RoundsPerMinute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponFireData_Statics::ClassParams = {
		&USBZWeaponFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWeaponFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponFireData, 2816360894);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponFireData>()
	{
		return USBZWeaponFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponFireData(Z_Construct_UClass_USBZWeaponFireData, &USBZWeaponFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
