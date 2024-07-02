// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV2PartySessionKickedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV2PartySessionKickedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionCreatedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV2PartySessionKickedPayload>() == std::is_polymorphic<FAccelByteModelsMPV2PartySessionCreatedPayload>(), "USTRUCT FAccelByteModelsMPV2PartySessionKickedPayload cannot be polymorphic unless super FAccelByteModelsMPV2PartySessionCreatedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsMPV2PartySessionKickedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV2PartySessionKickedPayload"), sizeof(FAccelByteModelsMPV2PartySessionKickedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV2PartySessionKickedPayload>()
{
	return FAccelByteModelsMPV2PartySessionKickedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload(FAccelByteModelsMPV2PartySessionKickedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV2PartySessionKickedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionKickedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionKickedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV2PartySessionKickedPayload>(FName(TEXT("AccelByteModelsMPV2PartySessionKickedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionKickedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2PartySessionKickedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV2PartySessionKickedPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionCreatedPayload,
		&NewStructOps,
		"AccelByteModelsMPV2PartySessionKickedPayload",
		sizeof(FAccelByteModelsMPV2PartySessionKickedPayload),
		alignof(FAccelByteModelsMPV2PartySessionKickedPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV2PartySessionKickedPayload"), sizeof(FAccelByteModelsMPV2PartySessionKickedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionKickedPayload_Hash() { return 131468578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
