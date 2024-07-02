// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterAnimationTPP.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterAnimationTPP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationTPP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationTPP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogAnimDataWrapper();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAnimLODType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPoseType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpeedWarpingData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPivotSwitchHandler();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMovementDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusHandler();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinklesHandler();
// End Cross Module References
	void USBZCharacterAnimationTPP::StaticRegisterNativesUSBZCharacterAnimationTPP()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterAnimationTPP_NoRegister()
	{
		return USBZCharacterAnimationTPP::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterAnimationTPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoving_MetaData[];
#endif
		static void NewProp_bMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInStartMovingState_MetaData[];
#endif
		static void NewProp_bInStartMovingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInStartMovingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInMovingState_MetaData[];
#endif
		static void NewProp_bInMovingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInMovingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInStopMovingState_MetaData[];
#endif
		static void NewProp_bInStopMovingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInStopMovingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopMovingStateUsesOrientationWarping_MetaData[];
#endif
		static void NewProp_bStopMovingStateUsesOrientationWarping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopMovingStateUsesOrientationWarping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAir_MetaData[];
#endif
		static void NewProp_bInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshInAir_MetaData[];
#endif
		static void NewProp_bMeshInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartJumping_MetaData[];
#endif
		static void NewProp_bStartJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumping_MetaData[];
#endif
		static void NewProp_bJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumpingMoving_MetaData[];
#endif
		static void NewProp_bJumpingMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumpingMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurning_MetaData[];
#endif
		static void NewProp_bTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartMoving_MetaData[];
#endif
		static void NewProp_bStartMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartMovingCrouch_MetaData[];
#endif
		static void NewProp_bStartMovingCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartMovingCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartMovingHasATurn_MetaData[];
#endif
		static void NewProp_bStartMovingHasATurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartMovingHasATurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[];
#endif
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccelerating_MetaData[];
#endif
		static void NewProp_bAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSliding_MetaData[];
#endif
		static void NewProp_bSliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasRunningBeforeStopTransition_MetaData[];
#endif
		static void NewProp_bWasRunningBeforeStopTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasRunningBeforeStopTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAimOffsetAllUpperBody_MetaData[];
#endif
		static void NewProp_bUseAimOffsetAllUpperBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAimOffsetAllUpperBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCrouchIdleAimOffsetAllUpperBody_MetaData[];
#endif
		static void NewProp_bUseCrouchIdleAimOffsetAllUpperBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCrouchIdleAimOffsetAllUpperBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[];
#endif
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLeftFootForward_MetaData[];
#endif
		static void NewProp_bHasLeftFootForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLeftFootForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateInertialization_MetaData[];
#endif
		static void NewProp_bActivateInertialization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateInertialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLeaning_MetaData[];
#endif
		static void NewProp_bEnableLeaning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLeaning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFootPlacement_MetaData[];
#endif
		static void NewProp_bEnableFootPlacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFootPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullBodyAction_MetaData[];
#endif
		static void NewProp_bFullBodyAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullBodyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInLinkedFullBodyAction_MetaData[];
#endif
		static void NewProp_bIsInLinkedFullBodyAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInLinkedFullBodyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkedFullBodyActionNodeIsPlaying_MetaData[];
#endif
		static void NewProp_bLinkedFullBodyActionNodeIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkedFullBodyActionNodeIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAimOffsetHandledInFullBodyAction_MetaData[];
#endif
		static void NewProp_bAimOffsetHandledInFullBodyAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAimOffsetHandledInFullBodyAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFootLocking_MetaData[];
#endif
		static void NewProp_bEnableFootLocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFootLocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHeadLeading_MetaData[];
#endif
		static void NewProp_bEnableHeadLeading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHeadLeading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWeaponRotationOverride_MetaData[];
#endif
		static void NewProp_bEnableWeaponRotationOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWeaponRotationOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFullBodyAimOffset_MetaData[];
#endif
		static void NewProp_bEnableFullBodyAimOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFullBodyAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffset_MetaData[];
#endif
		static void NewProp_bEnableAimOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetUpperBodyStand_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetUpperBodyStand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetUpperBodyStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetHead_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetHeadLeading_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetHeadLeading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetHeadLeading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetUpperBodyCrouchIdle_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetUpperBodyCrouchIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetUpperBodyCrouchIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetUpperBodyCrouch_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetUpperBodyCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetUpperBodyCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAimOffsetFullBody_MetaData[];
#endif
		static void NewProp_bEnableAimOffsetFullBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAimOffsetFullBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightFootStop_MetaData[];
#endif
		static void NewProp_bRightFootStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightFootStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTraversing_MetaData[];
#endif
		static void NewProp_bIsTraversing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTraversing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingFullBodyAnimation_MetaData[];
#endif
		static void NewProp_bIsPlayingFullBodyAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingFullBodyAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttached_MetaData[];
#endif
		static void NewProp_bIsAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHumanShieldVictimGrabbed_MetaData[];
#endif
		static void NewProp_bIsHumanShieldVictimGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHumanShieldVictimGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHipsOffset_MetaData[];
#endif
		static void NewProp_bEnableHipsOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootOffset_MetaData[];
#endif
		static void NewProp_bEnableRootOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopAnimationFinished_MetaData[];
#endif
		static void NewProp_bStopAnimationFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAnimationFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStopCrouchAnimations_MetaData[];
#endif
		static void NewProp_bHasStopCrouchAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStopCrouchAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStopStandAnimations_MetaData[];
#endif
		static void NewProp_bHasStopStandAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStopStandAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromPivotSwitchToNotMoving_MetaData[];
#endif
		static void NewProp_bTransitFromPivotSwitchToNotMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromPivotSwitchToNotMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromPivotSwitchToMoving_MetaData[];
#endif
		static void NewProp_bTransitFromPivotSwitchToMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromPivotSwitchToMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromNotMovingToMoving_MetaData[];
#endif
		static void NewProp_bTransitFromNotMovingToMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromNotMovingToMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromMovingToNotMoving_MetaData[];
#endif
		static void NewProp_bTransitFromMovingToNotMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromMovingToNotMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStartMovingToMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStartMovingToMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStartMovingToMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStartMovingToNotMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStartMovingToNotMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStartMovingToNotMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromNotMovingToStartMoving_MetaData[];
#endif
		static void NewProp_bTransitFromNotMovingToStartMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromNotMovingToStartMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromMovingToStopMoving_MetaData[];
#endif
		static void NewProp_bTransitFromMovingToStopMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromMovingToStopMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStopMovingToMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStopMovingToMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStopMovingToMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStartMovingToStopMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStartMovingToStopMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStartMovingToStopMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStopMovingToStartMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStopMovingToStartMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStopMovingToStartMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromStopMovingToNotMoving_MetaData[];
#endif
		static void NewProp_bTransitFromStopMovingToNotMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromStopMovingToNotMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromUpperBodyIdleToMoving_MetaData[];
#endif
		static void NewProp_bTransitFromUpperBodyIdleToMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromUpperBodyIdleToMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromUpperBodyMovingToIdle_MetaData[];
#endif
		static void NewProp_bTransitFromUpperBodyMovingToIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromUpperBodyMovingToIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromTraverseToFall_MetaData[];
#endif
		static void NewProp_bTransitFromTraverseToFall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromTraverseToFall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromFallToStand_MetaData[];
#endif
		static void NewProp_bTransitFromFallToStand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromFallToStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransitFromFallToCrouch_MetaData[];
#endif
		static void NewProp_bTransitFromFallToCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransitFromFallToCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUpperBodySyncGroup_MetaData[];
#endif
		static void NewProp_bEnableUpperBodySyncGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUpperBodySyncGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewRendered_MetaData[];
#endif
		static void NewProp_bNewRendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFacial_MetaData[];
#endif
		static void NewProp_bEnableFacial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFacial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRigidBody_MetaData[];
#endif
		static void NewProp_bEnableRigidBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRigidBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartHipsZBlending_MetaData[];
#endif
		static void NewProp_bStartHipsZBlending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartHipsZBlending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogAnimDataWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDialogAnimDataWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDialogStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LipSyncBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LipSyncBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraverseAnimationHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraverseAnimationHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialAnimationBlendHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FacialAnimationBlendHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBodyActionBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullBodyActionBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBodyBlendAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullBodyBlendAlpha;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimLODType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLODType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimLODType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartMovingPoseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMovingPoseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartMovingPoseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AimOffsetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoveredDistSinceStartMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoveredDistSinceStartMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistToPredictedStopLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistToPredictedStopLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionSpeedwarpingDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocomotionSpeedwarpingDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarpingScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedWarpingScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarpingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedWarpingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffYawBetweenMeshRotationAndVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffYawBetweenMeshRotationAndVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffYawBetweenRotationAndAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffYawBetweenRotationAndAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAimRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperBodyAimRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadAimRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadAimRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffPitchBetweenRotationAndAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffPitchBetweenRotationAndAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarpingMovingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedWarpingMovingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarpingStartMovingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedWarpingStartMovingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarpingStopMovingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedWarpingStopMovingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRotationDeltaYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootRotationDeltaYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanXValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanXValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanYValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanYValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootPlacementBoneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootPlacementBoneInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootPlacementBoneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootPlacementBoneInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAdjustmentAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineAdjustmentAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnkleAdjustmentAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnkleAdjustmentAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldAngularSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HumanShieldAngularSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HSVictimRotateAroundAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HSVictimRotateAroundAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoveredDistanceSinceStartJumping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoveredDistanceSinceStartJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotSwitchHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotSwitchHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMoveAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMoveAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMoveGaitValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMoveGaitValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMoveAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveGaitValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMoveGaitValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartMoveMovementDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveMovementDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartMoveMovementDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionUpperBodyLayeredBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActionUpperBodyLayeredBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewYawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewYawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRemainingYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRemainingYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaMovingOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaMovingOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaSpeedWarping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaSpeedWarping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaSpeedWarpingMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaSpeedWarpingMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetPositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeetPositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetPositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeetPositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSWalkRunPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BSWalkRunPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSWalkRunGaitValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BSWalkRunGaitValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSWalkRunYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BSWalkRunYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchBlendingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchBlendingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchBlendingAlphaOnlyLoco_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchBlendingAlphaOnlyLoco;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperbodyAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperbodyAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixUpperbodyAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixUpperbodyAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HigherLowerBodyAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HigherLowerBodyAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODUpperbody_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODUpperbody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODHeadLeading_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODHeadLeading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODFullBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODFullBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODUpperBodyCrouchIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AimOffsetMaxLODUpperBodyCrouchMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldAffectedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentWorldAffectedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentWorldAffectedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentWorldAffectedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandAttachmentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachmentWorldRotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftHandAttachmentWorldRotationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandAttachmentWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachmentWorldRotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightHandAttachmentWorldRotationMode;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandWorldIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandWorldIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandLocalIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandLocalIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandIKAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandGripAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandGripAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandGripAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandGripAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandIKRetargetingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandIKRetargetingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsAdditiveRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsAdditiveRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsAdditiveTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsAdditiveTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenWeaponRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenWeaponRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnAnimationMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTurnAnimationMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAnimationGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubAnimationGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTurnAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStanceTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentStanceTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCrouchTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCrouchTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceTransitionLFRFMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StanceTransitionLFRFMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StanceTransitionRFLFMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StanceTransitionRFLFMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncrouchTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchMoveTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchMoveTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchMoveTransitionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncrouchMoveTransitionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncrouchMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CurrentEquippableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetSliding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetVaulting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetVaulting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetMantling_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetMantling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetZiplining_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetZiplining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveStandBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveStandBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCrouchBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveCrouchBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveStandTurnBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMoveStandTurnBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveStandBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMoveStandBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveCrouchBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMoveCrouchBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMoveCrouchTurnBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMoveCrouchTurnBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovePivotSwitchBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovePivotSwitchBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopStandLFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopStandLFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopStandRFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopStandRFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeanBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetOnlyHeadBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetOnlyHeadBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetAllUpperBodyBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetAllUpperBodyBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetAllUpperBodyCrouchedBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetAllUpperBodyCrouchedBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetAllUpperBodyCrouchedIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetAllUpperBodyCrouchedIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetFullBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffsetFullBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyUnequippedStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyUnequippedStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyUnequippedCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyUnequippedCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedReadyStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedReadyStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedReadyCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedReadyCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedRelaxedStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedRelaxedStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedRelaxedCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedRelaxedCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedUsingStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedUsingStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedUsingCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedUsingCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedUsingStdBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedUsingStdBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedUsingCrhBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedUsingCrhBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyUnequippedIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyUnequippedIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedReadyIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedReadyIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedRelaxedIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedRelaxedIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyEquippedUsingIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyEquippedUsingIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyLeftHandEquippedUsingIdleBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyLeftHandEquippedUsingIdleBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultSlowStartBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultSlowStartBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultFastStartBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultFastStartBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultExitTraverseBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultExitTraverseBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultLandBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultLandBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleSlowBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleSlowBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleFastBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleFastBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleCrouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCrouchLFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopCrouchLFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopCrouchRFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopCrouchRFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpStartStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpStartMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HSVictimRotateAroundBS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HSVictimRotateAroundBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableLeftGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableLeftGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableRightGripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableRightGripPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStopAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentStopAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBodyGestureMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBodyGestureMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookFocusHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookFocusHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrinklesHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrinklesHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFullBodyMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentFullBodyMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAnimation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZCharacterAnimationTPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving = { "bMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bInStartMovingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState = { "bInStartMovingState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bInMovingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState = { "bInMovingState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bInStopMovingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState = { "bInStopMovingState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStopMovingStateUsesOrientationWarping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping = { "bStopMovingStateUsesOrientationWarping", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir = { "bInAir", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bMeshInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir = { "bMeshInAir", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStartJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping = { "bStartJumping", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping = { "bJumping", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bJumpingMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving = { "bJumpingMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning = { "bTurning", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStartMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving = { "bStartMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStartMovingCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch = { "bStartMovingCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStartMovingHasATurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn = { "bStartMovingHasATurn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating = { "bAccelerating", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bSliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding = { "bSliding", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bWasRunningBeforeStopTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition = { "bWasRunningBeforeStopTransition", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bUseAimOffsetAllUpperBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody = { "bUseAimOffsetAllUpperBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bUseCrouchIdleAimOffsetAllUpperBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody = { "bUseCrouchIdleAimOffsetAllUpperBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bHasLeftFootForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward = { "bHasLeftFootForward", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bActivateInertialization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization = { "bActivateInertialization", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableLeaning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning = { "bEnableLeaning", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableFootPlacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement = { "bEnableFootPlacement", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bFullBodyAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction = { "bFullBodyAction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bIsInLinkedFullBodyAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction = { "bIsInLinkedFullBodyAction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bLinkedFullBodyActionNodeIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying = { "bLinkedFullBodyActionNodeIsPlaying", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bAimOffsetHandledInFullBodyAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction = { "bAimOffsetHandledInFullBodyAction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableFootLocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking = { "bEnableFootLocking", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableHeadLeading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading = { "bEnableHeadLeading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableWeaponRotationOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride = { "bEnableWeaponRotationOverride", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableFullBodyAimOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset = { "bEnableFullBodyAimOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset = { "bEnableAimOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetUpperBodyStand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand = { "bEnableAimOffsetUpperBodyStand", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead = { "bEnableAimOffsetHead", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetHeadLeading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading = { "bEnableAimOffsetHeadLeading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetUpperBodyCrouchIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle = { "bEnableAimOffsetUpperBodyCrouchIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetUpperBodyCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch = { "bEnableAimOffsetUpperBodyCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableAimOffsetFullBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody = { "bEnableAimOffsetFullBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bRightFootStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop = { "bRightFootStop", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bIsTraversing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing = { "bIsTraversing", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bIsPlayingFullBodyAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation = { "bIsPlayingFullBodyAnimation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bIsAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached = { "bIsAttached", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bIsHumanShieldVictimGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed = { "bIsHumanShieldVictimGrabbed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableHipsOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset = { "bEnableHipsOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableRootOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset = { "bEnableRootOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStopAnimationFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished = { "bStopAnimationFinished", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bHasStopCrouchAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations = { "bHasStopCrouchAnimations", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bHasStopStandAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations = { "bHasStopStandAnimations", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromPivotSwitchToNotMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving = { "bTransitFromPivotSwitchToNotMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromPivotSwitchToMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving = { "bTransitFromPivotSwitchToMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromNotMovingToMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving = { "bTransitFromNotMovingToMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromMovingToNotMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving = { "bTransitFromMovingToNotMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStartMovingToMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving = { "bTransitFromStartMovingToMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStartMovingToNotMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving = { "bTransitFromStartMovingToNotMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromNotMovingToStartMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving = { "bTransitFromNotMovingToStartMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromMovingToStopMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving = { "bTransitFromMovingToStopMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStopMovingToMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving = { "bTransitFromStopMovingToMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStartMovingToStopMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving = { "bTransitFromStartMovingToStopMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStopMovingToStartMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving = { "bTransitFromStopMovingToStartMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromStopMovingToNotMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving = { "bTransitFromStopMovingToNotMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromUpperBodyIdleToMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving = { "bTransitFromUpperBodyIdleToMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromUpperBodyMovingToIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle = { "bTransitFromUpperBodyMovingToIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromTraverseToFall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall = { "bTransitFromTraverseToFall", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromFallToStand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand = { "bTransitFromFallToStand", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bTransitFromFallToCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch = { "bTransitFromFallToCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableUpperBodySyncGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup = { "bEnableUpperBodySyncGroup", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bNewRendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered = { "bNewRendered", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableFacial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial = { "bEnableFacial", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bEnableRigidBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody = { "bEnableRigidBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending_SetBit(void* Obj)
	{
		((USBZCharacterAnimationTPP*)Obj)->bStartHipsZBlending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending = { "bStartHipsZBlending", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationTPP), &Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogAnimDataWrapper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogAnimDataWrapper = { "CurrentDialogAnimDataWrapper", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentDialogAnimDataWrapper), Z_Construct_UScriptStruct_FSBZDialogAnimDataWrapper, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogAnimDataWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogAnimDataWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogStartTime = { "CurrentDialogStartTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentDialogStartTime), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LipSyncBlendWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LipSyncBlendWeight = { "LipSyncBlendWeight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LipSyncBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LipSyncBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LipSyncBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TraverseAnimationHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TraverseAnimationHandler = { "TraverseAnimationHandler", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, TraverseAnimationHandler), Z_Construct_UScriptStruct_FSBZTraverseAnimationHandler, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TraverseAnimationHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TraverseAnimationHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FacialAnimationBlendHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FacialAnimationBlendHandler = { "FacialAnimationBlendHandler", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FacialAnimationBlendHandler), Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FacialAnimationBlendHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FacialAnimationBlendHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyActionBlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyActionBlendTime = { "FullBodyActionBlendTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FullBodyActionBlendTime), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyActionBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyActionBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyBlendAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyBlendAlpha = { "FullBodyBlendAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FullBodyBlendAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyBlendAlpha_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType = { "AnimLODType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AnimLODType), Z_Construct_UEnum_Starbreeze_ESBZAnimLODType, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType = { "PoseType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, PoseType), Z_Construct_UEnum_Starbreeze_ESBZPoseType, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType = { "StartMovingPoseType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMovingPoseType), Z_Construct_UEnum_Starbreeze_ESBZPoseType, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType = { "AimOffsetType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetType), Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistSinceStartMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistSinceStartMoving = { "CoveredDistSinceStartMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CoveredDistSinceStartMoving), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistSinceStartMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistSinceStartMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DistToPredictedStopLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DistToPredictedStopLocation = { "DistToPredictedStopLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, DistToPredictedStopLocation), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DistToPredictedStopLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DistToPredictedStopLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopPlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopPlayRate = { "StopPlayRate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopPlayRate), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LocomotionSpeedwarpingDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LocomotionSpeedwarpingDir = { "LocomotionSpeedwarpingDir", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LocomotionSpeedwarpingDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LocomotionSpeedwarpingDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LocomotionSpeedwarpingDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingScaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingScaling = { "SpeedWarpingScaling", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingScaling), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingAlpha = { "SpeedWarpingAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity = { "DiffYawBetweenCapsuleRotationAndDesiredVelocity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenCapsuleRotationAndDesiredVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenMeshRotationAndVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenMeshRotationAndVelocity = { "DiffYawBetweenMeshRotationAndVelocity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenMeshRotationAndVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenMeshRotationAndVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenMeshRotationAndVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenRotationAndAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenRotationAndAim = { "DiffYawBetweenRotationAndAim", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenRotationAndAim), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenRotationAndAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenRotationAndAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyAimRotation = { "UpperBodyAimRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyAimRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HeadAimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HeadAimRotation = { "HeadAimRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HeadAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HeadAimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HeadAimRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AdditiveRotationYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AdditiveRotationYaw = { "AdditiveRotationYaw", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AdditiveRotationYaw), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AdditiveRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AdditiveRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffPitchBetweenRotationAndAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffPitchBetweenRotationAndAim = { "DiffPitchBetweenRotationAndAim", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffPitchBetweenRotationAndAim), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffPitchBetweenRotationAndAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffPitchBetweenRotationAndAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingMovingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingMovingData = { "SpeedWarpingMovingData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingMovingData), Z_Construct_UScriptStruct_FSBZSpeedWarpingData, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingMovingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingMovingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStartMovingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStartMovingData = { "SpeedWarpingStartMovingData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingStartMovingData), Z_Construct_UScriptStruct_FSBZSpeedWarpingData, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStartMovingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStartMovingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStopMovingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStopMovingData = { "SpeedWarpingStopMovingData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingStopMovingData), Z_Construct_UScriptStruct_FSBZSpeedWarpingData, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStopMovingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStopMovingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootRotationDeltaYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootRotationDeltaYaw = { "FootRotationDeltaYaw", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FootRotationDeltaYaw), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootRotationDeltaYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootRotationDeltaYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanXValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanXValue = { "LeanXValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanXValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanXValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanXValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanYValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanYValue = { "LeanYValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanYValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanYValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanYValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftFootPlacementBoneInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftFootPlacementBoneInfo = { "LeftFootPlacementBoneInfo", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftFootPlacementBoneInfo), Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftFootPlacementBoneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftFootPlacementBoneInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightFootPlacementBoneInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightFootPlacementBoneInfo = { "RightFootPlacementBoneInfo", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightFootPlacementBoneInfo), Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightFootPlacementBoneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightFootPlacementBoneInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpineAdjustmentAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpineAdjustmentAlpha = { "SpineAdjustmentAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpineAdjustmentAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpineAdjustmentAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpineAdjustmentAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnkleAdjustmentAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnkleAdjustmentAlpha = { "AnkleAdjustmentAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AnkleAdjustmentAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnkleAdjustmentAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnkleAdjustmentAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, Speed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedAlpha = { "SpeedAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HumanShieldAngularSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HumanShieldAngularSpeed = { "HumanShieldAngularSpeed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HumanShieldAngularSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HumanShieldAngularSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HumanShieldAngularSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundAlpha = { "HSVictimRotateAroundAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HSVictimRotateAroundAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistanceSinceStartJumping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistanceSinceStartJumping = { "CoveredDistanceSinceStartJumping", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CoveredDistanceSinceStartJumping), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistanceSinceStartJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistanceSinceStartJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PivotSwitchHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PivotSwitchHandler = { "PivotSwitchHandler", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, PivotSwitchHandler), Z_Construct_UScriptStruct_FSBZPivotSwitchHandler, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PivotSwitchHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PivotSwitchHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveAngle = { "StopMoveAngle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopMoveAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveGaitValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveGaitValue = { "StopMoveGaitValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopMoveGaitValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveGaitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveGaitValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveAngle = { "StartMoveAngle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveGaitValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveGaitValue = { "StartMoveGaitValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveGaitValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveGaitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveGaitValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection = { "StartMoveMovementDirection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveMovementDirection), Z_Construct_UEnum_Starbreeze_ESBZMovementDirection, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ActionUpperBodyLayeredBlendWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ActionUpperBodyLayeredBlendWeight = { "ActionUpperBodyLayeredBlendWeight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, ActionUpperBodyLayeredBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ActionUpperBodyLayeredBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ActionUpperBodyLayeredBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootYawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RootYawOffset), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootYawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ViewYawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ViewYawOffset = { "ViewYawOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, ViewYawOffset), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ViewYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ViewYawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TurnRemainingYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TurnRemainingYaw = { "TurnRemainingYaw", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, TurnRemainingYaw), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TurnRemainingYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TurnRemainingYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OrientationAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OrientationAngle = { "OrientationAngle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, OrientationAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OrientationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OrientationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaMovingOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaMovingOnGround = { "AlphaMovingOnGround", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaMovingOnGround), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaMovingOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaMovingOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaOnGround = { "AlphaOnGround", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaOnGround), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarping = { "AlphaSpeedWarping", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaSpeedWarping), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarpingMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarpingMoving = { "AlphaSpeedWarpingMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaSpeedWarpingMoving), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarpingMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarpingMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionX = { "FeetPositionX", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FeetPositionX), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionY = { "FeetPositionY", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FeetPositionY), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimingAlpha = { "AimingAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootCycle = { "FootCycle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FootCycle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunPlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunPlayRate = { "BSWalkRunPlayRate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunPlayRate), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunGaitValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunGaitValue = { "BSWalkRunGaitValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunGaitValue), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunGaitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunGaitValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunYaw = { "BSWalkRunYaw", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunYaw), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlpha = { "CrouchBlendingAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchBlendingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlphaOnlyLoco_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlphaOnlyLoco = { "CrouchBlendingAlphaOnlyLoco", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchBlendingAlphaOnlyLoco), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlphaOnlyLoco_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlphaOnlyLoco_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperbodyAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperbodyAlpha = { "UpperbodyAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperbodyAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperbodyAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperbodyAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FixUpperbodyAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FixUpperbodyAlpha = { "FixUpperbodyAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, FixUpperbodyAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FixUpperbodyAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FixUpperbodyAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HigherLowerBodyAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HigherLowerBodyAlpha = { "HigherLowerBodyAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HigherLowerBodyAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HigherLowerBodyAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HigherLowerBodyAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperbody = { "AimOffsetMaxLODUpperbody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperbody), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHead = { "AimOffsetMaxLODHead", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODHead), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHeadLeading = { "AimOffsetMaxLODHeadLeading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODHeadLeading), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODFullBody = { "AimOffsetMaxLODFullBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODFullBody), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle = { "AimOffsetMaxLODUpperBodyCrouchIdle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperBodyCrouchIdle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving = { "AimOffsetMaxLODUpperBodyCrouchMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperBodyCrouchMoving), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootOffset = { "RootOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsOffset = { "HipsOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentLocation = { "LeftHandAttachmentLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldLocation = { "LeftHandAttachmentWorldLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldAffectedAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldAffectedAxis = { "LeftHandAttachmentWorldAffectedAxis", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldAffectedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldAffectedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldAffectedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentLocation = { "RightHandAttachmentLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldLocation = { "RightHandAttachmentWorldLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldAffectedAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldAffectedAxis = { "RightHandAttachmentWorldAffectedAxis", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldAffectedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldAffectedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldAffectedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentRotation = { "LeftHandAttachmentRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotation = { "LeftHandAttachmentWorldRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotationMode = { "LeftHandAttachmentWorldRotationMode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldRotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentRotation = { "RightHandAttachmentRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotation = { "RightHandAttachmentWorldRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotationMode = { "RightHandAttachmentWorldRotationMode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldRotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandIKAlpha = { "LeftHandIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandLocalIKAlpha = { "LeftHandLocalIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandLocalIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandLocalIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandWorldIKAlpha = { "LeftHandWorldIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandWorldIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandWorldIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandWorldIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandWorldIKAlpha = { "RightHandWorldIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandWorldIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandWorldIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandWorldIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandLocalIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandLocalIKAlpha = { "RightHandLocalIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandLocalIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandLocalIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandLocalIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandIKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandIKAlpha = { "RightHandIKAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandIKAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandIKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandIKAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandGripAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandGripAlpha = { "RightHandGripAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandGripAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandGripAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandGripAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandGripAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandGripAlpha = { "LeftHandGripAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandGripAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandGripAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandGripAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HandIKRetargetingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HandIKRetargetingAlpha = { "HandIKRetargetingAlpha", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HandIKRetargetingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HandIKRetargetingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HandIKRetargetingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveRotation = { "HipsAdditiveRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsAdditiveRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveTranslation = { "HipsAdditiveTranslation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsAdditiveTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OverridenWeaponRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OverridenWeaponRotation = { "OverridenWeaponRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, OverridenWeaponRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OverridenWeaponRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OverridenWeaponRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimationMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimationMontage = { "CurrentTurnAnimationMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTurnAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimationMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SubAnimationGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SubAnimationGraph = { "SubAnimationGraph", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, SubAnimationGraph), Z_Construct_UClass_USBZCharacterAnimationTPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SubAnimationGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SubAnimationGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimation = { "CurrentTurnAnimation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTurnAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AnimationCollection), Z_Construct_UClass_USBZCharacterAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimationCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStanceTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStanceTransitionMontage = { "CurrentStanceTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentStanceTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStanceTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStanceTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentCrouchTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentCrouchTransitionMontage = { "CurrentCrouchTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentCrouchTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentCrouchTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentCrouchTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionLFRFMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionLFRFMontage = { "StanceTransitionLFRFMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StanceTransitionLFRFMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionLFRFMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionLFRFMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionRFLFMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionRFLFMontage = { "StanceTransitionRFLFMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StanceTransitionRFLFMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionRFLFMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionRFLFMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchTransitionMontage = { "CrouchTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchTransitionMontage = { "UncrouchTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMoveTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMoveTransitionMontage = { "CrouchMoveTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchMoveTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMoveTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMoveTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMoveTransitionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMoveTransitionMontage = { "UncrouchMoveTransitionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchMoveTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMoveTransitionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMoveTransitionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMontage = { "CrouchMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMontage = { "UncrouchMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentEquippableClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentEquippableClass = { "CurrentEquippableClass", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentEquippableClass), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentEquippableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentEquippableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetSliding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetSliding = { "AimOffsetSliding", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetSliding), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetVaulting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetVaulting = { "AimOffsetVaulting", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetVaulting), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetVaulting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetVaulting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMantling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMantling = { "AimOffsetMantling", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMantling), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMantling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMantling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetZiplining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetZiplining = { "AimOffsetZiplining", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetZiplining), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetZiplining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetZiplining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveStandBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveStandBS = { "MoveStandBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, MoveStandBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveStandBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveStandBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveCrouchBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveCrouchBS = { "MoveCrouchBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, MoveCrouchBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveCrouchBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveCrouchBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandTurnBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandTurnBS = { "StartMoveStandTurnBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveStandTurnBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandTurnBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandTurnBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandBS = { "StartMoveStandBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveStandBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchBS = { "StartMoveCrouchBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveCrouchBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchTurnBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchTurnBS = { "StartMoveCrouchTurnBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveCrouchTurnBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchTurnBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchTurnBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MovePivotSwitchBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MovePivotSwitchBS = { "MovePivotSwitchBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, MovePivotSwitchBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MovePivotSwitchBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MovePivotSwitchBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandLFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandLFoot = { "StopStandLFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopStandLFoot), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandLFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandLFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandRFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandRFoot = { "StopStandRFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopStandRFoot), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandRFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandRFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanBS = { "LeanBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetOnlyHeadBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetOnlyHeadBS = { "AimOffsetOnlyHeadBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetOnlyHeadBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetOnlyHeadBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetOnlyHeadBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyBS = { "AimOffsetAllUpperBodyBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedBS = { "AimOffsetAllUpperBodyCrouchedBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyCrouchedBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedIdleBS = { "AimOffsetAllUpperBodyCrouchedIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyCrouchedIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetFullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetFullBody = { "AimOffsetFullBody", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetFullBody), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedStdBS = { "UpperBodyUnequippedStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedCrhBS = { "UpperBodyUnequippedCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedStdBS = { "UpperBodyEquippedStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedCrhBS = { "UpperBodyEquippedCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyStdBS = { "UpperBodyEquippedReadyStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyCrhBS = { "UpperBodyEquippedReadyCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedStdBS = { "UpperBodyEquippedRelaxedStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedCrhBS = { "UpperBodyEquippedRelaxedCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingStdBS = { "UpperBodyEquippedUsingStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingCrhBS = { "UpperBodyEquippedUsingCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedStdBS = { "UpperBodyLeftHandEquippedStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedCrhBS = { "UpperBodyLeftHandEquippedCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingStdBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingStdBS = { "UpperBodyLeftHandEquippedUsingStdBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingStdBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingStdBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingStdBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingCrhBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingCrhBS = { "UpperBodyLeftHandEquippedUsingCrhBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingCrhBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingCrhBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingCrhBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedIdleBS = { "UpperBodyUnequippedIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedIdleBS = { "UpperBodyEquippedIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyIdleBS = { "UpperBodyEquippedReadyIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedIdleBS = { "UpperBodyEquippedRelaxedIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingIdleBS = { "UpperBodyEquippedUsingIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedIdleBS = { "UpperBodyLeftHandEquippedIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingIdleBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingIdleBS = { "UpperBodyLeftHandEquippedUsingIdleBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingIdleBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingIdleBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingIdleBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultSlowStartBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultSlowStartBS = { "VaultSlowStartBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultSlowStartBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultSlowStartBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultSlowStartBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultFastStartBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultFastStartBS = { "VaultFastStartBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultFastStartBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultFastStartBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultFastStartBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultExitTraverseBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultExitTraverseBS = { "VaultExitTraverseBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultExitTraverseBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultExitTraverseBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultExitTraverseBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultLandBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultLandBS = { "VaultLandBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultLandBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultLandBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultLandBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleSlowBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleSlowBS = { "MantleSlowBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, MantleSlowBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleSlowBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleSlowBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleFastBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleFastBS = { "MantleFastBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, MantleFastBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleFastBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleFastBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, Idle), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_IdleCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_IdleCrouch = { "IdleCrouch", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, IdleCrouch), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_IdleCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_IdleCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchLFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchLFoot = { "StopCrouchLFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopCrouchLFoot), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchLFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchLFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchRFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchRFoot = { "StopCrouchRFoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, StopCrouchRFoot), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchRFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchRFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStart), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartStatic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartStatic = { "JumpStartStatic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStartStatic), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartMoving = { "JumpStartMoving", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStartMoving), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Fall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Fall = { "Fall", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, Fall), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Fall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Fall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundBS = { "HSVictimRotateAroundBS", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, HSVictimRotateAroundBS), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableLeftGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableLeftGripPose = { "EquippableLeftGripPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, EquippableLeftGripPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableLeftGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableLeftGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableRightGripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableRightGripPose = { "EquippableRightGripPose", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, EquippableRightGripPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableRightGripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableRightGripPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStopAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStopAnimation = { "CurrentStopAnimation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentStopAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStopAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStopAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentBodyGestureMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentBodyGestureMontage = { "CurrentBodyGestureMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentBodyGestureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentBodyGestureMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentBodyGestureMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LookFocusHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LookFocusHandler = { "LookFocusHandler", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, LookFocusHandler), Z_Construct_UScriptStruct_FSBZLookFocusHandler, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LookFocusHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LookFocusHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_WrinklesHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_WrinklesHandler = { "WrinklesHandler", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, WrinklesHandler), Z_Construct_UScriptStruct_FSBZWrinklesHandler, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_WrinklesHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_WrinklesHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentFullBodyMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationTPP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationTPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentFullBodyMontage = { "CurrentFullBodyMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentFullBodyMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentFullBodyMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentFullBodyMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStartMovingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInMovingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInStopMovingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopMovingStateUsesOrientationWarping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bMeshInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bJumpingMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartMovingHasATurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bWasRunningBeforeStopTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseAimOffsetAllUpperBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bUseCrouchIdleAimOffsetAllUpperBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasLeftFootForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bActivateInertialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableLeaning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bFullBodyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsInLinkedFullBodyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bLinkedFullBodyActionNodeIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bAimOffsetHandledInFullBodyAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFootLocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableWeaponRotationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFullBodyAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouchIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetUpperBodyCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableAimOffsetFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bRightFootStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsTraversing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsPlayingFullBodyAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bIsHumanShieldVictimGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableHipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStopAnimationFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopCrouchAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bHasStopStandAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToNotMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromPivotSwitchToMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToNotMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToNotMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromNotMovingToStartMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromMovingToStopMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStartMovingToStopMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToStartMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromStopMovingToNotMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyIdleToMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromUpperBodyMovingToIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromTraverseToFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bTransitFromFallToCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableUpperBodySyncGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bNewRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableFacial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bEnableRigidBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_bStartHipsZBlending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogAnimDataWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentDialogStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LipSyncBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TraverseAnimationHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FacialAnimationBlendHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyActionBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FullBodyBlendAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimLODType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMovingPoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistSinceStartMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DistToPredictedStopLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LocomotionSpeedwarpingDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenCapsuleRotationAndDesiredVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenMeshRotationAndVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffYawBetweenRotationAndAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyAimRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HeadAimRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AdditiveRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_DiffPitchBetweenRotationAndAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingMovingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStartMovingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedWarpingStopMovingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootRotationDeltaYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanXValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanYValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftFootPlacementBoneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightFootPlacementBoneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpineAdjustmentAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnkleAdjustmentAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SpeedAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HumanShieldAngularSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CoveredDistanceSinceStartJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_PivotSwitchHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopMoveGaitValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveGaitValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveMovementDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ActionUpperBodyLayeredBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootYawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_ViewYawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_TurnRemainingYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OrientationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaMovingOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AlphaSpeedWarpingMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FeetPositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FootCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunGaitValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_BSWalkRunYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchBlendingAlphaOnlyLoco,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperbodyAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_FixUpperbodyAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HigherLowerBodyAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperbody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldAffectedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldAffectedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandAttachmentWorldRotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandAttachmentWorldRotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandLocalIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandWorldIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandWorldIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandLocalIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandIKAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_RightHandGripAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeftHandGripAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HandIKRetargetingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HipsAdditiveTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_OverridenWeaponRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimationMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_SubAnimationGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTurnAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AnimationCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStanceTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentCrouchTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionLFRFMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StanceTransitionRFLFMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMoveTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMoveTransitionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CrouchMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UncrouchMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentEquippableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetVaulting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetMantling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetZiplining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveStandBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MoveCrouchBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandTurnBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveStandBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StartMoveCrouchTurnBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MovePivotSwitchBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandLFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopStandRFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LeanBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetOnlyHeadBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetAllUpperBodyCrouchedIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_AimOffsetFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingStdBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingCrhBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyUnequippedIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedReadyIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedRelaxedIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyEquippedUsingIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_UpperBodyLeftHandEquippedUsingIdleBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultSlowStartBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultFastStartBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultExitTraverseBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_VaultLandBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleSlowBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_MantleFastBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_IdleCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchLFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_StopCrouchRFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_JumpStartMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_Fall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_HSVictimRotateAroundBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableLeftGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_EquippableRightGripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentStopAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentBodyGestureMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_LookFocusHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_WrinklesHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::NewProp_CurrentFullBodyMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterAnimationTPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::ClassParams = {
		&USBZCharacterAnimationTPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterAnimationTPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterAnimationTPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterAnimationTPP, 1831266135);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterAnimationTPP>()
	{
		return USBZCharacterAnimationTPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterAnimationTPP(Z_Construct_UClass_USBZCharacterAnimationTPP, &USBZCharacterAnimationTPP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterAnimationTPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterAnimationTPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
