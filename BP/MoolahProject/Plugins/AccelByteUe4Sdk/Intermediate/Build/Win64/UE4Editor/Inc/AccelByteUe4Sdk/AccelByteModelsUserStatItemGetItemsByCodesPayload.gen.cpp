// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserStatItemGetItemsByCodesPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserStatItemGetItemsByCodesPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemCreatedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsUserStatItemGetItemsByCodesPayload>() == std::is_polymorphic<FAccelByteModelsUserStatItemCreatedPayload>(), "USTRUCT FAccelByteModelsUserStatItemGetItemsByCodesPayload cannot be polymorphic unless super FAccelByteModelsUserStatItemCreatedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsUserStatItemGetItemsByCodesPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserStatItemGetItemsByCodesPayload"), sizeof(FAccelByteModelsUserStatItemGetItemsByCodesPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserStatItemGetItemsByCodesPayload>()
{
	return FAccelByteModelsUserStatItemGetItemsByCodesPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload(FAccelByteModelsUserStatItemGetItemsByCodesPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserStatItemGetItemsByCodesPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsByCodesPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsByCodesPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserStatItemGetItemsByCodesPayload>(FName(TEXT("AccelByteModelsUserStatItemGetItemsByCodesPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserStatItemGetItemsByCodesPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserStatItemGetItemsByCodesPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserStatItemGetItemsByCodesPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemCreatedPayload,
		&NewStructOps,
		"AccelByteModelsUserStatItemGetItemsByCodesPayload",
		sizeof(FAccelByteModelsUserStatItemGetItemsByCodesPayload),
		alignof(FAccelByteModelsUserStatItemGetItemsByCodesPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserStatItemGetItemsByCodesPayload"), sizeof(FAccelByteModelsUserStatItemGetItemsByCodesPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserStatItemGetItemsByCodesPayload_Hash() { return 651941459U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
