// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_BoneKeepRefPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_BoneKeepRefPose() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneRefArrayParam();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_BoneKeepRefPose>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_BoneKeepRefPose cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_BoneKeepRefPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_BoneKeepRefPose"), sizeof(FSBZAnimNode_BoneKeepRefPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_BoneKeepRefPose>()
{
	return FSBZAnimNode_BoneKeepRefPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose(FSBZAnimNode_BoneKeepRefPose::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_BoneKeepRefPose"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneKeepRefPose
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneKeepRefPose()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_BoneKeepRefPose>(FName(TEXT("SBZAnimNode_BoneKeepRefPose")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_BoneKeepRefPose;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToConstrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToConstrain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BoneKeepRefPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_BoneKeepRefPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewProp_BonesToConstrain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_BoneKeepRefPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_BoneKeepRefPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewProp_BonesToConstrain = { "BonesToConstrain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_BoneKeepRefPose, BonesToConstrain), Z_Construct_UScriptStruct_FSBZBoneRefArrayParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewProp_BonesToConstrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewProp_BonesToConstrain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::NewProp_BonesToConstrain,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_BoneKeepRefPose",
		sizeof(FSBZAnimNode_BoneKeepRefPose),
		alignof(FSBZAnimNode_BoneKeepRefPose),
		Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_BoneKeepRefPose"), sizeof(FSBZAnimNode_BoneKeepRefPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_BoneKeepRefPose_Hash() { return 538664246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
