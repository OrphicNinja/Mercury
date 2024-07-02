// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_SpeedWarping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_SpeedWarping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpeedWarpingFootDefinition();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_SpeedWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_SpeedWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_SpeedWarping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_SpeedWarping"), sizeof(FSBZAnimNode_SpeedWarping), Get_Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_SpeedWarping>()
{
	return FSBZAnimNode_SpeedWarping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_SpeedWarping(FSBZAnimNode_SpeedWarping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_SpeedWarping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_SpeedWarping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_SpeedWarping()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_SpeedWarping>(FName(TEXT("SBZAnimNode_SpeedWarping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_SpeedWarping;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FeetDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FeetDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LegsZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisLegsInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisLegsInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisLegsAdjustmentAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisLegsAdjustmentAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampIKUsingFKLeg_MetaData[];
#endif
		static void NewProp_bClampIKUsingFKLeg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampIKUsingFKLeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_SpeedWarping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_IKFootRootBone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions_Inner = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpeedWarpingFootDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, FeetDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Space_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, Space), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_SpeedScaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_SpeedScaling = { "SpeedScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, SpeedScaling), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_SpeedScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_SpeedScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisZOffset = { "PelvisZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, PelvisZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_LegsZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_LegsZOffset = { "LegsZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, LegsZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_LegsZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_LegsZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsInterpSpeed = { "PelvisLegsInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, PelvisLegsInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsAdjustmentAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsAdjustmentAlpha = { "PelvisLegsAdjustmentAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_SpeedWarping, PelvisLegsAdjustmentAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsAdjustmentAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsAdjustmentAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_SpeedWarping" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_SpeedWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg_SetBit(void* Obj)
	{
		((FSBZAnimNode_SpeedWarping*)Obj)->bClampIKUsingFKLeg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg = { "bClampIKUsingFKLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAnimNode_SpeedWarping), &Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_IKFootRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_FeetDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_SpeedScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_LegsZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_PelvisLegsAdjustmentAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::NewProp_bClampIKUsingFKLeg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_SpeedWarping",
		sizeof(FSBZAnimNode_SpeedWarping),
		alignof(FSBZAnimNode_SpeedWarping),
		Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_SpeedWarping"), sizeof(FSBZAnimNode_SpeedWarping), Get_Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_SpeedWarping_Hash() { return 1484678127U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
