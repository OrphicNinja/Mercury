// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_TransitionPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_TransitionPose() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_TransitionPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FSBZAnimNode_TransitionPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FSBZAnimNode_TransitionPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_TransitionPose"), sizeof(FSBZAnimNode_TransitionPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_TransitionPose>()
{
	return FSBZAnimNode_TransitionPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_TransitionPose(FSBZAnimNode_TransitionPose::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_TransitionPose"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_TransitionPose
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_TransitionPose()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_TransitionPose>(FName(TEXT("SBZAnimNode_TransitionPose")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_TransitionPose;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateInertialization_MetaData[];
#endif
		static void NewProp_bActivateInertialization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateInertialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_TransitionPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_TransitionPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_TransitionPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_TransitionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_TransitionPose, TransitionDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_TransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_TransitionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_TransitionPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_TransitionPose.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization_SetBit(void* Obj)
	{
		((FSBZAnimNode_TransitionPose*)Obj)->bActivateInertialization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization = { "bActivateInertialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_TransitionPose), &Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_BasePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_TransitionPose" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_TransitionPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_TransitionPose, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_BasePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_TransitionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_bActivateInertialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::NewProp_BasePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"SBZAnimNode_TransitionPose",
		sizeof(FSBZAnimNode_TransitionPose),
		alignof(FSBZAnimNode_TransitionPose),
		Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_TransitionPose"), sizeof(FSBZAnimNode_TransitionPose), Get_Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_TransitionPose_Hash() { return 2601634443U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
