// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAnimationFPP.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAnimationFPP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationFPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationFPP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPoseType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTankingData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWallReactionData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister();
// End Cross Module References
	void USBZPlayerAnimationFPP::StaticRegisterNativesUSBZPlayerAnimationFPP()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerAnimationFPP_NoRegister()
	{
		return USBZPlayerAnimationFPP::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerAnimationFPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHSInstigator_MetaData[];
#endif
		static void NewProp_bIsHSInstigator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHSInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftHandEquipped_MetaData[];
#endif
		static void NewProp_bLeftHandEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftHandEquipped;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandGripAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandGripAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBoneLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponBoneLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBoneRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponBoneRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandGripAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandGripAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandLocalIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandLocalIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandWorldIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandWorldIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveLeftHandAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveLeftHandAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveMoveAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveCameraAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveCameraAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMovePlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveMovePlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveDetailAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveDetailAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveGaitValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveGaitValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandOnlyRecoilBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandOnlyRecoilBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTankingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponTankingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponWallReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponWallReactionData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveMoveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdditiveMoveType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdlePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdlePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAdditivePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAdditivePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleADSPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleADSPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleHSInstigatorPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleHSInstigatorPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleHSInstigatorADSPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleHSInstigatorADSPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveADS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMoveADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveLeftHandEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMoveLeftHandEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveLeftHandEquippedADS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMoveLeftHandEquippedADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandEquippedIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandEquippedIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandEquippedUsingIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandEquippedUsingIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableLeftGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableLeftGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableRightGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableRightGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveIdleLeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveIdleLeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterRunMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterRunMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitRunMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitRunMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIdleAssetPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandIdleAssetPlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollectionFPP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollectionFPP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTraverseMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTraverseMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZPlayerAnimationFPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((USBZPlayerAnimationFPP*)Obj)->bIsTargeting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting = { "bIsTargeting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZPlayerAnimationFPP), &Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator_SetBit(void* Obj)
	{
		((USBZPlayerAnimationFPP*)Obj)->bIsHSInstigator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator = { "bIsHSInstigator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZPlayerAnimationFPP), &Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped_SetBit(void* Obj)
	{
		((USBZPlayerAnimationFPP*)Obj)->bLeftHandEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped = { "bLeftHandEquipped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZPlayerAnimationFPP), &Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType = { "PoseType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, PoseType), Z_Construct_UEnum_Starbreeze_ESBZPoseType, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandGripAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandGripAlpha = { "RightHandGripAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandGripAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandGripAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandGripAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneLocationOffset = { "WeaponBoneLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponBoneLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneRotationOffset = { "WeaponBoneRotationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponBoneRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandGripAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandGripAlpha = { "LeftHandGripAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandGripAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandGripAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandGripAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIKAlpha = { "LeftHandIKAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandLocalIKAlpha = { "LeftHandLocalIKAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandLocalIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandWorldIKAlpha = { "LeftHandWorldIKAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandWorldIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandIKAlpha = { "RightHandIKAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentLocation = { "LeftHandAttachmentLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentLocation = { "RightHandAttachmentLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandAttachmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentRotation = { "LeftHandAttachmentRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentRotation = { "RightHandAttachmentRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandAttachmentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldLocation = { "LeftHandAttachmentWorldLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldRotation = { "LeftHandAttachmentWorldRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandAttachmentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveLeftHandAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveLeftHandAlpha = { "AdditiveLeftHandAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveLeftHandAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveLeftHandAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveLeftHandAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveAlpha = { "AdditiveAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveAlpha = { "AdditiveMoveAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveCameraAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveCameraAlpha = { "AdditiveCameraAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveCameraAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveCameraAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveCameraAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMovePlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMovePlayRate = { "AdditiveMovePlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMovePlayRate), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMovePlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMovePlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveDetailAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveDetailAlpha = { "AdditiveDetailAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveDetailAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveDetailAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveDetailAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_MoveGaitValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_MoveGaitValue = { "MoveGaitValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, MoveGaitValue), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_MoveGaitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_MoveGaitValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandOnlyRecoilBlendWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandOnlyRecoilBlendWeight = { "RightHandOnlyRecoilBlendWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RightHandOnlyRecoilBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandOnlyRecoilBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandOnlyRecoilBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponTankingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponTankingData = { "WeaponTankingData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponTankingData), Z_Construct_UScriptStruct_FSBZTankingData, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponTankingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponTankingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponWallReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponWallReactionData = { "WeaponWallReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, WeaponWallReactionData), Z_Construct_UScriptStruct_FSBZWallReactionData, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponWallReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponWallReactionData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType = { "AdditiveMoveType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveType), Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdlePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdlePose = { "IdlePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, IdlePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdlePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdlePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleAdditivePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleAdditivePose = { "IdleAdditivePose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleAdditivePose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleAdditivePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleAdditivePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleADSPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleADSPose = { "IdleADSPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleADSPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleADSPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleADSPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorPose = { "IdleHSInstigatorPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleHSInstigatorPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorADSPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorADSPose = { "IdleHSInstigatorADSPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, IdleHSInstigatorADSPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorADSPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorADSPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RunPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RunPose = { "RunPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, RunPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RunPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RunPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMove = { "AdditiveMove", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMove), Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveADS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveADS = { "AdditiveMoveADS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveADS), Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquipped = { "AdditiveMoveLeftHandEquipped", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveLeftHandEquipped), Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquippedADS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquippedADS = { "AdditiveMoveLeftHandEquippedADS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveMoveLeftHandEquippedADS), Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquippedADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquippedADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedIdle = { "LeftHandEquippedIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandEquippedIdle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedUsingIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedUsingIdle = { "LeftHandEquippedUsingIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandEquippedUsingIdle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedUsingIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedUsingIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableLeftGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableLeftGripPose = { "EquippableLeftGripPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, EquippableLeftGripPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableLeftGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableLeftGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableRightGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableRightGripPose = { "EquippableRightGripPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, EquippableRightGripPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableRightGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableRightGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveIdleLeftHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveIdleLeftHand = { "AdditiveIdleLeftHand", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AdditiveIdleLeftHand), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveIdleLeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveIdleLeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EnterRunMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EnterRunMontage = { "EnterRunMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, EnterRunMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EnterRunMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EnterRunMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_ExitRunMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_ExitRunMontage = { "ExitRunMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, ExitRunMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_ExitRunMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_ExitRunMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIdleAssetPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIdleAssetPlayerData = { "LeftHandIdleAssetPlayerData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, LeftHandIdleAssetPlayerData), Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIdleAssetPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIdleAssetPlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, PlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AnimationCollectionFPP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AnimationCollectionFPP = { "AnimationCollectionFPP", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, AnimationCollectionFPP), Z_Construct_UClass_USBZPlayerAnimationCollectionFPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AnimationCollectionFPP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AnimationCollectionFPP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_CurrentTraverseMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAnimationFPP" },
		{ "ModuleRelativePath", "Public/SBZPlayerAnimationFPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_CurrentTraverseMontage = { "CurrentTraverseMontage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAnimationFPP, CurrentTraverseMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_CurrentTraverseMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_CurrentTraverseMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bIsHSInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_bLeftHandEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandGripAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponBoneRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandGripAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandLocalIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandWorldIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandAttachmentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandAttachmentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveLeftHandAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveCameraAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMovePlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveDetailAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_MoveGaitValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RightHandOnlyRecoilBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponTankingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_WeaponWallReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdlePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleAdditivePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleADSPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_IdleHSInstigatorADSPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_RunPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveMoveLeftHandEquippedADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandEquippedUsingIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableLeftGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EquippableRightGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AdditiveIdleLeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_EnterRunMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_ExitRunMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_LeftHandIdleAssetPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_AnimationCollectionFPP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::NewProp_CurrentTraverseMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerAnimationFPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::ClassParams = {
		&USBZPlayerAnimationFPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerAnimationFPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerAnimationFPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerAnimationFPP, 3461815670);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerAnimationFPP>()
	{
		return USBZPlayerAnimationFPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerAnimationFPP(Z_Construct_UClass_USBZPlayerAnimationFPP, &USBZPlayerAnimationFPP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerAnimationFPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerAnimationFPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
