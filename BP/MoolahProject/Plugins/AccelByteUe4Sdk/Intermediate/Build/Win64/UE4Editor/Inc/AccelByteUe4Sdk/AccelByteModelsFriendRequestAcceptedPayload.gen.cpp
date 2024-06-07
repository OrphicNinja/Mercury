// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsFriendRequestAcceptedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsFriendRequestAcceptedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestSentPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsFriendRequestAcceptedPayload>() == std::is_polymorphic<FAccelByteModelsFriendRequestSentPayload>(), "USTRUCT FAccelByteModelsFriendRequestAcceptedPayload cannot be polymorphic unless super FAccelByteModelsFriendRequestSentPayload is polymorphic");

class UScriptStruct* FAccelByteModelsFriendRequestAcceptedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsFriendRequestAcceptedPayload"), sizeof(FAccelByteModelsFriendRequestAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsFriendRequestAcceptedPayload>()
{
	return FAccelByteModelsFriendRequestAcceptedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload(FAccelByteModelsFriendRequestAcceptedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsFriendRequestAcceptedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestAcceptedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestAcceptedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsFriendRequestAcceptedPayload>(FName(TEXT("AccelByteModelsFriendRequestAcceptedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestAcceptedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFriendRequestAcceptedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsFriendRequestAcceptedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestSentPayload,
		&NewStructOps,
		"AccelByteModelsFriendRequestAcceptedPayload",
		sizeof(FAccelByteModelsFriendRequestAcceptedPayload),
		alignof(FAccelByteModelsFriendRequestAcceptedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsFriendRequestAcceptedPayload"), sizeof(FAccelByteModelsFriendRequestAcceptedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestAcceptedPayload_Hash() { return 718691223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
