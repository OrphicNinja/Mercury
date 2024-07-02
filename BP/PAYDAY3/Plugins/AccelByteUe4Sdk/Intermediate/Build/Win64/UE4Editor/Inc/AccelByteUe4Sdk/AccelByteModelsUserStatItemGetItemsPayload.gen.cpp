// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserStatItemGetItemsPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserStatItemGetItemsPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemCreatedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsUserStatItemGetItemsPayload>() == std::is_polymorphic<FAccelByteModelsUserStatItemCreatedPayload>(), "USTRUCT FAccelByteModelsUserStatItemGetItemsPayload cannot be polymorphic unless super FAccelByteModelsUserStatItemCreatedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsUserStatItemGetItemsPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserStatItemGetItemsPayload"), sizeof(FAccelByteModelsUserStatItemGetItemsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserStatItemGetItemsPayload>()
{
	return FAccelByteModelsUserStatItemGetItemsPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload(FAccelByteModelsUserStatItemGetItemsPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserStatItemGetItemsPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserStatItemGetItemsPayload>(FName(TEXT("AccelByteModelsUserStatItemGetItemsPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatItemGetItemsPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserStatItemGetItemsPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemCreatedPayload,
		&NewStructOps,
		"AccelByteModelsUserStatItemGetItemsPayload",
		sizeof(FAccelByteModelsUserStatItemGetItemsPayload),
		alignof(FAccelByteModelsUserStatItemGetItemsPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserStatItemGetItemsPayload"), sizeof(FAccelByteModelsUserStatItemGetItemsPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsPayload_Hash() { return 489264385U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
