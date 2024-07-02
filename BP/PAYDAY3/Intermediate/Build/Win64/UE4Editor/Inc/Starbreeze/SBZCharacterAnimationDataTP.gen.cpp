// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterAnimationDataTP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterAnimationDataTP() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationDataTP_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationDataTP();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseCharacterAnimationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZCharacterAnimationDataTP::StaticRegisterNativesUSBZCharacterAnimationDataTP()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterAnimationDataTP_NoRegister()
	{
		return USBZCharacterAnimationDataTP::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JogSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JogSpeedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalWalkSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalWalkSpeedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveYawInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveYawInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootYawReconcileInterpConstSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootYawReconcileInterpConstSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootYawStartMoveInterpConstSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootYawStartMoveInterpConstSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMovingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMovingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedWarping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedWarping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedWarping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedWarping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedWarpingSlopeReducer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedWarpingSlopeReducer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedWarpingReducedBySlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedWarpingReducedBySlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFixUpperbodyInMovingBS_MetaData[];
#endif
		static void NewProp_bEnableFixUpperbodyInMovingBS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFixUpperbodyInMovingBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnInPlacePlayRateRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnInPlacePlayRateRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeadingScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootLeadingScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeadingInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootLeadingInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeadingMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootLeadingMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePivotSwitchAnimation_MetaData[];
#endif
		static void NewProp_bEnablePivotSwitchAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePivotSwitchAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStartMoveAnimation_MetaData[];
#endif
		static void NewProp_bEnableStartMoveAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStartMoveAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeOffsetFromDesiredStopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeOffsetFromDesiredStopTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMovePlayRateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopMovePlayRateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceReadyPoseWhenJogging_MetaData[];
#endif
		static void NewProp_bForceReadyPoseWhenJogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReadyPoseWhenJogging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceReadyPoseWhenTurning_MetaData[];
#endif
		static void NewProp_bForceReadyPoseWhenTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceReadyPoseWhenTurning;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStartMovePlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinStartMovePlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIncreasingAimYawDuringStartMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxIncreasingAimYawDuringStartMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingJumpMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingJumpMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAimPitchReadyPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAimPitchReadyPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRandomLookAt_MetaData[];
#endif
		static void NewProp_bEnableRandomLookAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRandomLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLookAtSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLookAtSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLookAtRestDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLookAtRestDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLookAtYawRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLookAtYawRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLookAtPitchRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLookAtPitchRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLookAtSpeedExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomLookAtSpeedExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapViewToTarget_MetaData[];
#endif
		static void NewProp_bEnableSnapViewToTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapViewToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToViewDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapToViewDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceEquippedPoseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceEquippedPoseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaningStrengthAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaningStrengthAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanAccelerationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeanAccelerationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanRotationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeanRotationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHeadLeading_MetaData[];
#endif
		static void NewProp_bEnableHeadLeading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHeadLeading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingUpperBodyLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingUpperBodyLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingHeadInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingHeadInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdditiveHeadLeading_MetaData[];
#endif
		static void NewProp_bEnableAdditiveHeadLeading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdditiveHeadLeading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingMaxAdditiveYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingMaxAdditiveYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingAdditiveYawInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingAdditiveYawInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLeadingAdditiveYawAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadLeadingAdditiveYawAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnkleAdjustmentMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnkleAdjustmentMaxSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollBoneScale_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RagdollBoneScale_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollBoneScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RagdollBoneScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRagdollBoneScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultRagdollBoneScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchTransitionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchTransitionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchTransitionExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchTransitionExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHigherLowerBodyWhenCrouched_MetaData[];
#endif
		static void NewProp_bUseHigherLowerBodyWhenCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHigherLowerBodyWhenCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveHipTranslationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveHipTranslationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveHipRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveHipRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeWarpingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeWarpingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrinkleAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrinkleAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDoHipsZBlending_MetaData[];
#endif
		static void NewProp_bCanDoHipsZBlending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDoHipsZBlending;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseCharacterAnimationData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterAnimationDataTP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_JogSpeedRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_JogSpeedRange = { "JogSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, JogSpeedRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_JogSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_JogSpeedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_NormalWalkSpeedRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_NormalWalkSpeedRange = { "NormalWalkSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, NormalWalkSpeedRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_NormalWalkSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_NormalWalkSpeedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MoveYawInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MoveYawInterpSpeed = { "MoveYawInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MoveYawInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MoveYawInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MoveYawInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_VelocityInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_VelocityInterpSpeed = { "VelocityInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, VelocityInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_VelocityInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_VelocityInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawReconcileInterpConstSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawReconcileInterpConstSpeed = { "RootYawReconcileInterpConstSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RootYawReconcileInterpConstSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawReconcileInterpConstSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawReconcileInterpConstSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawStartMoveInterpConstSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawStartMoveInterpConstSpeed = { "RootYawStartMoveInterpConstSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RootYawStartMoveInterpConstSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawStartMoveInterpConstSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawStartMoveInterpConstSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinMovingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinMovingSpeed = { "MinMovingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MinMovingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinMovingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinMovingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarping = { "MaxSpeedWarping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MaxSpeedWarping), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarping = { "MinSpeedWarping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MinSpeedWarping), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarpingSlopeReducer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarpingSlopeReducer = { "MaxSpeedWarpingSlopeReducer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MaxSpeedWarpingSlopeReducer), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarpingSlopeReducer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarpingSlopeReducer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarpingReducedBySlope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarpingReducedBySlope = { "MinSpeedWarpingReducedBySlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MinSpeedWarpingReducedBySlope), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarpingReducedBySlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarpingReducedBySlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableFixUpperbodyInMovingBS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS = { "bEnableFixUpperbodyInMovingBS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlaceBlendOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlaceBlendOut = { "TurnInPlaceBlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, TurnInPlaceBlendOut), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlaceBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlaceBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlacePlayRateRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlacePlayRateRange = { "TurnInPlacePlayRateRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, TurnInPlacePlayRateRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlacePlayRateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlacePlayRateRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingScale = { "FootLeadingScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, FootLeadingScale), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingInterpSpeed = { "FootLeadingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, FootLeadingInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingMaxAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingMaxAngle = { "FootLeadingMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, FootLeadingMaxAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnablePivotSwitchAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation = { "bEnablePivotSwitchAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableStartMoveAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation = { "bEnableStartMoveAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxTimeOffsetFromDesiredStopTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxTimeOffsetFromDesiredStopTime = { "MaxTimeOffsetFromDesiredStopTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MaxTimeOffsetFromDesiredStopTime), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxTimeOffsetFromDesiredStopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxTimeOffsetFromDesiredStopTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopMovePlayRateInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopMovePlayRateInterval = { "StopMovePlayRateInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, StopMovePlayRateInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopMovePlayRateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopMovePlayRateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bForceReadyPoseWhenJogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging = { "bForceReadyPoseWhenJogging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bForceReadyPoseWhenTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning = { "bForceReadyPoseWhenTurning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperbody = { "AimOffsetMaxLODUpperbody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODUpperbody), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperbody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHead = { "AimOffsetMaxLODHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODHead), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHeadLeading = { "AimOffsetMaxLODHeadLeading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODHeadLeading), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODFullBody = { "AimOffsetMaxLODFullBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODFullBody), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle = { "AimOffsetMaxLODUpperBodyCrouchIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODUpperBodyCrouchIdle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving = { "AimOffsetMaxLODUpperBodyCrouchMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AimOffsetMaxLODUpperBodyCrouchMoving), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinStartMovePlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinStartMovePlayRate = { "MinStartMovePlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MinStartMovePlayRate), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinStartMovePlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinStartMovePlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxIncreasingAimYawDuringStartMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxIncreasingAimYawDuringStartMove = { "MaxIncreasingAimYawDuringStartMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MaxIncreasingAimYawDuringStartMove), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxIncreasingAimYawDuringStartMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxIncreasingAimYawDuringStartMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MovingJumpMinSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MovingJumpMinSpeed = { "MovingJumpMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MovingJumpMinSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MovingJumpMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MovingJumpMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinAimPitchReadyPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinAimPitchReadyPose = { "MinAimPitchReadyPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, MinAimPitchReadyPose), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinAimPitchReadyPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinAimPitchReadyPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableRandomLookAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt = { "bEnableRandomLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeed = { "RandomLookAtSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RandomLookAtSpeed), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtRestDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtRestDuration = { "RandomLookAtRestDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RandomLookAtRestDuration), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtRestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtRestDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtYawRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtYawRange = { "RandomLookAtYawRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RandomLookAtYawRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtYawRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtYawRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtPitchRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtPitchRange = { "RandomLookAtPitchRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RandomLookAtPitchRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtPitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtPitchRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeedExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeedExp = { "RandomLookAtSpeedExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RandomLookAtSpeedExp), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeedExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeedExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableSnapViewToTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget = { "bEnableSnapViewToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SnapToViewDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SnapToViewDuration = { "SnapToViewDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, SnapToViewDuration), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SnapToViewDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SnapToViewDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_ForceEquippedPoseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_ForceEquippedPoseDuration = { "ForceEquippedPoseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, ForceEquippedPoseDuration), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_ForceEquippedPoseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_ForceEquippedPoseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeaningStrengthAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeaningStrengthAlpha = { "LeaningStrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, LeaningStrengthAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeaningStrengthAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeaningStrengthAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanAccelerationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanAccelerationInterval = { "LeanAccelerationInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, LeanAccelerationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanAccelerationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanAccelerationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanRotationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanRotationInterval = { "LeanRotationInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, LeanRotationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanRotationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanRotationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableHeadLeading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading = { "bEnableHeadLeading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingUpperBodyLerpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingUpperBodyLerpSpeed = { "HeadLeadingUpperBodyLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingUpperBodyLerpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingUpperBodyLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingUpperBodyLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingHeadInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingHeadInterpSpeed = { "HeadLeadingHeadInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingHeadInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingHeadInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingHeadInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAngle = { "HeadLeadingMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingMaxAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bEnableAdditiveHeadLeading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading = { "bEnableAdditiveHeadLeading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAdditiveYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAdditiveYaw = { "HeadLeadingMaxAdditiveYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingMaxAdditiveYaw), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAdditiveYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAdditiveYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawInterpSpeed = { "HeadLeadingAdditiveYawInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingAdditiveYawInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawAlpha = { "HeadLeadingAdditiveYawAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, HeadLeadingAdditiveYawAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AnkleAdjustmentMaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AnkleAdjustmentMaxSpeed = { "AnkleAdjustmentMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AnkleAdjustmentMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AnkleAdjustmentMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AnkleAdjustmentMaxSpeed_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_ValueProp = { "RagdollBoneScale", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_Key_KeyProp = { "RagdollBoneScale_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale = { "RagdollBoneScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, RagdollBoneScale), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_DefaultRagdollBoneScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_DefaultRagdollBoneScale = { "DefaultRagdollBoneScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, DefaultRagdollBoneScale), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_DefaultRagdollBoneScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_DefaultRagdollBoneScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionDuration = { "CrouchTransitionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, CrouchTransitionDuration), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionExp = { "CrouchTransitionExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, CrouchTransitionExp), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bUseHigherLowerBodyWhenCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched = { "bUseHigherLowerBodyWhenCrouched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopBlendOutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopBlendOutTime = { "StopBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, StopBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipTranslationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipTranslationSpeed = { "AdditiveHipTranslationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AdditiveHipTranslationSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipTranslationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipTranslationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipRotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipRotationSpeed = { "AdditiveHipRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, AdditiveHipRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SlopeWarpingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SlopeWarpingAlpha = { "SlopeWarpingAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, SlopeWarpingAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SlopeWarpingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SlopeWarpingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_WrinkleAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_WrinkleAlpha = { "WrinkleAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterAnimationDataTP, WrinkleAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_WrinkleAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_WrinkleAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterAnimationDataTP" },
		{ "ModuleRelativePath", "Public/SBZCharacterAnimationDataTP.h" },
	};
#endif
	void Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending_SetBit(void* Obj)
	{
		((USBZCharacterAnimationDataTP*)Obj)->bCanDoHipsZBlending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending = { "bCanDoHipsZBlending", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCharacterAnimationDataTP), &Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_JogSpeedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_NormalWalkSpeedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MoveYawInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_VelocityInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawReconcileInterpConstSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RootYawStartMoveInterpConstSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinMovingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxSpeedWarpingSlopeReducer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinSpeedWarpingReducedBySlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableFixUpperbodyInMovingBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlaceBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_TurnInPlacePlayRateRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_FootLeadingMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnablePivotSwitchAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableStartMoveAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxTimeOffsetFromDesiredStopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopMovePlayRateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenJogging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bForceReadyPoseWhenTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperbody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AimOffsetMaxLODUpperBodyCrouchMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinStartMovePlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MaxIncreasingAimYawDuringStartMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MovingJumpMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_MinAimPitchReadyPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableRandomLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtRestDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtYawRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtPitchRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RandomLookAtSpeedExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableSnapViewToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SnapToViewDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_ForceEquippedPoseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeaningStrengthAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanAccelerationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_LeanRotationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingUpperBodyLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingHeadInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bEnableAdditiveHeadLeading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingMaxAdditiveYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_HeadLeadingAdditiveYawAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AnkleAdjustmentMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_RagdollBoneScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_DefaultRagdollBoneScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_CrouchTransitionExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bUseHigherLowerBodyWhenCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_StopBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipTranslationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_AdditiveHipRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_SlopeWarpingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_WrinkleAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::NewProp_bCanDoHipsZBlending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterAnimationDataTP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::ClassParams = {
		&USBZCharacterAnimationDataTP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterAnimationDataTP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterAnimationDataTP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterAnimationDataTP, 2034531582);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterAnimationDataTP>()
	{
		return USBZCharacterAnimationDataTP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterAnimationDataTP(Z_Construct_UClass_USBZCharacterAnimationDataTP, &USBZCharacterAnimationDataTP::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterAnimationDataTP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterAnimationDataTP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
