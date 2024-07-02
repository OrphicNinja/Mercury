// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionAnimationTagsRandomizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionAnimationTagsRandomizer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags();
// End Cross Module References
class UScriptStruct* FSBZLifeActionAnimationTagsRandomizer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionAnimationTagsRandomizer"), sizeof(FSBZLifeActionAnimationTagsRandomizer), Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionAnimationTagsRandomizer>()
{
	return FSBZLifeActionAnimationTagsRandomizer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer(FSBZLifeActionAnimationTagsRandomizer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionAnimationTagsRandomizer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTagsRandomizer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTagsRandomizer()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionAnimationTagsRandomizer>(FName(TEXT("SBZLifeActionAnimationTagsRandomizer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAnimationTagsRandomizer;
	struct Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTagsRandomizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionAnimationTagsRandomizer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_Chance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAnimationTagsRandomizer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTagsRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAnimationTagsRandomizer, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_Chance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags_Inner = { "AnimationTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLifeActionAnimationTags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAnimationTagsRandomizer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAnimationTagsRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags = { "AnimationTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAnimationTagsRandomizer, AnimationTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::NewProp_AnimationTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionAnimationTagsRandomizer",
		sizeof(FSBZLifeActionAnimationTagsRandomizer),
		alignof(FSBZLifeActionAnimationTagsRandomizer),
		Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionAnimationTagsRandomizer"), sizeof(FSBZLifeActionAnimationTagsRandomizer), Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer_Hash() { return 3773838546U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
