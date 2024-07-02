// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteSeasonPassExcessStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSeasonPassExcessStrategy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStrategyMethod();
// End Cross Module References
class UScriptStruct* FAccelByteSeasonPassExcessStrategy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteSeasonPassExcessStrategy"), sizeof(FAccelByteSeasonPassExcessStrategy), Get_Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteSeasonPassExcessStrategy>()
{
	return FAccelByteSeasonPassExcessStrategy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteSeasonPassExcessStrategy(FAccelByteSeasonPassExcessStrategy::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteSeasonPassExcessStrategy"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteSeasonPassExcessStrategy
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteSeasonPassExcessStrategy()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteSeasonPassExcessStrategy>(FName(TEXT("AccelByteSeasonPassExcessStrategy")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteSeasonPassExcessStrategy;
	struct Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentPerExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PercentPerExp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSeasonPassExcessStrategy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteSeasonPassExcessStrategy>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSeasonPassExcessStrategy" },
		{ "ModuleRelativePath", "Public/AccelByteSeasonPassExcessStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSeasonPassExcessStrategy, Method), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonPassStrategyMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSeasonPassExcessStrategy" },
		{ "ModuleRelativePath", "Public/AccelByteSeasonPassExcessStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSeasonPassExcessStrategy, Currency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_PercentPerExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSeasonPassExcessStrategy" },
		{ "ModuleRelativePath", "Public/AccelByteSeasonPassExcessStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_PercentPerExp = { "PercentPerExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSeasonPassExcessStrategy, PercentPerExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_PercentPerExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_PercentPerExp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::NewProp_PercentPerExp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteSeasonPassExcessStrategy",
		sizeof(FAccelByteSeasonPassExcessStrategy),
		alignof(FAccelByteSeasonPassExcessStrategy),
		Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteSeasonPassExcessStrategy"), sizeof(FAccelByteSeasonPassExcessStrategy), Get_Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteSeasonPassExcessStrategy_Hash() { return 23735148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
