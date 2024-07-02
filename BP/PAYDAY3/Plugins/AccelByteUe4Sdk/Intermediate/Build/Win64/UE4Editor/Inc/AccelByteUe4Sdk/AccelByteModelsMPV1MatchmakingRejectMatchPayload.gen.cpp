// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV1MatchmakingRejectMatchPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV1MatchmakingRejectMatchPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV1MatchmakingRejectMatchPayload>() == std::is_polymorphic<FAccelByteModelsMPV1MatchmakingReadyConsentPayload>(), "USTRUCT FAccelByteModelsMPV1MatchmakingRejectMatchPayload cannot be polymorphic unless super FAccelByteModelsMPV1MatchmakingReadyConsentPayload is polymorphic");

class UScriptStruct* FAccelByteModelsMPV1MatchmakingRejectMatchPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV1MatchmakingRejectMatchPayload"), sizeof(FAccelByteModelsMPV1MatchmakingRejectMatchPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV1MatchmakingRejectMatchPayload>()
{
	return FAccelByteModelsMPV1MatchmakingRejectMatchPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload(FAccelByteModelsMPV1MatchmakingRejectMatchPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV1MatchmakingRejectMatchPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingRejectMatchPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingRejectMatchPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV1MatchmakingRejectMatchPayload>(FName(TEXT("AccelByteModelsMPV1MatchmakingRejectMatchPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingRejectMatchPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingRejectMatchPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV1MatchmakingRejectMatchPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload,
		&NewStructOps,
		"AccelByteModelsMPV1MatchmakingRejectMatchPayload",
		sizeof(FAccelByteModelsMPV1MatchmakingRejectMatchPayload),
		alignof(FAccelByteModelsMPV1MatchmakingRejectMatchPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV1MatchmakingRejectMatchPayload"), sizeof(FAccelByteModelsMPV1MatchmakingRejectMatchPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingRejectMatchPayload_Hash() { return 730857616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
