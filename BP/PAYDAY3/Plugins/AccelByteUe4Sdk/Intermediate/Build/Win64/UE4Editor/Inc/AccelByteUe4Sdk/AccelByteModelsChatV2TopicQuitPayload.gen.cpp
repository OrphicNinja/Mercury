// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChatV2TopicQuitPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChatV2TopicQuitPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicJoinedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsChatV2TopicQuitPayload>() == std::is_polymorphic<FAccelByteModelsChatV2TopicJoinedPayload>(), "USTRUCT FAccelByteModelsChatV2TopicQuitPayload cannot be polymorphic unless super FAccelByteModelsChatV2TopicJoinedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsChatV2TopicQuitPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChatV2TopicQuitPayload"), sizeof(FAccelByteModelsChatV2TopicQuitPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChatV2TopicQuitPayload>()
{
	return FAccelByteModelsChatV2TopicQuitPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload(FAccelByteModelsChatV2TopicQuitPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChatV2TopicQuitPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2TopicQuitPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2TopicQuitPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChatV2TopicQuitPayload>(FName(TEXT("AccelByteModelsChatV2TopicQuitPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatV2TopicQuitPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatV2TopicQuitPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChatV2TopicQuitPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicJoinedPayload,
		&NewStructOps,
		"AccelByteModelsChatV2TopicQuitPayload",
		sizeof(FAccelByteModelsChatV2TopicQuitPayload),
		alignof(FAccelByteModelsChatV2TopicQuitPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChatV2TopicQuitPayload"), sizeof(FAccelByteModelsChatV2TopicQuitPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatV2TopicQuitPayload_Hash() { return 3276483607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
