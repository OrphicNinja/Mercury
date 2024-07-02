// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecommendedChallengeBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecommendedChallengeBlock() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRecommendedChallengeBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRecommendedChallengeBlock"), sizeof(FSBZRecommendedChallengeBlock), Get_Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRecommendedChallengeBlock>()
{
	return FSBZRecommendedChallengeBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRecommendedChallengeBlock(FSBZRecommendedChallengeBlock::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRecommendedChallengeBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallengeBlock
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallengeBlock()
	{
		UScriptStruct::DeferCppStructOps<FSBZRecommendedChallengeBlock>(FName(TEXT("SBZRecommendedChallengeBlock")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallengeBlock;
	struct Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRecommendedChallengeBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRecommendedChallengeBlock>();
	}
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray_Inner = { "ChallengeIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecommendedChallengeBlock" },
		{ "ModuleRelativePath", "Public/SBZRecommendedChallengeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray = { "ChallengeIdArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecommendedChallengeBlock, ChallengeIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::NewProp_ChallengeIdArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRecommendedChallengeBlock",
		sizeof(FSBZRecommendedChallengeBlock),
		alignof(FSBZRecommendedChallengeBlock),
		Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRecommendedChallengeBlock"), sizeof(FSBZRecommendedChallengeBlock), Get_Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallengeBlock_Hash() { return 1318277150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
