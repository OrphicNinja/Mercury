// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_ProceduralFootPlacement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_ProceduralFootPlacement() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneLocker();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_ProceduralFootPlacement>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_ProceduralFootPlacement cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_ProceduralFootPlacement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_ProceduralFootPlacement"), sizeof(FSBZAnimNode_ProceduralFootPlacement), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_ProceduralFootPlacement>()
{
	return FSBZAnimNode_ProceduralFootPlacement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement(FSBZAnimNode_ProceduralFootPlacement::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_ProceduralFootPlacement"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ProceduralFootPlacement
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ProceduralFootPlacement()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_ProceduralFootPlacement>(FName(TEXT("SBZAnimNode_ProceduralFootPlacement")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ProceduralFootPlacement;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewRendered_MetaData[];
#endif
		static void NewProp_bNewRendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftIKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftIKFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootToeBaseBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootToeBaseBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightIKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightIKFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootToeBaseBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootToeBaseBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAdjustmentAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineAdjustmentAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFloorPitchForSpine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFloorPitchForSpine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFloorRollForSpine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFloorRollForSpine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootLocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootLocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootLocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootLocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootPlacementBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootPlacementBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootPlacementBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootPlacementBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootRotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFootZOffsetInterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFootZOffsetInterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactZInterSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactZInterSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootZOffsetInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootZOffsetInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootMaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootMaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootMaxRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootMaxRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootZUpOffsetToFixAnkleInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootZUpOffsetToFixAnkleInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnkleAdjustmentAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnkleAdjustmentAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFootLiftZDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFootLiftZDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnklePitchAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnklePitchAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisZOffsetInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisZOffsetInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisMinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisMinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisHigherHeightInterpSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisHigherHeightInterpSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZDistToPelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinZDistToPelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootReconciliationSpeedInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootReconciliationSpeedInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_ProceduralFootPlacement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered_SetBit(void* Obj)
	{
		((FSBZAnimNode_ProceduralFootPlacement*)Obj)->bNewRendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered = { "bNewRendered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_ProceduralFootPlacement), &Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftIKFootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftIKFootBone = { "LeftIKFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, LeftIKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftIKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftIKFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootBone = { "LeftFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, LeftFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootToeBaseBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootToeBaseBone = { "LeftFootToeBaseBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, LeftFootToeBaseBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootToeBaseBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootToeBaseBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightIKFootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightIKFootBone = { "RightIKFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RightIKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightIKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightIKFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootBone = { "RightFootBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RightFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootToeBaseBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootToeBaseBone = { "RightFootToeBaseBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RightFootToeBaseBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootToeBaseBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootToeBaseBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineAdjustmentAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineAdjustmentAlpha = { "SpineAdjustmentAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, SpineAdjustmentAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineAdjustmentAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineAdjustmentAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineBone = { "SpineBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, SpineBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorPitchForSpine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorPitchForSpine = { "MaxFloorPitchForSpine", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, MaxFloorPitchForSpine), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorPitchForSpine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorPitchForSpine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorRollForSpine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorRollForSpine = { "MaxFloorRollForSpine", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, MaxFloorRollForSpine), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorRollForSpine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorRollForSpine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootLocker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootLocker = { "LeftFootLocker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, LeftFootLocker), Z_Construct_UScriptStruct_FSBZBoneLocker, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootLocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootLocker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootLocker = { "RightFootLocker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RightFootLocker), Z_Construct_UScriptStruct_FSBZBoneLocker, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootLocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootPlacementBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootPlacementBone = { "LeftFootPlacementBone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, LeftFootPlacementBone), Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootPlacementBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootPlacementBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootPlacementBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootPlacementBone = { "RightFootPlacementBone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RightFootPlacementBone), Z_Construct_UScriptStruct_FSBZFootPlacementBoneInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootPlacementBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootPlacementBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootRotationInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootRotationInterpSpeed = { "FootRotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, FootRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_DeltaYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_DeltaYaw = { "DeltaYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, DeltaYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_DeltaYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_DeltaYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinFootZOffsetInterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinFootZOffsetInterSpeed = { "MinFootZOffsetInterSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, MinFootZOffsetInterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinFootZOffsetInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinFootZOffsetInterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_ImpactZInterSpeedFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_ImpactZInterSpeedFactor = { "ImpactZInterSpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, ImpactZInterSpeedFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_ImpactZInterSpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_ImpactZInterSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZOffsetInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZOffsetInterval = { "FootZOffsetInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, FootZOffsetInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZOffsetInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZOffsetInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxPitch = { "FootMaxPitch", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, FootMaxPitch), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxRoll = { "FootMaxRoll", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, FootMaxRoll), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZUpOffsetToFixAnkleInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZUpOffsetToFixAnkleInterval = { "FootZUpOffsetToFixAnkleInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, FootZUpOffsetToFixAnkleInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZUpOffsetToFixAnkleInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZUpOffsetToFixAnkleInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnkleAdjustmentAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnkleAdjustmentAlpha = { "AnkleAdjustmentAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, AnkleAdjustmentAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnkleAdjustmentAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnkleAdjustmentAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFootLiftZDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFootLiftZDist = { "MaxFootLiftZDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, MaxFootLiftZDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFootLiftZDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFootLiftZDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnklePitchAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnklePitchAxis = { "AnklePitchAxis", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, AnklePitchAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnklePitchAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnklePitchAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisZOffsetInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisZOffsetInterval = { "PelvisZOffsetInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, PelvisZOffsetInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisZOffsetInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisZOffsetInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisMinHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisMinHeight = { "PelvisMinHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, PelvisMinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisMinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisMinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisInterpSpeed = { "PelvisInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, PelvisInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisHigherHeightInterpSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisHigherHeightInterpSpeedModifier = { "PelvisHigherHeightInterpSpeedModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, PelvisHigherHeightInterpSpeedModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisHigherHeightInterpSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisHigherHeightInterpSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinZDistToPelvis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinZDistToPelvis = { "MinZDistToPelvis", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, MinZDistToPelvis), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinZDistToPelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinZDistToPelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_CharacterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_CharacterSpeed = { "CharacterSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, CharacterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_CharacterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_CharacterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootReconciliationSpeedInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootReconciliationSpeedInterval = { "RootReconciliationSpeedInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RootReconciliationSpeedInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootReconciliationSpeedInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootReconciliationSpeedInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ProceduralFootPlacement" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ProceduralFootPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootSpeedMultiplier = { "RootSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ProceduralFootPlacement, RootSpeedMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_bNewRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftIKFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootToeBaseBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightIKFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootToeBaseBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineAdjustmentAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_SpineBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorPitchForSpine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFloorRollForSpine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootLocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootLocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_LeftFootPlacementBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RightFootPlacementBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootRotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_DeltaYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinFootZOffsetInterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_ImpactZInterSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZOffsetInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootMaxRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_FootZUpOffsetToFixAnkleInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnkleAdjustmentAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MaxFootLiftZDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_AnklePitchAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisZOffsetInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisMinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_PelvisHigherHeightInterpSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_MinZDistToPelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_CharacterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootReconciliationSpeedInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::NewProp_RootSpeedMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_ProceduralFootPlacement",
		sizeof(FSBZAnimNode_ProceduralFootPlacement),
		alignof(FSBZAnimNode_ProceduralFootPlacement),
		Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_ProceduralFootPlacement"), sizeof(FSBZAnimNode_ProceduralFootPlacement), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ProceduralFootPlacement_Hash() { return 3827338848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
