// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecommendedChallenges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecommendedChallenges() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallenges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
class UScriptStruct* FSBZRecommendedChallenges::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRecommendedChallenges, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRecommendedChallenges"), sizeof(FSBZRecommendedChallenges), Get_Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRecommendedChallenges>()
{
	return FSBZRecommendedChallenges::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRecommendedChallenges(FSBZRecommendedChallenges::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRecommendedChallenges"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallenges
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallenges()
	{
		UScriptStruct::DeferCppStructOps<FSBZRecommendedChallenges>(FName(TEXT("SBZRecommendedChallenges")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRecommendedChallenges;
	struct Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecommendedChallengeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecommendedChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecommendedChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRecommendedChallenges.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRecommendedChallenges>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData_Inner = { "RecommendedChallengeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecommendedChallenges" },
		{ "ModuleRelativePath", "Public/SBZRecommendedChallenges.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData = { "RecommendedChallengeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRecommendedChallenges, RecommendedChallengeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::NewProp_RecommendedChallengeData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRecommendedChallenges",
		sizeof(FSBZRecommendedChallenges),
		alignof(FSBZRecommendedChallenges),
		Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRecommendedChallenges()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRecommendedChallenges"), sizeof(FSBZRecommendedChallenges), Get_Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRecommendedChallenges_Hash() { return 260913575U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
