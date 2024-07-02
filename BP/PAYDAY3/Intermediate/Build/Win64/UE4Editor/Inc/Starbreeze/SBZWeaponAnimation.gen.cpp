// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefArrayParam();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefParam();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	void USBZWeaponAnimation::StaticRegisterNativesUSBZWeaponAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponAnimation_NoRegister()
	{
		return USBZWeaponAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RBExternalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RBExternalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RBMinVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RBMinVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RBMaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RBMaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RBCoefHVelDampening_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RBCoefHVelDampening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaNotAnimatedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaNotAnimatedBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCopyBoneDeltaFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaCopyBoneDeltaFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCopyBoneDeltaSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaCopyBoneDeltaSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleStatePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleStatePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyStatePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyStatePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleStatePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CycleStatePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveStatePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveStatePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotAnimatedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotAnimatedBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyBoneDeltaSourceFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyBoneDeltaSourceFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyBoneDeltaTargetsFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyBoneDeltaTargetsFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyBoneDeltaSourceSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyBoneDeltaSourceSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyBoneDeltaTargetsSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyBoneDeltaTargetsSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZWeaponAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBExternalForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBExternalForce = { "RBExternalForce", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, RBExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBExternalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMinVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMinVelocity = { "RBMinVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, RBMinVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMinVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMaxVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMaxVelocity = { "RBMaxVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, RBMaxVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBCoefHVelDampening_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBCoefHVelDampening = { "RBCoefHVelDampening", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, RBCoefHVelDampening), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBCoefHVelDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBCoefHVelDampening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaNotAnimatedBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaNotAnimatedBones = { "AlphaNotAnimatedBones", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, AlphaNotAnimatedBones), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaNotAnimatedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaNotAnimatedBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaFirst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaFirst = { "AlphaCopyBoneDeltaFirst", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, AlphaCopyBoneDeltaFirst), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaSecond = { "AlphaCopyBoneDeltaSecond", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, AlphaCopyBoneDeltaSecond), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_IdleStatePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_IdleStatePose = { "IdleStatePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, IdleStatePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_IdleStatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_IdleStatePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_EmptyStatePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_EmptyStatePose = { "EmptyStatePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, EmptyStatePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_EmptyStatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_EmptyStatePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CycleStatePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CycleStatePose = { "CycleStatePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, CycleStatePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CycleStatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CycleStatePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_StatePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_StatePose = { "StatePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, StatePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_StatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_StatePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AdditiveStatePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AdditiveStatePose = { "AdditiveStatePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, AdditiveStatePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AdditiveStatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AdditiveStatePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_NotAnimatedBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_NotAnimatedBones = { "NotAnimatedBones", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, NotAnimatedBones), Z_Construct_UScriptStruct_FSBZBoneRefArrayParam, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_NotAnimatedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_NotAnimatedBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceFirst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceFirst = { "CopyBoneDeltaSourceFirst", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaSourceFirst), Z_Construct_UScriptStruct_FSBZBoneRefParam, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsFirst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsFirst = { "CopyBoneDeltaTargetsFirst", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaTargetsFirst), Z_Construct_UScriptStruct_FSBZBoneRefArrayParam, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceSecond = { "CopyBoneDeltaSourceSecond", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaSourceSecond), Z_Construct_UScriptStruct_FSBZBoneRefParam, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsSecond = { "CopyBoneDeltaTargetsSecond", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, CopyBoneDeltaTargetsSecond), Z_Construct_UScriptStruct_FSBZBoneRefArrayParam, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, Weapon), Z_Construct_UClass_ASBZWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, AnimationCollection), Z_Construct_UClass_USBZEquippableAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AnimationCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAnimation" },
		{ "ModuleRelativePath", "Public/SBZWeaponAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponAnimation, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBExternalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMinVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBMaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_RBCoefHVelDampening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaNotAnimatedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AlphaCopyBoneDeltaSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_IdleStatePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_EmptyStatePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CycleStatePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_StatePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AdditiveStatePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_NotAnimatedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaSourceSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_CopyBoneDeltaTargetsSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_AnimationCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponAnimation_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponAnimation_Statics::ClassParams = {
		&USBZWeaponAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponAnimation, 3313408087);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponAnimation>()
	{
		return USBZWeaponAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponAnimation(Z_Construct_UClass_USBZWeaponAnimation, &USBZWeaponAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
