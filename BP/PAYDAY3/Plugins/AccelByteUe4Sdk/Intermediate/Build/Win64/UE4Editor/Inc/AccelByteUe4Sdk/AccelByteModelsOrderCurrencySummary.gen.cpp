// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsOrderCurrencySummary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsOrderCurrencySummary() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType();
// End Cross Module References
class UScriptStruct* FAccelByteModelsOrderCurrencySummary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsOrderCurrencySummary"), sizeof(FAccelByteModelsOrderCurrencySummary), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsOrderCurrencySummary>()
{
	return FAccelByteModelsOrderCurrencySummary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsOrderCurrencySummary(FAccelByteModelsOrderCurrencySummary::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsOrderCurrencySummary"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderCurrencySummary
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderCurrencySummary()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsOrderCurrencySummary>(FName(TEXT("AccelByteModelsOrderCurrencySummary")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderCurrencySummary;
	struct Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySymbol;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decimals_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Decimals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsOrderCurrencySummary>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderCurrencySummary" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderCurrencySummary, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencySymbol_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderCurrencySummary" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderCurrencySummary, CurrencySymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencySymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencySymbol_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderCurrencySummary" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderCurrencySummary, CurrencyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderCurrencySummary" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderCurrencySummary, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Decimals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderCurrencySummary" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderCurrencySummary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Decimals = { "Decimals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderCurrencySummary, Decimals), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Decimals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Decimals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencySymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::NewProp_Decimals,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsOrderCurrencySummary",
		sizeof(FAccelByteModelsOrderCurrencySummary),
		alignof(FAccelByteModelsOrderCurrencySummary),
		Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsOrderCurrencySummary"), sizeof(FAccelByteModelsOrderCurrencySummary), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderCurrencySummary_Hash() { return 3144846014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
