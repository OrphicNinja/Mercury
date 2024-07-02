// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIWeaponFireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIWeaponFireData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeaponFireData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponFireData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void USBZAIWeaponFireData::StaticRegisterNativesUSBZAIWeaponFireData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIWeaponFireData_NoRegister()
	{
		return USBZAIWeaponFireData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIWeaponFireData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageModifierCurve;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToHit_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChanceToHit_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChanceToHit_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChanceToHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccuracyModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccuracyModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredTimeToFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredTimeToFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurtsSelectionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurtsSelectionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstRandomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstRandomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PreferredRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDamageAccuracyModified_MetaData[];
#endif
		static void NewProp_bDamageAccuracyModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamageAccuracyModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSliceProjectiles_MetaData[];
#endif
		static void NewProp_bSliceProjectiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSliceProjectiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIWeaponFireData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWeaponFireData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIWeaponFireData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_ValueProp = { "Damage", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_Key_KeyProp = { "Damage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, Damage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_DamageModifierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_DamageModifierCurve = { "DamageModifierCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, DamageModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_DamageModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_DamageModifierCurve_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_ValueProp = { "ChanceToHit", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_Key_KeyProp = { "ChanceToHit_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit = { "ChanceToHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, ChanceToHit), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_AccuracyModifierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_AccuracyModifierCurve = { "AccuracyModifierCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, AccuracyModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_AccuracyModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_AccuracyModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredTimeToFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredTimeToFire = { "PreferredTimeToFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, PreferredTimeToFire), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredTimeToFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredTimeToFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurtsSelectionCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurtsSelectionCurve = { "BurtsSelectionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, BurtsSelectionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurtsSelectionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurtsSelectionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurstRandomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurstRandomization = { "BurstRandomization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, BurstRandomization), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurstRandomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurstRandomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredRange = { "PreferredRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIWeaponFireData, PreferredRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified_SetBit(void* Obj)
	{
		((USBZAIWeaponFireData*)Obj)->bDamageAccuracyModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified = { "bDamageAccuracyModified", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIWeaponFireData), &Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIWeaponFireData" },
		{ "ModuleRelativePath", "Public/SBZAIWeaponFireData.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles_SetBit(void* Obj)
	{
		((USBZAIWeaponFireData*)Obj)->bSliceProjectiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles = { "bSliceProjectiles", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIWeaponFireData), &Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIWeaponFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_DamageModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_ChanceToHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_AccuracyModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredTimeToFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurtsSelectionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_BurstRandomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_PreferredRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bDamageAccuracyModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIWeaponFireData_Statics::NewProp_bSliceProjectiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIWeaponFireData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIWeaponFireData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIWeaponFireData_Statics::ClassParams = {
		&USBZAIWeaponFireData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIWeaponFireData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIWeaponFireData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIWeaponFireData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIWeaponFireData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIWeaponFireData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIWeaponFireData, 671033729);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIWeaponFireData>()
	{
		return USBZAIWeaponFireData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIWeaponFireData(Z_Construct_UClass_USBZAIWeaponFireData, &USBZAIWeaponFireData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIWeaponFireData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIWeaponFireData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
