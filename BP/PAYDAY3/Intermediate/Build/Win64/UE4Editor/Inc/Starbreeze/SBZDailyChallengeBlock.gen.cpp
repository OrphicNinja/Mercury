// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDailyChallengeBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDailyChallengeBlock() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallengeBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallenge();
// End Cross Module References
class UScriptStruct* FSBZDailyChallengeBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDailyChallengeBlock"), sizeof(FSBZDailyChallengeBlock), Get_Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDailyChallengeBlock>()
{
	return FSBZDailyChallengeBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDailyChallengeBlock(FSBZDailyChallengeBlock::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDailyChallengeBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallengeBlock
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallengeBlock()
	{
		UScriptStruct::DeferCppStructOps<FSBZDailyChallengeBlock>(FName(TEXT("SBZDailyChallengeBlock")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDailyChallengeBlock;
	struct Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDailyChallengeBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDailyChallengeBlock>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray_Inner = { "ChallengeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDailyChallenge, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDailyChallengeBlock" },
		{ "ModuleRelativePath", "Public/SBZDailyChallengeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray = { "ChallengeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDailyChallengeBlock, ChallengeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::NewProp_ChallengeArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDailyChallengeBlock",
		sizeof(FSBZDailyChallengeBlock),
		alignof(FSBZDailyChallengeBlock),
		Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallengeBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDailyChallengeBlock"), sizeof(FSBZDailyChallengeBlock), Get_Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDailyChallengeBlock_Hash() { return 332117081U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
