// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformValidateDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlatformValidateDetails() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPlatformValidateDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlatformValidateDetails"), sizeof(FAccelByteModelsPlatformValidateDetails), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlatformValidateDetails>()
{
	return FAccelByteModelsPlatformValidateDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlatformValidateDetails(FAccelByteModelsPlatformValidateDetails::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlatformValidateDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateDetails
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateDetails()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlatformValidateDetails>(FName(TEXT("AccelByteModelsPlatformValidateDetails")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateDetails;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredicateValidateResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredicateValidateResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredicateValidateResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlatformValidateDetails>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults_Inner = { "PredicateValidateResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsPlatformPredicateValidateResults, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformValidateDetails" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults = { "PredicateValidateResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformValidateDetails, PredicateValidateResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::NewProp_PredicateValidateResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPlatformValidateDetails",
		sizeof(FAccelByteModelsPlatformValidateDetails),
		alignof(FAccelByteModelsPlatformValidateDetails),
		Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlatformValidateDetails"), sizeof(FAccelByteModelsPlatformValidateDetails), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails_Hash() { return 3813715838U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
