// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV2PartySessionLeaderPromotedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV2PartySessionLeaderPromotedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV2PartySessionLeaderPromotedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV2PartySessionLeaderPromotedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV2PartySessionLeaderPromotedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV2PartySessionLeaderPromotedPayload"), sizeof(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV2PartySessionLeaderPromotedPayload>()
{
	return FAccelByteModelsMPV2PartySessionLeaderPromotedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV2PartySessionLeaderPromotedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionLeaderPromotedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionLeaderPromotedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV2PartySessionLeaderPromotedPayload>(FName(TEXT("AccelByteModelsMPV2PartySessionLeaderPromotedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2PartySessionLeaderPromotedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromotedUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PromotedUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartySessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2PartySessionLeaderPromotedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV2PartySessionLeaderPromotedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2PartySessionLeaderPromotedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2PartySessionLeaderPromotedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId = { "PromotedUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload, PromotedUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PartySessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2PartySessionLeaderPromotedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2PartySessionLeaderPromotedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PartySessionId = { "PartySessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload, PartySessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PartySessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PartySessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::NewProp_PartySessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV2PartySessionLeaderPromotedPayload",
		sizeof(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload),
		alignof(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV2PartySessionLeaderPromotedPayload"), sizeof(FAccelByteModelsMPV2PartySessionLeaderPromotedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2PartySessionLeaderPromotedPayload_Hash() { return 4056776510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
