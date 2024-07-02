// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSpreadData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSpreadData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSpreadData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSpreadData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponSpreadRecoveryMode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStances();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern();
// End Cross Module References
	void USBZWeaponSpreadData::StaticRegisterNativesUSBZWeaponSpreadData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponSpreadData_NoRegister()
	{
		return USBZWeaponSpreadData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponSpreadData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerClusterNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InnerClusterNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerClusterSpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerClusterSpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PieOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PieOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpreadStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpreadStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpreadIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpreadIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpreadResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpreadResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpreadDecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpreadDecayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpreadCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpreadCap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpreadRecoveryMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoveryMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpreadRecoveryMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadStanceMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpreadStanceMultipliers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadRadiusMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpreadRadiusMultipliers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotgunPatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotgunPatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShotgunPatterns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviationHipFireMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeviationHipFireMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviationTargetingFireMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeviationTargetingFireMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponSpreadData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponSpreadData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterNumber = { "InnerClusterNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, InnerClusterNumber), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterSpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterSpreadMultiplier = { "InnerClusterSpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, InnerClusterSpreadMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterSpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterSpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_PieOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_PieOcclusion = { "PieOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, PieOcclusion), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_PieOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_PieOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadStart = { "FireSpreadStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, FireSpreadStart), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadIncrease = { "FireSpreadIncrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, FireSpreadIncrease), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadResetTime = { "FireSpreadResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, FireSpreadResetTime), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadDecayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadDecayRate = { "FireSpreadDecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, FireSpreadDecayRate), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadDecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadDecayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadCap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadCap = { "FireSpreadCap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, FireSpreadCap), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadCap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode = { "SpreadRecoveryMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, SpreadRecoveryMode), Z_Construct_UEnum_Starbreeze_ESBZWeaponSpreadRecoveryMode, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadStanceMultipliers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadStanceMultipliers = { "SpreadStanceMultipliers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, SpreadStanceMultipliers), Z_Construct_UScriptStruct_FSBZWeaponSpreadStances, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadStanceMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadStanceMultipliers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRadiusMultipliers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRadiusMultipliers = { "SpreadRadiusMultipliers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, SpreadRadiusMultipliers), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRadiusMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRadiusMultipliers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns_Inner = { "ShotgunPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZShotgunSpreadPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns = { "ShotgunPatterns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, ShotgunPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationHipFireMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationHipFireMultiplier = { "DeviationHipFireMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, DeviationHipFireMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationHipFireMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationHipFireMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationTargetingFireMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationTargetingFireMultiplier = { "DeviationTargetingFireMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSpreadData, DeviationTargetingFireMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationTargetingFireMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationTargetingFireMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponSpreadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_InnerClusterSpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_PieOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadDecayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_FireSpreadCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRecoveryMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadStanceMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_SpreadRadiusMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_ShotgunPatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationHipFireMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSpreadData_Statics::NewProp_DeviationTargetingFireMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponSpreadData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponSpreadData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponSpreadData_Statics::ClassParams = {
		&USBZWeaponSpreadData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponSpreadData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSpreadData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSpreadData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponSpreadData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponSpreadData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponSpreadData, 704191670);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponSpreadData>()
	{
		return USBZWeaponSpreadData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponSpreadData(Z_Construct_UClass_USBZWeaponSpreadData, &USBZWeaponSpreadData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponSpreadData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponSpreadData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
