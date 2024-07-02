// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformPredicateValidateResults.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlatformPredicateValidateResults() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPlatformPredicateValidateResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlatformPredicateValidateResults"), sizeof(FAccelByteModelsPlatformPredicateValidateResults), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlatformPredicateValidateResults>()
{
	return FAccelByteModelsPlatformPredicateValidateResults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults(FAccelByteModelsPlatformPredicateValidateResults::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlatformPredicateValidateResults"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformPredicateValidateResults
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformPredicateValidateResults()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlatformPredicateValidateResults>(FName(TEXT("AccelByteModelsPlatformPredicateValidateResults")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformPredicateValidateResults;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PredicateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Validated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Validated;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Matched_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Matched_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Matched;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Unmatched_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unmatched_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Unmatched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformPredicateValidateResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlatformPredicateValidateResults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_PredicateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformPredicateValidateResults" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformPredicateValidateResults.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_PredicateName = { "PredicateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformPredicateValidateResults, PredicateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_PredicateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_PredicateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Validated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformPredicateValidateResults" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformPredicateValidateResults.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Validated = { "Validated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformPredicateValidateResults, Validated), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Validated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Validated_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched_Inner = { "Matched", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformPredicateValidateResults" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformPredicateValidateResults.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched = { "Matched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformPredicateValidateResults, Matched), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched_Inner = { "Unmatched", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformPredicateValidateResults" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformPredicateValidateResults.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched = { "Unmatched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformPredicateValidateResults, Unmatched), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_PredicateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Validated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Matched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::NewProp_Unmatched,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPlatformPredicateValidateResults",
		sizeof(FAccelByteModelsPlatformPredicateValidateResults),
		alignof(FAccelByteModelsPlatformPredicateValidateResults),
		Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlatformPredicateValidateResults"), sizeof(FAccelByteModelsPlatformPredicateValidateResults), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults_Hash() { return 2377460003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
