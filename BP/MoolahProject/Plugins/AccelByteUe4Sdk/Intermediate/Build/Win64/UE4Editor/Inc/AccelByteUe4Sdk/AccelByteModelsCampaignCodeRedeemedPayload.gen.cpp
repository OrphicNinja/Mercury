// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsCampaignCodeRedeemedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsCampaignCodeRedeemedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsCampaignCodeRedeemedPayload>() == std::is_polymorphic<FAccelByteModelsItemFulfilledPayload>(), "USTRUCT FAccelByteModelsCampaignCodeRedeemedPayload cannot be polymorphic unless super FAccelByteModelsItemFulfilledPayload is polymorphic");

class UScriptStruct* FAccelByteModelsCampaignCodeRedeemedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsCampaignCodeRedeemedPayload"), sizeof(FAccelByteModelsCampaignCodeRedeemedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsCampaignCodeRedeemedPayload>()
{
	return FAccelByteModelsCampaignCodeRedeemedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload(FAccelByteModelsCampaignCodeRedeemedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsCampaignCodeRedeemedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCampaignCodeRedeemedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCampaignCodeRedeemedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsCampaignCodeRedeemedPayload>(FName(TEXT("AccelByteModelsCampaignCodeRedeemedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsCampaignCodeRedeemedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCampaignCodeRedeemedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsCampaignCodeRedeemedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsCampaignCodeRedeemedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsCampaignCodeRedeemedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsCampaignCodeRedeemedPayload, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::NewProp_Code,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload,
		&NewStructOps,
		"AccelByteModelsCampaignCodeRedeemedPayload",
		sizeof(FAccelByteModelsCampaignCodeRedeemedPayload),
		alignof(FAccelByteModelsCampaignCodeRedeemedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsCampaignCodeRedeemedPayload"), sizeof(FAccelByteModelsCampaignCodeRedeemedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsCampaignCodeRedeemedPayload_Hash() { return 2056800752U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
