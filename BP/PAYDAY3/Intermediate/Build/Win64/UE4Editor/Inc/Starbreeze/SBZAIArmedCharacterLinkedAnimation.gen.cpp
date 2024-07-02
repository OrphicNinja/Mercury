// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIArmedCharacterLinkedAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIArmedCharacterLinkedAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterLinkedAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	void USBZAIArmedCharacterLinkedAnimation::StaticRegisterNativesUSBZAIArmedCharacterLinkedAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_NoRegister()
	{
		return USBZAIArmedCharacterLinkedAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInCover_MetaData[];
#endif
		static void NewProp_bIsInCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnteringCover_MetaData[];
#endif
		static void NewProp_bIsEnteringCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnteringCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlreadyInCoverPose_MetaData[];
#endif
		static void NewProp_bIsAlreadyInCoverPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlreadyInCoverPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCoverAction_MetaData[];
#endif
		static void NewProp_bIsCoverAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCoverAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasCrouchBeforeCover_MetaData[];
#endif
		static void NewProp_bWasCrouchBeforeCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCrouchBeforeCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasInCrouchCover_MetaData[];
#endif
		static void NewProp_bWasInCrouchCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasInCrouchCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurning_MetaData[];
#endif
		static void NewProp_bIsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchBlendingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchBlendingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchToCrouchCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchToCrouchCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchToStandCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchToStandCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandToCrouchCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandToCrouchCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandToStandCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandToStandCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchCoverLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchCoverLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandCoverLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandCoverLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchCoverToCrouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchCoverToCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchCoverToStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchCoverToStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandCoverToCrouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandCoverToCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandCoverToStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandCoverToStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandCoverToCrouchCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandCoverToCrouchCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchCoverToStandCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchCoverToStandCover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAICharacterLinkedAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZAIArmedCharacterLinkedAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsInCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover = { "bIsInCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsEnteringCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover = { "bIsEnteringCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsAlreadyInCoverPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose = { "bIsAlreadyInCoverPose", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsCoverAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction = { "bIsCoverAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bWasCrouchBeforeCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover = { "bWasCrouchBeforeCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bWasInCrouchCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover = { "bWasInCrouchCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning_SetBit(void* Obj)
	{
		((USBZAIArmedCharacterLinkedAnimation*)Obj)->bIsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning = { "bIsTurning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZAIArmedCharacterLinkedAnimation), &Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchBlendingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchBlendingAlpha = { "CrouchBlendingAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchBlendingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchBlendingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchBlendingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToCrouchCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToCrouchCover = { "CrouchToCrouchCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchToCrouchCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToCrouchCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToCrouchCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToStandCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToStandCover = { "CrouchToStandCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchToStandCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToStandCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToStandCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToCrouchCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToCrouchCover = { "StandToCrouchCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandToCrouchCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToCrouchCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToCrouchCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToStandCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToStandCover = { "StandToStandCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandToStandCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToStandCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToStandCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverLoop = { "CrouchCoverLoop", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchCoverLoop), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverLoop = { "StandCoverLoop", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandCoverLoop), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToCrouch = { "CrouchCoverToCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchCoverToCrouch), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStand = { "CrouchCoverToStand", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchCoverToStand), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouch = { "StandCoverToCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandCoverToCrouch), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToStand = { "StandCoverToStand", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandCoverToStand), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouchCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouchCover = { "StandCoverToCrouchCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, StandCoverToCrouchCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouchCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouchCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStandCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIArmedCharacterLinkedAnimation" },
		{ "ModuleRelativePath", "Public/SBZAIArmedCharacterLinkedAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStandCover = { "CrouchCoverToStandCover", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIArmedCharacterLinkedAnimation, CrouchCoverToStandCover), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStandCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStandCover_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsInCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsEnteringCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsAlreadyInCoverPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCoverAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasCrouchBeforeCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bWasInCrouchCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_bIsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchBlendingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToCrouchCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchToStandCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToCrouchCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandToStandCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_StandCoverToCrouchCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::NewProp_CrouchCoverToStandCover,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIArmedCharacterLinkedAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::ClassParams = {
		&USBZAIArmedCharacterLinkedAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIArmedCharacterLinkedAnimation, 3956480888);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIArmedCharacterLinkedAnimation>()
	{
		return USBZAIArmedCharacterLinkedAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIArmedCharacterLinkedAnimation(Z_Construct_UClass_USBZAIArmedCharacterLinkedAnimation, &USBZAIArmedCharacterLinkedAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIArmedCharacterLinkedAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIArmedCharacterLinkedAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
