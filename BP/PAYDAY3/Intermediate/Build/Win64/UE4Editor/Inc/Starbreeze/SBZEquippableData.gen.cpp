// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTagReactionAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableMenuAnimationCollection_NoRegister();
// End Cross Module References
	void USBZEquippableData::StaticRegisterNativesUSBZEquippableData()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippableData_NoRegister()
	{
		return USBZEquippableData::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_EquippableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TagReactionAsset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquippedAbilityClassArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedAbilityClassArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippedAbilityClassArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableDefaultIdleFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableDefaultIdleFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableDefaultIdleTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableDefaultIdleTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRightGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRightGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLeftGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultLeftGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRightGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRightGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLeftGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultLeftGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDisciplineRightGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerDisciplineRightGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDisciplineLeftGripFPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerDisciplineLeftGripFPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDisciplineRightGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerDisciplineRightGripTPPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDisciplineLeftGripTPPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerDisciplineLeftGripTPPose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableFamily_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableFamily;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponOffsetFPLeftHandEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponOffsetFPLeftHandEquipped;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponOffsetPerAnimation_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponOffsetPerAnimation_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponOffsetPerAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponOffsetPerAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachmentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleStances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompatibleStances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightTierOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightTierOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsScaleHack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsScaleHack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsOffsetHack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsOffsetHack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollectionFP_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationCollectionFP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponAnimCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableMenuAnimCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableMenuAnimCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippableData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableClass = { "EquippableClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippableClass), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TagReactionAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TagReactionAsset = { "TagReactionAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, TagReactionAsset), Z_Construct_UClass_USBZTagReactionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TagReactionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TagReactionAsset_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray_Inner = { "EquippedAbilityClassArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray = { "EquippedAbilityClassArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippedAbilityClassArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleFPPose = { "EquippableDefaultIdleFPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippableDefaultIdleFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleTPPose = { "EquippableDefaultIdleTPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippableDefaultIdleTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripFPPose = { "DefaultRightGripFPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, DefaultRightGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripFPPose = { "DefaultLeftGripFPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, DefaultLeftGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripTPPose = { "DefaultRightGripTPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, DefaultRightGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripTPPose = { "DefaultLeftGripTPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, DefaultLeftGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripFPPose = { "TriggerDisciplineRightGripFPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, TriggerDisciplineRightGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripFPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripFPPose = { "TriggerDisciplineLeftGripFPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, TriggerDisciplineLeftGripFPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripFPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripFPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripTPPose = { "TriggerDisciplineRightGripTPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, TriggerDisciplineRightGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripTPPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripTPPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripTPPose = { "TriggerDisciplineLeftGripTPPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, TriggerDisciplineLeftGripTPPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripTPPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripTPPose_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily = { "EquippableFamily", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippableFamily), Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetFPLeftHandEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetFPLeftHandEquipped = { "WeaponOffsetFPLeftHandEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, WeaponOffsetFPLeftHandEquipped), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetFPLeftHandEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetFPLeftHandEquipped_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_ValueProp = { "WeaponOffsetPerAnimation", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_Key_KeyProp = { "WeaponOffsetPerAnimation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation = { "WeaponOffsetPerAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, WeaponOffsetPerAnimation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentSocket = { "AttachmentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, AttachmentSocket), METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentOffset = { "AttachmentOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, AttachmentOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_CompatibleStances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_CompatibleStances = { "CompatibleStances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, CompatibleStances), METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_CompatibleStances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_CompatibleStances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeightTierOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeightTierOffset = { "WeightTierOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, WeightTierOffset), METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeightTierOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeightTierOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsScaleHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsScaleHack = { "BoundsScaleHack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, BoundsScaleHack), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsScaleHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsScaleHack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsOffsetHack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsOffsetHack = { "BoundsOffsetHack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, BoundsOffsetHack), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsOffsetHack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsOffsetHack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AnimationCollectionFP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AnimationCollectionFP = { "AnimationCollectionFP", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, AnimationCollectionFP), Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AnimationCollectionFP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AnimationCollectionFP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponAnimCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponAnimCollection = { "WeaponAnimCollection", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, WeaponAnimCollection), Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponAnimCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponAnimCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableMenuAnimCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableData" },
		{ "ModuleRelativePath", "Public/SBZEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableMenuAnimCollection = { "EquippableMenuAnimCollection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableData, EquippableMenuAnimCollection), Z_Construct_UClass_USBZEquippableMenuAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableMenuAnimCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableMenuAnimCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TagReactionAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippedAbilityClassArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableDefaultIdleTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultRightGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_DefaultLeftGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripFPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineRightGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_TriggerDisciplineLeftGripTPPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetFPLeftHandEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponOffsetPerAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AttachmentOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_CompatibleStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeightTierOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsScaleHack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_BoundsOffsetHack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_AnimationCollectionFP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_WeaponAnimCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableData_Statics::NewProp_EquippableMenuAnimCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippableData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableData_Statics::ClassParams = {
		&USBZEquippableData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquippableData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableData, 4016261940);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableData>()
	{
		return USBZEquippableData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableData(Z_Construct_UClass_USBZEquippableData, &USBZEquippableData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
