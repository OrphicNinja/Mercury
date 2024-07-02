// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeDamageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeDamageData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMeleeImpactType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMeleeAttackCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	void USBZMeleeDamageData::StaticRegisterNativesUSBZMeleeDamageData()
	{
	}
	UClass* Z_Construct_UClass_USBZMeleeDamageData_NoRegister()
	{
		return USBZMeleeDamageData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeDamageData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionWeightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HurtReactionWeightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitboxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxViewOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitboxViewOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitboxViewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitboxViewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryDamageWeight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryDamageWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryDamageWeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryDamageWeight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryDamageWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryDamageWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageWeightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageWeightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetsPerHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTargetsPerHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAngleDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAngleDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImpactType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImpactType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeDamageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeleeDamageData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, DamageTypeClass), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, DamageGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HurtReactionWeightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HurtReactionWeightModifier = { "HurtReactionWeightModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, HurtReactionWeightModifier), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HurtReactionWeightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HurtReactionWeightModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxSize = { "HitboxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, HitboxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewOffset = { "HitboxViewOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, HitboxViewOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewRotation = { "HitboxViewRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, HitboxViewRotation), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_OverHealDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_OverHealDamageMultiplier = { "OverHealDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, OverHealDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_OverHealDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_OverHealDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ArmorPenetration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight = { "PrimaryDamageWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, PrimaryDamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight = { "SecondaryDamageWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, SecondaryDamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageWeightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageWeightModifier = { "DamageWeightModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, DamageWeightModifier), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageWeightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageWeightModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, Cooldown), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaxTargetsPerHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaxTargetsPerHit = { "MaxTargetsPerHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, MaxTargetsPerHit), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaxTargetsPerHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaxTargetsPerHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaximumAngleDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaximumAngleDifference = { "MaximumAngleDifference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, MaximumAngleDifference), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaximumAngleDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaximumAngleDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MeleeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MeleeEvent = { "MeleeEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, MeleeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MeleeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MeleeEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType = { "ImpactType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, ImpactType), Z_Construct_UEnum_Starbreeze_ESBZMeleeImpactType, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory = { "AttackCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, AttackCategory), Z_Construct_UEnum_Starbreeze_ESBZMeleeAttackCategory, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeDamageData" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeDamageData, Duration), METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMeleeDamageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HurtReactionWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_HitboxViewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_OverHealDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_PrimaryDamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_SecondaryDamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_DamageWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaxTargetsPerHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MaximumAngleDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_MeleeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_ImpactType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_AttackCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeDamageData_Statics::NewProp_Duration,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZMeleeDamageData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(USBZMeleeDamageData, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeDamageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeDamageData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeDamageData_Statics::ClassParams = {
		&USBZMeleeDamageData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMeleeDamageData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeDamageData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeDamageData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeDamageData, 2509549155);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeDamageData>()
	{
		return USBZMeleeDamageData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeDamageData(Z_Construct_UClass_USBZMeleeDamageData, &USBZMeleeDamageData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeDamageData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeDamageData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
