// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV2MatchmakingStartedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV2MatchmakingStartedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV2MatchmakingStartedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV2MatchmakingStartedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV2MatchmakingStartedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV2MatchmakingStartedPayload"), sizeof(FAccelByteModelsMPV2MatchmakingStartedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV2MatchmakingStartedPayload>()
{
	return FAccelByteModelsMPV2MatchmakingStartedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload(FAccelByteModelsMPV2MatchmakingStartedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV2MatchmakingStartedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2MatchmakingStartedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2MatchmakingStartedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV2MatchmakingStartedPayload>(FName(TEXT("AccelByteModelsMPV2MatchmakingStartedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2MatchmakingStartedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchTicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartySessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2MatchmakingStartedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV2MatchmakingStartedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2MatchmakingStartedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2MatchmakingStartedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2MatchmakingStartedPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchTicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2MatchmakingStartedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2MatchmakingStartedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchTicketId = { "MatchTicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2MatchmakingStartedPayload, MatchTicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchTicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchTicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_PartySessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2MatchmakingStartedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2MatchmakingStartedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_PartySessionId = { "PartySessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2MatchmakingStartedPayload, PartySessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_PartySessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_PartySessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2MatchmakingStartedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2MatchmakingStartedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchPool = { "MatchPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2MatchmakingStartedPayload, MatchPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchTicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_PartySessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::NewProp_MatchPool,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV2MatchmakingStartedPayload",
		sizeof(FAccelByteModelsMPV2MatchmakingStartedPayload),
		alignof(FAccelByteModelsMPV2MatchmakingStartedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV2MatchmakingStartedPayload"), sizeof(FAccelByteModelsMPV2MatchmakingStartedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2MatchmakingStartedPayload_Hash() { return 3612862817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
