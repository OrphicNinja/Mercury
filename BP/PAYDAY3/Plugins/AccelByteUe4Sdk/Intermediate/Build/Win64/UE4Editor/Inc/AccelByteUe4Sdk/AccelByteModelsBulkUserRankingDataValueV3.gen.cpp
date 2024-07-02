// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsBulkUserRankingDataValueV3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsBulkUserRankingDataValueV3() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsBulkUserRankingDataValueV3>() == std::is_polymorphic<FAccelByteModelsUserRankingDataV3>(), "USTRUCT FAccelByteModelsBulkUserRankingDataValueV3 cannot be polymorphic unless super FAccelByteModelsUserRankingDataV3 is polymorphic");

class UScriptStruct* FAccelByteModelsBulkUserRankingDataValueV3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsBulkUserRankingDataValueV3"), sizeof(FAccelByteModelsBulkUserRankingDataValueV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsBulkUserRankingDataValueV3>()
{
	return FAccelByteModelsBulkUserRankingDataValueV3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3(FAccelByteModelsBulkUserRankingDataValueV3::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsBulkUserRankingDataValueV3"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserRankingDataValueV3
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserRankingDataValueV3()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsBulkUserRankingDataValueV3>(FName(TEXT("AccelByteModelsBulkUserRankingDataValueV3")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsBulkUserRankingDataValueV3;
	struct Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserRankingDataValueV3.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsBulkUserRankingDataValueV3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsBulkUserRankingDataValueV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsBulkUserRankingDataValueV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsBulkUserRankingDataValueV3, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsUserRankingDataV3,
		&NewStructOps,
		"AccelByteModelsBulkUserRankingDataValueV3",
		sizeof(FAccelByteModelsBulkUserRankingDataValueV3),
		alignof(FAccelByteModelsBulkUserRankingDataValueV3),
		Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsBulkUserRankingDataValueV3"), sizeof(FAccelByteModelsBulkUserRankingDataValueV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsBulkUserRankingDataValueV3_Hash() { return 3406150932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
