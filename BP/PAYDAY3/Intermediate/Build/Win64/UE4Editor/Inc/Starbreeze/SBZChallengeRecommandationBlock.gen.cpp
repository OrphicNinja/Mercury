// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeRecommandationBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeRecommandationBlock() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot();
// End Cross Module References
class UScriptStruct* FSBZChallengeRecommandationBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeRecommandationBlock"), sizeof(FSBZChallengeRecommandationBlock), Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeRecommandationBlock>()
{
	return FSBZChallengeRecommandationBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeRecommandationBlock(FSBZChallengeRecommandationBlock::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeRecommandationBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationBlock
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationBlock()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeRecommandationBlock>(FName(TEXT("SBZChallengeRecommandationBlock")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRecommandationBlock;
	struct Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeRecommandationBlock>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_ScreenName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationBlock" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_ScreenName = { "ScreenName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRecommandationBlock, ScreenName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_ScreenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_ScreenName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray_Inner = { "SlotArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeRecommandationSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRecommandationBlock" },
		{ "ModuleRelativePath", "Public/SBZChallengeRecommandationBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray = { "SlotArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRecommandationBlock, SlotArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_ScreenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::NewProp_SlotArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeRecommandationBlock",
		sizeof(FSBZChallengeRecommandationBlock),
		alignof(FSBZChallengeRecommandationBlock),
		Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeRecommandationBlock"), sizeof(FSBZChallengeRecommandationBlock), Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRecommandationBlock_Hash() { return 2408522331U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
