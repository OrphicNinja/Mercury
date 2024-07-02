// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2GameSessionCreateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2GameSessionCreateRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionBaseRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsV2GameSessionCreateRequest>() == std::is_polymorphic<FAccelByteModelsV2GameSessionBaseRequest>(), "USTRUCT FAccelByteModelsV2GameSessionCreateRequest cannot be polymorphic unless super FAccelByteModelsV2GameSessionBaseRequest is polymorphic");

class UScriptStruct* FAccelByteModelsV2GameSessionCreateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2GameSessionCreateRequest"), sizeof(FAccelByteModelsV2GameSessionCreateRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2GameSessionCreateRequest>()
{
	return FAccelByteModelsV2GameSessionCreateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest(FAccelByteModelsV2GameSessionCreateRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2GameSessionCreateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionCreateRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionCreateRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2GameSessionCreateRequest>(FName(TEXT("AccelByteModelsV2GameSessionCreateRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2GameSessionCreateRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2GameSessionCreateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2GameSessionCreateRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionBaseRequest,
		&NewStructOps,
		"AccelByteModelsV2GameSessionCreateRequest",
		sizeof(FAccelByteModelsV2GameSessionCreateRequest),
		alignof(FAccelByteModelsV2GameSessionCreateRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2GameSessionCreateRequest"), sizeof(FAccelByteModelsV2GameSessionCreateRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionCreateRequest_Hash() { return 642181931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
