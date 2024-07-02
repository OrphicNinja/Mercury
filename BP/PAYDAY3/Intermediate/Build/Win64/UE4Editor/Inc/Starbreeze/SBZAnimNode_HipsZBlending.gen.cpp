// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimNode_HipsZBlending.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimNode_HipsZBlending() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAnimNode_HipsZBlending>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSBZAnimNode_HipsZBlending cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FSBZAnimNode_HipsZBlending::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimNode_HipsZBlending"), sizeof(FSBZAnimNode_HipsZBlending), Get_Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimNode_HipsZBlending>()
{
	return FSBZAnimNode_HipsZBlending::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimNode_HipsZBlending(FSBZAnimNode_HipsZBlending::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimNode_HipsZBlending"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_HipsZBlending
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_HipsZBlending()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimNode_HipsZBlending>(FName(TEXT("SBZAnimNode_HipsZBlending")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimNode_HipsZBlending;
	struct Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsBoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsBoneRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStartNewBlending_MetaData[];
#endif
		static void NewProp_bCanStartNewBlending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStartNewBlending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReset_MetaData[];
#endif
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendEaseExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendEaseExp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimNode_HipsZBlending>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_HipsBoneRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_HipsZBlending" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_HipsBoneRef = { "HipsBoneRef", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_HipsZBlending, HipsBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_HipsBoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_HipsBoneRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_HipsZBlending" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending_SetBit(void* Obj)
	{
		((FSBZAnimNode_HipsZBlending*)Obj)->bCanStartNewBlending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending = { "bCanStartNewBlending", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_HipsZBlending), &Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_HipsZBlending" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((FSBZAnimNode_HipsZBlending*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAnimNode_HipsZBlending), &Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_HipsZBlending" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendDuration = { "BlendDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_HipsZBlending, BlendDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendEaseExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimNode_HipsZBlending" },
		{ "ModuleRelativePath", "Public/SBZAnimNode_HipsZBlending.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendEaseExp = { "BlendEaseExp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAnimNode_HipsZBlending, BlendEaseExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendEaseExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendEaseExp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_HipsBoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bCanStartNewBlending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_bReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::NewProp_BlendEaseExp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SBZAnimNode_HipsZBlending",
		sizeof(FSBZAnimNode_HipsZBlending),
		alignof(FSBZAnimNode_HipsZBlending),
		Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimNode_HipsZBlending"), sizeof(FSBZAnimNode_HipsZBlending), Get_Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimNode_HipsZBlending_Hash() { return 3511076469U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
