// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponTankingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponTankingData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTankingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTankingData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZWeaponTankingData::StaticRegisterNativesUSBZWeaponTankingData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponTankingData_NoRegister()
	{
		return USBZWeaponTankingData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponTankingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingYawAngleInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TankingYawAngleInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingRollAngleInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TankingRollAngleInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingYawMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingYawMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingRollMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingRollMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponTankingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponTankingData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawAngleInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTankingData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawAngleInterval = { "TankingYawAngleInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponTankingData, TankingYawAngleInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawAngleInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawAngleInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollAngleInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTankingData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollAngleInterval = { "TankingRollAngleInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponTankingData, TankingRollAngleInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollAngleInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollAngleInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTankingData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingSensitivity = { "TankingSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponTankingData, TankingSensitivity), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTankingData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawMultiplier = { "TankingYawMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponTankingData, TankingYawMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTankingData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollMultiplier = { "TankingRollMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponTankingData, TankingRollMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponTankingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawAngleInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollAngleInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingYawMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponTankingData_Statics::NewProp_TankingRollMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponTankingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponTankingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponTankingData_Statics::ClassParams = {
		&USBZWeaponTankingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponTankingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponTankingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponTankingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponTankingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponTankingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponTankingData, 602901481);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponTankingData>()
	{
		return USBZWeaponTankingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponTankingData(Z_Construct_UClass_USBZWeaponTankingData, &USBZWeaponTankingData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponTankingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponTankingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
