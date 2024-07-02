// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionAnimationTags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionAnimationTags() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZLifeActionAnimationTags::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionAnimationTags"), sizeof(FSBZLifeActionAnimationTags), Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionAnimationTags>()
{
	return FSBZLifeActionAnimationTags::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionAnimationTags(FSBZLifeActionAnimationTags::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionAnimationTags"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTags
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTags()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionAnimationTags>(FName(TEXT("SBZLifeActionAnimationTags")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTags;
	struct Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterAnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterAnimationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitAnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitAnimationTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTags.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionAnimationTags>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_EnterAnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAnimationTags" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_EnterAnimationTag = { "EnterAnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAnimationTags, EnterAnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_EnterAnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_EnterAnimationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_AnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAnimationTags" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAnimationTags, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_AnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_AnimationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_ExitAnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAnimationTags" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTags.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_ExitAnimationTag = { "ExitAnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAnimationTags, ExitAnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_ExitAnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_ExitAnimationTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_EnterAnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_AnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::NewProp_ExitAnimationTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionAnimationTags",
		sizeof(FSBZLifeActionAnimationTags),
		alignof(FSBZLifeActionAnimationTags),
		Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionAnimationTags"), sizeof(FSBZLifeActionAnimationTags), Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags_Hash() { return 1690520986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
