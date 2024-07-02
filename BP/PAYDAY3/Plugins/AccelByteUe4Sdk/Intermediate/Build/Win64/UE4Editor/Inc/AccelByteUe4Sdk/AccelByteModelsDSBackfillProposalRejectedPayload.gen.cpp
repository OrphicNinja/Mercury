// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDSBackfillProposalRejectedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDSBackfillProposalRejectedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsDSBackfillProposalRejectedPayload>() == std::is_polymorphic<FAccelByteModelsDSBackfillProposalReceivedPayload>(), "USTRUCT FAccelByteModelsDSBackfillProposalRejectedPayload cannot be polymorphic unless super FAccelByteModelsDSBackfillProposalReceivedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsDSBackfillProposalRejectedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDSBackfillProposalRejectedPayload"), sizeof(FAccelByteModelsDSBackfillProposalRejectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDSBackfillProposalRejectedPayload>()
{
	return FAccelByteModelsDSBackfillProposalRejectedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload(FAccelByteModelsDSBackfillProposalRejectedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDSBackfillProposalRejectedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalRejectedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalRejectedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDSBackfillProposalRejectedPayload>(FName(TEXT("AccelByteModelsDSBackfillProposalRejectedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalRejectedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalRejectedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDSBackfillProposalRejectedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload,
		&NewStructOps,
		"AccelByteModelsDSBackfillProposalRejectedPayload",
		sizeof(FAccelByteModelsDSBackfillProposalRejectedPayload),
		alignof(FAccelByteModelsDSBackfillProposalRejectedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDSBackfillProposalRejectedPayload"), sizeof(FAccelByteModelsDSBackfillProposalRejectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalRejectedPayload_Hash() { return 231653257U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
