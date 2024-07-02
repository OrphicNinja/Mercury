// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsStatCycleItemGetConfigByCycleIdPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsStatCycleItemGetConfigByCycleIdPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetItemListPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload>() == std::is_polymorphic<FAccelByteModelsStatCycleItemGetItemListPayload>(), "USTRUCT FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload cannot be polymorphic unless super FAccelByteModelsStatCycleItemGetItemListPayload is polymorphic");

class UScriptStruct* FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsStatCycleItemGetConfigByCycleIdPayload"), sizeof(FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload>()
{
	return FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload(FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsStatCycleItemGetConfigByCycleIdPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetConfigByCycleIdPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetConfigByCycleIdPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload>(FName(TEXT("AccelByteModelsStatCycleItemGetConfigByCycleIdPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStatCycleItemGetConfigByCycleIdPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStatCycleItemGetConfigByCycleIdPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetItemListPayload,
		&NewStructOps,
		"AccelByteModelsStatCycleItemGetConfigByCycleIdPayload",
		sizeof(FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload),
		alignof(FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsStatCycleItemGetConfigByCycleIdPayload"), sizeof(FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStatCycleItemGetConfigByCycleIdPayload_Hash() { return 1543078571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
