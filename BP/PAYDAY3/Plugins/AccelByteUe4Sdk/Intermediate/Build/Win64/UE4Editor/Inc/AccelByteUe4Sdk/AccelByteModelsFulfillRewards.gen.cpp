// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsFulfillRewards.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsFulfillRewards() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformReward();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsFulfillRewards::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsFulfillRewards"), sizeof(FAccelByteModelsFulfillRewards), Get_Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsFulfillRewards>()
{
	return FAccelByteModelsFulfillRewards::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsFulfillRewards(FAccelByteModelsFulfillRewards::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsFulfillRewards"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFulfillRewards
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFulfillRewards()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsFulfillRewards>(FName(TEXT("AccelByteModelsFulfillRewards")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFulfillRewards;
	struct Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFulfillRewards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsFulfillRewards>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsPlatformReward, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsFulfillRewards" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFulfillRewards.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsFulfillRewards, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsFulfillRewards" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFulfillRewards.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsFulfillRewards, Source), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsFulfillRewards" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFulfillRewards.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsFulfillRewards, Origin), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardOrigin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Metadata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsFulfillRewards" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFulfillRewards.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsFulfillRewards, Metadata), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Metadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::NewProp_Metadata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsFulfillRewards",
		sizeof(FAccelByteModelsFulfillRewards),
		alignof(FAccelByteModelsFulfillRewards),
		Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsFulfillRewards"), sizeof(FAccelByteModelsFulfillRewards), Get_Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFulfillRewards_Hash() { return 1197989691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
