// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_ApplyBoneOffsetFromPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_ApplyBoneOffsetFromPose() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_ApplyBoneOffsetFromPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FSBZAnimNode_ApplyBoneOffsetFromPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FSBZAnimNode_ApplyBoneOffsetFromPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_ApplyBoneOffsetFromPose"), sizeof(FSBZAnimNode_ApplyBoneOffsetFromPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_ApplyBoneOffsetFromPose>()
{
	return FSBZAnimNode_ApplyBoneOffsetFromPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose(FSBZAnimNode_ApplyBoneOffsetFromPose::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_ApplyBoneOffsetFromPose"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyBoneOffsetFromPose
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyBoneOffsetFromPose()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_ApplyBoneOffsetFromPose>(FName(TEXT("SBZAnimNode_ApplyBoneOffsetFromPose")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_ApplyBoneOffsetFromPose;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyBoneOffsetFromPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_ApplyBoneOffsetFromPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_BasePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyBoneOffsetFromPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyBoneOffsetFromPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyBoneOffsetFromPose, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyBoneOffsetFromPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyBoneOffsetFromPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefPose = { "RefPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyBoneOffsetFromPose, RefPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_Bone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyBoneOffsetFromPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyBoneOffsetFromPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyBoneOffsetFromPose, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_ApplyBoneOffsetFromPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_ApplyBoneOffsetFromPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefBone = { "RefBone", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_ApplyBoneOffsetFromPose, RefBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_BasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::NewProp_RefBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"SBZAnimNode_ApplyBoneOffsetFromPose",
		sizeof(FSBZAnimNode_ApplyBoneOffsetFromPose),
		alignof(FSBZAnimNode_ApplyBoneOffsetFromPose),
		Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_ApplyBoneOffsetFromPose"), sizeof(FSBZAnimNode_ApplyBoneOffsetFromPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_ApplyBoneOffsetFromPose_Hash() { return 3591182028U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
