// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsStatCycleItemGetCycleItemsPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsStatCycleItemGetCycleItemsPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetItemListPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsStatCycleItemGetCycleItemsPayload>() == std::is_polymorphic<FAccelByteModelsStatCycleItemGetItemListPayload>(), "USTRUCT FAccelByteModelsStatCycleItemGetCycleItemsPayload cannot be polymorphic unless super FAccelByteModelsStatCycleItemGetItemListPayload is polymorphic");

class UScriptStruct* FAccelByteModelsStatCycleItemGetCycleItemsPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsStatCycleItemGetCycleItemsPayload"), sizeof(FAccelByteModelsStatCycleItemGetCycleItemsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsStatCycleItemGetCycleItemsPayload>()
{
	return FAccelByteModelsStatCycleItemGetCycleItemsPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload(FAccelByteModelsStatCycleItemGetCycleItemsPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsStatCycleItemGetCycleItemsPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetCycleItemsPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetCycleItemsPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsStatCycleItemGetCycleItemsPayload>(FName(TEXT("AccelByteModelsStatCycleItemGetCycleItemsPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetCycleItemsPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleItemGetCycleItemsPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsStatCycleItemGetCycleItemsPayload>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStatCycleItemGetCycleItemsPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleItemGetCycleItemsPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStatCycleItemGetCycleItemsPayload, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::NewProp_StatCodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetItemListPayload,
		&NewStructOps,
		"AccelByteModelsStatCycleItemGetCycleItemsPayload",
		sizeof(FAccelByteModelsStatCycleItemGetCycleItemsPayload),
		alignof(FAccelByteModelsStatCycleItemGetCycleItemsPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsStatCycleItemGetCycleItemsPayload"), sizeof(FAccelByteModelsStatCycleItemGetCycleItemsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetCycleItemsPayload_Hash() { return 1532406754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
