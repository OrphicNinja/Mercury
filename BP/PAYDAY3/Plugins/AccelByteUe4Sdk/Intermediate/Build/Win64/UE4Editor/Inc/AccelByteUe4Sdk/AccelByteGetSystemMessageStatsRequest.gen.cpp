// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteGetSystemMessageStatsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetSystemMessageStatsRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteGetSystemMessageStatsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteGetSystemMessageStatsRequest"), sizeof(FAccelByteGetSystemMessageStatsRequest), Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteGetSystemMessageStatsRequest>()
{
	return FAccelByteGetSystemMessageStatsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest(FAccelByteGetSystemMessageStatsRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteGetSystemMessageStatsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteGetSystemMessageStatsRequest>(FName(TEXT("AccelByteGetSystemMessageStatsRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsRequest;
	struct Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetSystemMessageStatsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteGetSystemMessageStatsRequest",
		sizeof(FAccelByteGetSystemMessageStatsRequest),
		alignof(FAccelByteGetSystemMessageStatsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteGetSystemMessageStatsRequest"), sizeof(FAccelByteGetSystemMessageStatsRequest), Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Hash() { return 2283576324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
