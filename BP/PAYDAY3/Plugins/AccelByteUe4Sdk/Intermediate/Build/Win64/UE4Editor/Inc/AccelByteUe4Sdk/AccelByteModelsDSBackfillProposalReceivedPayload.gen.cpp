// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDSBackfillProposalReceivedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDSBackfillProposalReceivedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSRegisteredPayload();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionTeam();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsDSBackfillProposalReceivedPayload>() == std::is_polymorphic<FAccelByteModelsDSRegisteredPayload>(), "USTRUCT FAccelByteModelsDSBackfillProposalReceivedPayload cannot be polymorphic unless super FAccelByteModelsDSRegisteredPayload is polymorphic");

class UScriptStruct* FAccelByteModelsDSBackfillProposalReceivedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDSBackfillProposalReceivedPayload"), sizeof(FAccelByteModelsDSBackfillProposalReceivedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDSBackfillProposalReceivedPayload>()
{
	return FAccelByteModelsDSBackfillProposalReceivedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload(FAccelByteModelsDSBackfillProposalReceivedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDSBackfillProposalReceivedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalReceivedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalReceivedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDSBackfillProposalReceivedPayload>(FName(TEXT("AccelByteModelsDSBackfillProposalReceivedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSBackfillProposalReceivedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackfillTicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackfillTicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProposalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProposalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProposedTeams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProposedTeams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProposedTeams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddedTickets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddedTickets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddedTickets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDSBackfillProposalReceivedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_BackfillTicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_BackfillTicketId = { "BackfillTicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, BackfillTicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_BackfillTicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_BackfillTicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposalId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposalId = { "ProposalId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, ProposalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_MatchPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_MatchPool = { "MatchPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, MatchPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_MatchPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_MatchPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, GameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_GameSessionId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams_Inner = { "ProposedTeams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2GameSessionTeam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams = { "ProposedTeams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, ProposedTeams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets_Inner = { "AddedTickets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSBackfillProposalReceivedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSBackfillProposalReceivedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets = { "AddedTickets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSBackfillProposalReceivedPayload, AddedTickets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_BackfillTicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_MatchPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_GameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_ProposedTeams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::NewProp_AddedTickets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsDSRegisteredPayload,
		&NewStructOps,
		"AccelByteModelsDSBackfillProposalReceivedPayload",
		sizeof(FAccelByteModelsDSBackfillProposalReceivedPayload),
		alignof(FAccelByteModelsDSBackfillProposalReceivedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDSBackfillProposalReceivedPayload"), sizeof(FAccelByteModelsDSBackfillProposalReceivedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSBackfillProposalReceivedPayload_Hash() { return 702514286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
