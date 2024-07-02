// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserRankingDataV3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserRankingDataV3() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserRankingV3();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCycleRank();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUserRankingDataV3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserRankingDataV3"), sizeof(FAccelByteModelsUserRankingDataV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserRankingDataV3>()
{
	return FAccelByteModelsUserRankingDataV3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserRankingDataV3(FAccelByteModelsUserRankingDataV3::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserRankingDataV3"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserRankingDataV3
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserRankingDataV3()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserRankingDataV3>(FName(TEXT("AccelByteModelsUserRankingDataV3")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserRankingDataV3;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cycles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cycles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cycles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserRankingDataV3.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserRankingDataV3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_AllTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserRankingDataV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserRankingDataV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_AllTime = { "AllTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserRankingDataV3, AllTime), Z_Construct_UScriptStruct_FAccelByteModelsUserRankingV3, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_AllTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_AllTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles_Inner = { "Cycles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsCycleRank, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserRankingDataV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserRankingDataV3.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles = { "Cycles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserRankingDataV3, Cycles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_AllTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::NewProp_Cycles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUserRankingDataV3",
		sizeof(FAccelByteModelsUserRankingDataV3),
		alignof(FAccelByteModelsUserRankingDataV3),
		Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserRankingDataV3"), sizeof(FAccelByteModelsUserRankingDataV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3_Hash() { return 1243352357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
