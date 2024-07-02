// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionRandomAnimationTagsPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionRandomAnimationTagsPicker() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer();
// End Cross Module References
class UScriptStruct* FSBZLifeActionRandomAnimationTagsPicker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionRandomAnimationTagsPicker"), sizeof(FSBZLifeActionRandomAnimationTagsPicker), Get_Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionRandomAnimationTagsPicker>()
{
	return FSBZLifeActionRandomAnimationTagsPicker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker(FSBZLifeActionRandomAnimationTagsPicker::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionRandomAnimationTagsPicker"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRandomAnimationTagsPicker
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRandomAnimationTagsPicker()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionRandomAnimationTagsPicker>(FName(TEXT("SBZLifeActionRandomAnimationTagsPicker")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionRandomAnimationTagsPicker;
	struct Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTagsRandomizers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTagsRandomizers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTagsRandomizers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRandomAnimationTagsPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionRandomAnimationTagsPicker>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers_Inner = { "AnimationTagsRandomizers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLifeActionAnimationTagsRandomizer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionRandomAnimationTagsPicker" },
		{ "ModuleRelativePath", "Public/SBZLifeActionRandomAnimationTagsPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers = { "AnimationTagsRandomizers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionRandomAnimationTagsPicker, AnimationTagsRandomizers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::NewProp_AnimationTagsRandomizers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionRandomAnimationTagsPicker",
		sizeof(FSBZLifeActionRandomAnimationTagsPicker),
		alignof(FSBZLifeActionRandomAnimationTagsPicker),
		Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionRandomAnimationTagsPicker"), sizeof(FSBZLifeActionRandomAnimationTagsPicker), Get_Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker_Hash() { return 3762457735U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
