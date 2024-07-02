// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCharacterAnimationTPP_generated_h
#error "SBZCharacterAnimationTPP.generated.h already included, missing '#pragma once' in SBZCharacterAnimationTPP.h"
#endif
#define STARBREEZE_SBZCharacterAnimationTPP_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterAnimationTPP(); \
	friend struct Z_Construct_UClass_USBZCharacterAnimationTPP_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterAnimationTPP, USBZCharacterAnimation, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterAnimationTPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterAnimationTPP(); \
	friend struct Z_Construct_UClass_USBZCharacterAnimationTPP_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterAnimationTPP, USBZCharacterAnimation, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterAnimationTPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterAnimationTPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterAnimationTPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterAnimationTPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterAnimationTPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterAnimationTPP(USBZCharacterAnimationTPP&&); \
	NO_API USBZCharacterAnimationTPP(const USBZCharacterAnimationTPP&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterAnimationTPP(USBZCharacterAnimationTPP&&); \
	NO_API USBZCharacterAnimationTPP(const USBZCharacterAnimationTPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterAnimationTPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterAnimationTPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCharacterAnimationTPP)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentDialogAnimDataWrapper() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentDialogAnimDataWrapper); } \
	FORCEINLINE static uint32 __PPO__CurrentDialogStartTime() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentDialogStartTime); } \
	FORCEINLINE static uint32 __PPO__LipSyncBlendWeight() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LipSyncBlendWeight); } \
	FORCEINLINE static uint32 __PPO__TraverseAnimationHandler() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, TraverseAnimationHandler); } \
	FORCEINLINE static uint32 __PPO__FacialAnimationBlendHandler() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FacialAnimationBlendHandler); } \
	FORCEINLINE static uint32 __PPO__FullBodyActionBlendTime() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FullBodyActionBlendTime); } \
	FORCEINLINE static uint32 __PPO__FullBodyBlendAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FullBodyBlendAlpha); } \
	FORCEINLINE static uint32 __PPO__AnimLODType() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AnimLODType); } \
	FORCEINLINE static uint32 __PPO__PoseType() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, PoseType); } \
	FORCEINLINE static uint32 __PPO__StartMovingPoseType() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMovingPoseType); } \
	FORCEINLINE static uint32 __PPO__AimOffsetType() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetType); } \
	FORCEINLINE static uint32 __PPO__CoveredDistSinceStartMoving() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CoveredDistSinceStartMoving); } \
	FORCEINLINE static uint32 __PPO__DistToPredictedStopLocation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, DistToPredictedStopLocation); } \
	FORCEINLINE static uint32 __PPO__StopPlayRate() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopPlayRate); } \
	FORCEINLINE static uint32 __PPO__LocomotionSpeedwarpingDir() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LocomotionSpeedwarpingDir); } \
	FORCEINLINE static uint32 __PPO__SpeedWarpingScaling() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingScaling); } \
	FORCEINLINE static uint32 __PPO__SpeedWarpingAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingAlpha); } \
	FORCEINLINE static uint32 __PPO__DiffYawBetweenCapsuleRotationAndDesiredVelocity() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenCapsuleRotationAndDesiredVelocity); } \
	FORCEINLINE static uint32 __PPO__DiffYawBetweenMeshRotationAndVelocity() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenMeshRotationAndVelocity); } \
	FORCEINLINE static uint32 __PPO__DiffYawBetweenRotationAndAim() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffYawBetweenRotationAndAim); } \
	FORCEINLINE static uint32 __PPO__UpperBodyAimRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyAimRotation); } \
	FORCEINLINE static uint32 __PPO__HeadAimRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HeadAimRotation); } \
	FORCEINLINE static uint32 __PPO__AdditiveRotationYaw() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AdditiveRotationYaw); } \
	FORCEINLINE static uint32 __PPO__DiffPitchBetweenRotationAndAim() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, DiffPitchBetweenRotationAndAim); } \
	FORCEINLINE static uint32 __PPO__SpeedWarpingMovingData() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingMovingData); } \
	FORCEINLINE static uint32 __PPO__SpeedWarpingStartMovingData() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingStartMovingData); } \
	FORCEINLINE static uint32 __PPO__SpeedWarpingStopMovingData() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedWarpingStopMovingData); } \
	FORCEINLINE static uint32 __PPO__FootRotationDeltaYaw() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FootRotationDeltaYaw); } \
	FORCEINLINE static uint32 __PPO__LeanXValue() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanXValue); } \
	FORCEINLINE static uint32 __PPO__LeanYValue() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanYValue); } \
	FORCEINLINE static uint32 __PPO__LeftFootPlacementBoneInfo() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftFootPlacementBoneInfo); } \
	FORCEINLINE static uint32 __PPO__RightFootPlacementBoneInfo() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightFootPlacementBoneInfo); } \
	FORCEINLINE static uint32 __PPO__SpineAdjustmentAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpineAdjustmentAlpha); } \
	FORCEINLINE static uint32 __PPO__AnkleAdjustmentAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AnkleAdjustmentAlpha); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, Speed); } \
	FORCEINLINE static uint32 __PPO__SpeedAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SpeedAlpha); } \
	FORCEINLINE static uint32 __PPO__HumanShieldAngularSpeed() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HumanShieldAngularSpeed); } \
	FORCEINLINE static uint32 __PPO__HSVictimRotateAroundAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HSVictimRotateAroundAlpha); } \
	FORCEINLINE static uint32 __PPO__CoveredDistanceSinceStartJumping() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CoveredDistanceSinceStartJumping); } \
	FORCEINLINE static uint32 __PPO__PivotSwitchHandler() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, PivotSwitchHandler); } \
	FORCEINLINE static uint32 __PPO__StopMoveAngle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopMoveAngle); } \
	FORCEINLINE static uint32 __PPO__StopMoveGaitValue() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopMoveGaitValue); } \
	FORCEINLINE static uint32 __PPO__StartMoveAngle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveAngle); } \
	FORCEINLINE static uint32 __PPO__StartMoveGaitValue() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveGaitValue); } \
	FORCEINLINE static uint32 __PPO__StartMoveMovementDirection() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveMovementDirection); } \
	FORCEINLINE static uint32 __PPO__ActionUpperBodyLayeredBlendWeight() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, ActionUpperBodyLayeredBlendWeight); } \
	FORCEINLINE static uint32 __PPO__RootYawOffset() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RootYawOffset); } \
	FORCEINLINE static uint32 __PPO__ViewYawOffset() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, ViewYawOffset); } \
	FORCEINLINE static uint32 __PPO__TurnRemainingYaw() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, TurnRemainingYaw); } \
	FORCEINLINE static uint32 __PPO__OrientationAngle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, OrientationAngle); } \
	FORCEINLINE static uint32 __PPO__AlphaMovingOnGround() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaMovingOnGround); } \
	FORCEINLINE static uint32 __PPO__AlphaOnGround() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaOnGround); } \
	FORCEINLINE static uint32 __PPO__AlphaSpeedWarping() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaSpeedWarping); } \
	FORCEINLINE static uint32 __PPO__AlphaSpeedWarpingMoving() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AlphaSpeedWarpingMoving); } \
	FORCEINLINE static uint32 __PPO__FeetPositionX() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FeetPositionX); } \
	FORCEINLINE static uint32 __PPO__FeetPositionY() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FeetPositionY); } \
	FORCEINLINE static uint32 __PPO__AimingAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimingAlpha); } \
	FORCEINLINE static uint32 __PPO__FootCycle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FootCycle); } \
	FORCEINLINE static uint32 __PPO__BSWalkRunPlayRate() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunPlayRate); } \
	FORCEINLINE static uint32 __PPO__BSWalkRunGaitValue() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunGaitValue); } \
	FORCEINLINE static uint32 __PPO__BSWalkRunYaw() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, BSWalkRunYaw); } \
	FORCEINLINE static uint32 __PPO__CrouchBlendingAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchBlendingAlpha); } \
	FORCEINLINE static uint32 __PPO__CrouchBlendingAlphaOnlyLoco() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchBlendingAlphaOnlyLoco); } \
	FORCEINLINE static uint32 __PPO__UpperbodyAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperbodyAlpha); } \
	FORCEINLINE static uint32 __PPO__FixUpperbodyAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, FixUpperbodyAlpha); } \
	FORCEINLINE static uint32 __PPO__HigherLowerBodyAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HigherLowerBodyAlpha); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODUpperbody() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperbody); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODHead() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODHead); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODHeadLeading() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODHeadLeading); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODFullBody() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODFullBody); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODUpperBodyCrouchIdle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperBodyCrouchIdle); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMaxLODUpperBodyCrouchMoving() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMaxLODUpperBodyCrouchMoving); } \
	FORCEINLINE static uint32 __PPO__RootOffset() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RootOffset); } \
	FORCEINLINE static uint32 __PPO__HipsOffset() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsOffset); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentLocation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentLocation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldLocation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldLocation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldAffectedAxis() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldAffectedAxis); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentLocation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentLocation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentWorldLocation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldLocation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentWorldAffectedAxis() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldAffectedAxis); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentRotation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldRotation); } \
	FORCEINLINE static uint32 __PPO__LeftHandAttachmentWorldRotationMode() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandAttachmentWorldRotationMode); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentRotation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentWorldRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldRotation); } \
	FORCEINLINE static uint32 __PPO__RightHandAttachmentWorldRotationMode() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandAttachmentWorldRotationMode); } \
	FORCEINLINE static uint32 __PPO__LeftHandIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandLocalIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandLocalIKAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandWorldIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandWorldIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandWorldIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandWorldIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandLocalIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandLocalIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandIKAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandIKAlpha); } \
	FORCEINLINE static uint32 __PPO__RightHandGripAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, RightHandGripAlpha); } \
	FORCEINLINE static uint32 __PPO__LeftHandGripAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeftHandGripAlpha); } \
	FORCEINLINE static uint32 __PPO__HandIKRetargetingAlpha() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HandIKRetargetingAlpha); } \
	FORCEINLINE static uint32 __PPO__HipsAdditiveRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsAdditiveRotation); } \
	FORCEINLINE static uint32 __PPO__HipsAdditiveTranslation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HipsAdditiveTranslation); } \
	FORCEINLINE static uint32 __PPO__OverridenWeaponRotation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, OverridenWeaponRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentTurnAnimationMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTurnAnimationMontage); } \
	FORCEINLINE static uint32 __PPO__SubAnimationGraph() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, SubAnimationGraph); } \
	FORCEINLINE static uint32 __PPO__CurrentTurnAnimation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTurnAnimation); } \
	FORCEINLINE static uint32 __PPO__AnimationCollection() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AnimationCollection); } \
	FORCEINLINE static uint32 __PPO__CurrentStanceTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentStanceTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentCrouchTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentCrouchTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__StanceTransitionLFRFMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StanceTransitionLFRFMontage); } \
	FORCEINLINE static uint32 __PPO__StanceTransitionRFLFMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StanceTransitionRFLFMontage); } \
	FORCEINLINE static uint32 __PPO__CrouchTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__UncrouchTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__CrouchMoveTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchMoveTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__UncrouchMoveTransitionMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchMoveTransitionMontage); } \
	FORCEINLINE static uint32 __PPO__CrouchMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CrouchMontage); } \
	FORCEINLINE static uint32 __PPO__UncrouchMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UncrouchMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippableClass() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentEquippableClass); } \
	FORCEINLINE static uint32 __PPO__AimOffsetSliding() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetSliding); } \
	FORCEINLINE static uint32 __PPO__AimOffsetVaulting() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetVaulting); } \
	FORCEINLINE static uint32 __PPO__AimOffsetMantling() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetMantling); } \
	FORCEINLINE static uint32 __PPO__AimOffsetZiplining() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetZiplining); } \
	FORCEINLINE static uint32 __PPO__MoveStandBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, MoveStandBS); } \
	FORCEINLINE static uint32 __PPO__MoveCrouchBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, MoveCrouchBS); } \
	FORCEINLINE static uint32 __PPO__StartMoveStandTurnBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveStandTurnBS); } \
	FORCEINLINE static uint32 __PPO__StartMoveStandBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveStandBS); } \
	FORCEINLINE static uint32 __PPO__StartMoveCrouchBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveCrouchBS); } \
	FORCEINLINE static uint32 __PPO__StartMoveCrouchTurnBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StartMoveCrouchTurnBS); } \
	FORCEINLINE static uint32 __PPO__MovePivotSwitchBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, MovePivotSwitchBS); } \
	FORCEINLINE static uint32 __PPO__StopStandLFoot() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopStandLFoot); } \
	FORCEINLINE static uint32 __PPO__StopStandRFoot() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopStandRFoot); } \
	FORCEINLINE static uint32 __PPO__LeanBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LeanBS); } \
	FORCEINLINE static uint32 __PPO__AimOffsetOnlyHeadBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetOnlyHeadBS); } \
	FORCEINLINE static uint32 __PPO__AimOffsetAllUpperBodyBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyBS); } \
	FORCEINLINE static uint32 __PPO__AimOffsetAllUpperBodyCrouchedBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyCrouchedBS); } \
	FORCEINLINE static uint32 __PPO__AimOffsetAllUpperBodyCrouchedIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetAllUpperBodyCrouchedIdleBS); } \
	FORCEINLINE static uint32 __PPO__AimOffsetFullBody() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, AimOffsetFullBody); } \
	FORCEINLINE static uint32 __PPO__UpperBodyUnequippedStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyUnequippedCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedReadyStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedReadyCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedRelaxedStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedRelaxedCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedUsingStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedUsingCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedUsingStdBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingStdBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedUsingCrhBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingCrhBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyUnequippedIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyUnequippedIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedReadyIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedReadyIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedRelaxedIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedRelaxedIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyEquippedUsingIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyEquippedUsingIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedIdleBS); } \
	FORCEINLINE static uint32 __PPO__UpperBodyLeftHandEquippedUsingIdleBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, UpperBodyLeftHandEquippedUsingIdleBS); } \
	FORCEINLINE static uint32 __PPO__VaultSlowStartBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultSlowStartBS); } \
	FORCEINLINE static uint32 __PPO__VaultFastStartBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultFastStartBS); } \
	FORCEINLINE static uint32 __PPO__VaultExitTraverseBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultExitTraverseBS); } \
	FORCEINLINE static uint32 __PPO__VaultLandBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, VaultLandBS); } \
	FORCEINLINE static uint32 __PPO__MantleSlowBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, MantleSlowBS); } \
	FORCEINLINE static uint32 __PPO__MantleFastBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, MantleFastBS); } \
	FORCEINLINE static uint32 __PPO__Idle() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, Idle); } \
	FORCEINLINE static uint32 __PPO__IdleCrouch() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, IdleCrouch); } \
	FORCEINLINE static uint32 __PPO__StopCrouchLFoot() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopCrouchLFoot); } \
	FORCEINLINE static uint32 __PPO__StopCrouchRFoot() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, StopCrouchRFoot); } \
	FORCEINLINE static uint32 __PPO__JumpStart() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStart); } \
	FORCEINLINE static uint32 __PPO__JumpStartStatic() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStartStatic); } \
	FORCEINLINE static uint32 __PPO__JumpStartMoving() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, JumpStartMoving); } \
	FORCEINLINE static uint32 __PPO__Fall() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, Fall); } \
	FORCEINLINE static uint32 __PPO__HSVictimRotateAroundBS() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, HSVictimRotateAroundBS); } \
	FORCEINLINE static uint32 __PPO__EquippableLeftGripPose() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, EquippableLeftGripPose); } \
	FORCEINLINE static uint32 __PPO__EquippableRightGripPose() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, EquippableRightGripPose); } \
	FORCEINLINE static uint32 __PPO__CurrentStopAnimation() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentStopAnimation); } \
	FORCEINLINE static uint32 __PPO__CurrentBodyGestureMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentBodyGestureMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__LookFocusHandler() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, LookFocusHandler); } \
	FORCEINLINE static uint32 __PPO__WrinklesHandler() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, WrinklesHandler); } \
	FORCEINLINE static uint32 __PPO__CurrentFullBodyMontage() { return STRUCT_OFFSET(USBZCharacterAnimationTPP, CurrentFullBodyMontage); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_31_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterAnimationTPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterAnimationTPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
