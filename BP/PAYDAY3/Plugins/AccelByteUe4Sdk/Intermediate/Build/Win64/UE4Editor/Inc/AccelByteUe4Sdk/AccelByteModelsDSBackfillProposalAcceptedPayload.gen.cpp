// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDSBackfillProposalAcceptedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDSBackfillProposalAcceptedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsDSBackfillProposalAcceptedPayload>() == std::is_polymorphic<FAccelByteModelsDSBackfillProposalReceivedPayload>(), "USTRUCT FAccelByteModelsDSBackfillProposalAcceptedPayload cannot be polymorphic unless super FAccelByteModelsDSBackfillProposalReceivedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsDSBackfillProposalAcceptedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDSBackfillProposalAcceptedPayload"), sizeof(FAccelByteModelsDSBackfillProposalAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDSBackfillProposalAcceptedPayload>()
{
	return FAccelByteModelsDSBackfillProposalAcceptedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload(FAccelByteModelsDSBackfillProposalAcceptedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDSBackfillProposalAcceptedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalAcceptedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalAcceptedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDSBackfillProposalAcceptedPayload>(FName(TEXT("AccelByteModelsDSBackfillProposalAcceptedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalAcceptedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalAcceptedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDSBackfillProposalAcceptedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload,
		&NewStructOps,
		"AccelByteModelsDSBackfillProposalAcceptedPayload",
		sizeof(FAccelByteModelsDSBackfillProposalAcceptedPayload),
		alignof(FAccelByteModelsDSBackfillProposalAcceptedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDSBackfillProposalAcceptedPayload"), sizeof(FAccelByteModelsDSBackfillProposalAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalAcceptedPayload_Hash() { return 2247760992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
