// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsFriendRequestRejectedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsFriendRequestRejectedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestSentPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsFriendRequestRejectedPayload>() == std::is_polymorphic<FAccelByteModelsFriendRequestSentPayload>(), "USTRUCT FAccelByteModelsFriendRequestRejectedPayload cannot be polymorphic unless super FAccelByteModelsFriendRequestSentPayload is polymorphic");

class UScriptStruct* FAccelByteModelsFriendRequestRejectedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsFriendRequestRejectedPayload"), sizeof(FAccelByteModelsFriendRequestRejectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsFriendRequestRejectedPayload>()
{
	return FAccelByteModelsFriendRequestRejectedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload(FAccelByteModelsFriendRequestRejectedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsFriendRequestRejectedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestRejectedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestRejectedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsFriendRequestRejectedPayload>(FName(TEXT("AccelByteModelsFriendRequestRejectedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsFriendRequestRejectedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsFriendRequestRejectedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsFriendRequestRejectedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestSentPayload,
		&NewStructOps,
		"AccelByteModelsFriendRequestRejectedPayload",
		sizeof(FAccelByteModelsFriendRequestRejectedPayload),
		alignof(FAccelByteModelsFriendRequestRejectedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsFriendRequestRejectedPayload"), sizeof(FAccelByteModelsFriendRequestRejectedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsFriendRequestRejectedPayload_Hash() { return 3767666976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
