// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIWeaponMeleeAttackData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIWeaponMeleeAttackData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponMeleeAttackData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponMeleeAttackData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMeleeAttackData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
// End Cross Module References
	void USBZAIWeaponMeleeAttackData::StaticRegisterNativesUSBZAIWeaponMeleeAttackData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIWeaponMeleeAttackData_NoRegister()
	{
		return USBZAIWeaponMeleeAttackData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Damage_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Damage_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWeaponMeleeAttackData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIWeaponMeleeAttackData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponMeleeAttackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_ValueProp = { "Damage", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_Key_KeyProp = { "Damage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponMeleeAttackData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponMeleeAttackData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponMeleeAttackData, Damage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_OverHealDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponMeleeAttackData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponMeleeAttackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_OverHealDamageMultiplier = { "OverHealDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponMeleeAttackData, OverHealDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_OverHealDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_OverHealDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponMeleeAttackData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponMeleeAttackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponMeleeAttackData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_DamageInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponMeleeAttackData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponMeleeAttackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_DamageInterval = { "DamageInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DamageInterval, USBZAIWeaponMeleeAttackData), STRUCT_OFFSET(USBZAIWeaponMeleeAttackData, DamageInterval), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_DamageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_DamageInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_OverHealDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::NewProp_DamageInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIWeaponMeleeAttackData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::ClassParams = {
		&USBZAIWeaponMeleeAttackData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIWeaponMeleeAttackData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIWeaponMeleeAttackData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIWeaponMeleeAttackData, 1754261005);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIWeaponMeleeAttackData>()
	{
		return USBZAIWeaponMeleeAttackData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIWeaponMeleeAttackData(Z_Construct_UClass_USBZAIWeaponMeleeAttackData, &USBZAIWeaponMeleeAttackData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIWeaponMeleeAttackData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIWeaponMeleeAttackData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
