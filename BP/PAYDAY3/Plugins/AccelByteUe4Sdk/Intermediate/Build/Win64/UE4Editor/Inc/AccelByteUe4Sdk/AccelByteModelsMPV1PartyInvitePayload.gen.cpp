// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV1PartyInvitePayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV1PartyInvitePayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyJoinedPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV1PartyInvitePayload>() == std::is_polymorphic<FAccelByteModelsMPV1PartyJoinedPayload>(), "USTRUCT FAccelByteModelsMPV1PartyInvitePayload cannot be polymorphic unless super FAccelByteModelsMPV1PartyJoinedPayload is polymorphic");

class UScriptStruct* FAccelByteModelsMPV1PartyInvitePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV1PartyInvitePayload"), sizeof(FAccelByteModelsMPV1PartyInvitePayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV1PartyInvitePayload>()
{
	return FAccelByteModelsMPV1PartyInvitePayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload(FAccelByteModelsMPV1PartyInvitePayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV1PartyInvitePayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1PartyInvitePayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1PartyInvitePayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV1PartyInvitePayload>(FName(TEXT("AccelByteModelsMPV1PartyInvitePayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1PartyInvitePayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1PartyInvitePayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV1PartyInvitePayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyJoinedPayload,
		&NewStructOps,
		"AccelByteModelsMPV1PartyInvitePayload",
		sizeof(FAccelByteModelsMPV1PartyInvitePayload),
		alignof(FAccelByteModelsMPV1PartyInvitePayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV1PartyInvitePayload"), sizeof(FAccelByteModelsMPV1PartyInvitePayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1PartyInvitePayload_Hash() { return 1137658714U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
