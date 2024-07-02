// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2MatchmakingTicket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2MatchmakingTicket() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicketPlayerData();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2MatchmakingTicket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2MatchmakingTicket"), sizeof(FAccelByteModelsV2MatchmakingTicket), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2MatchmakingTicket>()
{
	return FAccelByteModelsV2MatchmakingTicket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket(FAccelByteModelsV2MatchmakingTicket::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2MatchmakingTicket"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingTicket
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingTicket()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2MatchmakingTicket>(FName(TEXT("AccelByteModelsV2MatchmakingTicket")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingTicket;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Latencies_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Latencies_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Latencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2MatchmakingTicket>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_TicketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingTicket" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_TicketID = { "TicketID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingTicket, TicketID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_TicketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_TicketID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_MatchPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingTicket" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_MatchPool = { "MatchPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingTicket, MatchPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_MatchPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_MatchPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingTicket" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingTicket, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_CreatedAt_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_ValueProp = { "Latencies", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_Key_KeyProp = { "Latencies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingTicket" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies = { "Latencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingTicket, Latencies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicketPlayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingTicket" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingTicket, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_TicketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_MatchPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Latencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::NewProp_Players,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2MatchmakingTicket",
		sizeof(FAccelByteModelsV2MatchmakingTicket),
		alignof(FAccelByteModelsV2MatchmakingTicket),
		Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2MatchmakingTicket"), sizeof(FAccelByteModelsV2MatchmakingTicket), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingTicket_Hash() { return 435935624U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
