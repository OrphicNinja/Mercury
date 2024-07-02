// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_CopyBoneDeltaMultiTargets() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefParam();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefArrayParam();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_CopyBoneDeltaMultiTargets>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_CopyBoneDeltaMultiTargets cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_CopyBoneDeltaMultiTargets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_CopyBoneDeltaMultiTargets"), sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_CopyBoneDeltaMultiTargets>()
{
	return FSBZAnimNode_CopyBoneDeltaMultiTargets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets(FSBZAnimNode_CopyBoneDeltaMultiTargets::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_CopyBoneDeltaMultiTargets"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CopyBoneDeltaMultiTargets
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CopyBoneDeltaMultiTargets()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_CopyBoneDeltaMultiTargets>(FName(TEXT("SBZAnimNode_CopyBoneDeltaMultiTargets")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_CopyBoneDeltaMultiTargets;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[];
#endif
		static void NewProp_bCopyTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[];
#endif
		static void NewProp_bCopyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[];
#endif
		static void NewProp_bCopyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CopyMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CopyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_CopyBoneDeltaMultiTargets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_SourceBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, SourceBone), Z_Construct_UScriptStruct_FSBZBoneRefParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_SourceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TargetBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TargetBones = { "TargetBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, TargetBones), Z_Construct_UScriptStruct_FSBZBoneRefArrayParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TargetBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TargetBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
	{
		((FSBZAnimNode_CopyBoneDeltaMultiTargets*)Obj)->bCopyTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation = { "bCopyTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets), &Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
	{
		((FSBZAnimNode_CopyBoneDeltaMultiTargets*)Obj)->bCopyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation = { "bCopyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets), &Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale_SetBit(void* Obj)
	{
		((FSBZAnimNode_CopyBoneDeltaMultiTargets*)Obj)->bCopyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale = { "bCopyScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets), &Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode = { "CopyMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, CopyMode), Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TranslationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TranslationMultiplier = { "TranslationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, TranslationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TranslationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TranslationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, RotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_RotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_RotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_CopyBoneDeltaMultiTargets" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_CopyBoneDeltaMultiTargets.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_CopyBoneDeltaMultiTargets, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_ScaleMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_SourceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TargetBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_bCopyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_CopyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_TranslationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_RotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::NewProp_ScaleMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_CopyBoneDeltaMultiTargets",
		sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets),
		alignof(FSBZAnimNode_CopyBoneDeltaMultiTargets),
		Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_CopyBoneDeltaMultiTargets"), sizeof(FSBZAnimNode_CopyBoneDeltaMultiTargets), Get_Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_CopyBoneDeltaMultiTargets_Hash() { return 1253199728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
