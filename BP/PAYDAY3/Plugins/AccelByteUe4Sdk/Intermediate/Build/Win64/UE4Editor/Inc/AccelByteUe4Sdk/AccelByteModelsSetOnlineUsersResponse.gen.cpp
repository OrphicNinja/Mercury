// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSetOnlineUsersResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSetOnlineUsersResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsSetOnlineUsersResponse>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsSetOnlineUsersResponse cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");

class UScriptStruct* FAccelByteModelsSetOnlineUsersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSetOnlineUsersResponse"), sizeof(FAccelByteModelsSetOnlineUsersResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSetOnlineUsersResponse>()
{
	return FAccelByteModelsSetOnlineUsersResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse(FAccelByteModelsSetOnlineUsersResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSetOnlineUsersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSetOnlineUsersResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSetOnlineUsersResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSetOnlineUsersResponse>(FName(TEXT("AccelByteModelsSetOnlineUsersResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSetOnlineUsersResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSetOnlineUsersResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSetOnlineUsersResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
		&NewStructOps,
		"AccelByteModelsSetOnlineUsersResponse",
		sizeof(FAccelByteModelsSetOnlineUsersResponse),
		alignof(FAccelByteModelsSetOnlineUsersResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSetOnlineUsersResponse"), sizeof(FAccelByteModelsSetOnlineUsersResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSetOnlineUsersResponse_Hash() { return 3534824098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
