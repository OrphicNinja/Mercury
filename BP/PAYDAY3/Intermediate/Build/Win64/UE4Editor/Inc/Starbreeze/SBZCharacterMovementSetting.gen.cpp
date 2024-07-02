// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterMovementSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterMovementSetting() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterMovementSetting();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationDataTP_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCharacterMovementSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterMovementSetting"), sizeof(FSBZCharacterMovementSetting), Get_Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterMovementSetting>()
{
	return FSBZCharacterMovementSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterMovementSetting(FSBZCharacterMovementSetting::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterMovementSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterMovementSetting
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterMovementSetting()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterMovementSetting>(FName(TEXT("SBZCharacterMovementSetting")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterMovementSetting;
	struct Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedCrouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationRunning_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationWalking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSpeedBased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSpeedBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSpeedBasedSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSpeedBasedSpeedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSlowDownOnCurvedPath_MetaData[];
#endif
		static void NewProp_bSlowDownOnCurvedPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSlowDownOnCurvedPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRunSpeedOnCurvedPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRunSpeedOnCurvedPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathAngleForMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathAngleForMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConsiderationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceConsiderationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceDefaultTimeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceDefaultTimeToLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceLockTimeAfterAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceLockTimeAfterAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceLockTimeAfterClean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceLockTimeAfterClean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceDeltaTimeToPredict_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceDeltaTimeToPredict;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceArtificialRadiusExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceArtificialRadiusExpansion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAvoidanceCanSlowDownMovement_MetaData[];
#endif
		static void NewProp_bAvoidanceCanSlowDownMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidanceCanSlowDownMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAvoidanceSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAvoidanceSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionInnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionInnerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionOuterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionOuterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionHardCollisionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionHardCollisionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionSoftCollisionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionSoftCollisionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionMaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionMaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotationPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotationPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathViewFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathViewFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxWalkSpeeds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterMovementSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_Stances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_Stances = { "Stances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, Stances), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_Stances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_Stances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BaseEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BaseEyeHeight = { "BaseEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, BaseEyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BaseEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BaseEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeedCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeedCrouched = { "MaxWalkSpeedCrouched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxWalkSpeedCrouched), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeedCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeedCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxRunSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxRunSpeed = { "MaxRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxRunSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxSprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxSprintSpeed = { "MaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxSprintSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxTargetingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxTargetingSpeed = { "MaxTargetingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxTargetingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxTargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxTargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAccelerationRunning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAccelerationRunning = { "MaxAccelerationRunning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxAccelerationRunning), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAccelerationRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAccelerationRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BrakingDecelerationWalking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BrakingDecelerationWalking = { "BrakingDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, BrakingDecelerationWalking), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BrakingDecelerationWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BrakingDecelerationWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBased = { "FrictionSpeedBased", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, FrictionSpeedBased), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBasedSpeedRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBasedSpeedRange = { "FrictionSpeedBasedSpeedRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, FrictionSpeedBasedSpeedRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBasedSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBasedSpeedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_RotationRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath_SetBit(void* Obj)
	{
		((FSBZCharacterMovementSetting*)Obj)->bSlowDownOnCurvedPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath = { "bSlowDownOnCurvedPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterMovementSetting), &Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinRunSpeedOnCurvedPath = { "MinRunSpeedOnCurvedPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MinRunSpeedOnCurvedPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathAngleForMinSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathAngleForMinSpeed = { "PathAngleForMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, PathAngleForMinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathAngleForMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathAngleForMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceConsiderationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceConsiderationRadius = { "AvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceConsiderationRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceConsiderationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceConsiderationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDefaultTimeToLive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDefaultTimeToLive = { "AvoidanceDefaultTimeToLive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceDefaultTimeToLive), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDefaultTimeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDefaultTimeToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterAvoid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterAvoid = { "AvoidanceLockTimeAfterAvoid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceLockTimeAfterAvoid), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterClean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterClean = { "AvoidanceLockTimeAfterClean", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceLockTimeAfterClean), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterClean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterClean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDeltaTimeToPredict_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDeltaTimeToPredict = { "AvoidanceDeltaTimeToPredict", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceDeltaTimeToPredict), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDeltaTimeToPredict_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDeltaTimeToPredict_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceArtificialRadiusExpansion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceArtificialRadiusExpansion = { "AvoidanceArtificialRadiusExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AvoidanceArtificialRadiusExpansion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceArtificialRadiusExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceArtificialRadiusExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement_SetBit(void* Obj)
	{
		((FSBZCharacterMovementSetting*)Obj)->bAvoidanceCanSlowDownMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement = { "bAvoidanceCanSlowDownMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterMovementSetting), &Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinAvoidanceSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinAvoidanceSpeed = { "MinAvoidanceSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MinAvoidanceSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinAvoidanceSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinAvoidanceSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionInnerRadius = { "NeighbourCollisionInnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, NeighbourCollisionInnerRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionOuterRadius = { "NeighbourCollisionOuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, NeighbourCollisionOuterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionHardCollisionFactor = { "NeighbourCollisionHardCollisionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, NeighbourCollisionHardCollisionFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionSoftCollisionFactor = { "NeighbourCollisionSoftCollisionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, NeighbourCollisionSoftCollisionFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionMaxDuration = { "NeighbourCollisionMaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, NeighbourCollisionMaxDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationYaw = { "ControlRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, ControlRotationYaw), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationPitch = { "ControlRotationPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, ControlRotationPitch), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathFocalDistance = { "PathFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, PathFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathViewFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathViewFocalDistance = { "PathViewFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, PathViewFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathViewFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathViewFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AnimationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, AnimationData), Z_Construct_UClass_USBZCharacterAnimationDataTP_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AnimationData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds_Inner = { "MaxWalkSpeeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSetting" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds = { "MaxWalkSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterMovementSetting, MaxWalkSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_Stances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BaseEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeedCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxTargetingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxAccelerationRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_BrakingDecelerationWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_FrictionSpeedBasedSpeedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bSlowDownOnCurvedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinRunSpeedOnCurvedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathAngleForMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceConsiderationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDefaultTimeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceLockTimeAfterClean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceDeltaTimeToPredict,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AvoidanceArtificialRadiusExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_bAvoidanceCanSlowDownMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MinAvoidanceSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionInnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionOuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionHardCollisionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionSoftCollisionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_NeighbourCollisionMaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_ControlRotationPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_PathViewFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::NewProp_MaxWalkSpeeds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterMovementSetting",
		sizeof(FSBZCharacterMovementSetting),
		alignof(FSBZCharacterMovementSetting),
		Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterMovementSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterMovementSetting"), sizeof(FSBZCharacterMovementSetting), Get_Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterMovementSetting_Hash() { return 121389176U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
