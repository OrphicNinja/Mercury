// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGameRecordGetRecordsByKeysPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGameRecordGetRecordsByKeysPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayerRecordGetRecordsPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGameRecordGetRecordsByKeysPayload>() == std::is_polymorphic<FAccelByteModelsPlayerRecordGetRecordsPayload>(), "USTRUCT FAccelByteModelsGameRecordGetRecordsByKeysPayload cannot be polymorphic unless super FAccelByteModelsPlayerRecordGetRecordsPayload is polymorphic");

class UScriptStruct* FAccelByteModelsGameRecordGetRecordsByKeysPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGameRecordGetRecordsByKeysPayload"), sizeof(FAccelByteModelsGameRecordGetRecordsByKeysPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGameRecordGetRecordsByKeysPayload>()
{
	return FAccelByteModelsGameRecordGetRecordsByKeysPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload(FAccelByteModelsGameRecordGetRecordsByKeysPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGameRecordGetRecordsByKeysPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGameRecordGetRecordsByKeysPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGameRecordGetRecordsByKeysPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGameRecordGetRecordsByKeysPayload>(FName(TEXT("AccelByteModelsGameRecordGetRecordsByKeysPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGameRecordGetRecordsByKeysPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGameRecordGetRecordsByKeysPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGameRecordGetRecordsByKeysPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPlayerRecordGetRecordsPayload,
		&NewStructOps,
		"AccelByteModelsGameRecordGetRecordsByKeysPayload",
		sizeof(FAccelByteModelsGameRecordGetRecordsByKeysPayload),
		alignof(FAccelByteModelsGameRecordGetRecordsByKeysPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGameRecordGetRecordsByKeysPayload"), sizeof(FAccelByteModelsGameRecordGetRecordsByKeysPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGameRecordGetRecordsByKeysPayload_Hash() { return 2252432070U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
