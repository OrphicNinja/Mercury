// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2MatchmakingExpiredNotif.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2MatchmakingExpiredNotif() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2MatchmakingExpiredNotif::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2MatchmakingExpiredNotif"), sizeof(FAccelByteModelsV2MatchmakingExpiredNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2MatchmakingExpiredNotif>()
{
	return FAccelByteModelsV2MatchmakingExpiredNotif::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif(FAccelByteModelsV2MatchmakingExpiredNotif::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2MatchmakingExpiredNotif"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingExpiredNotif
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingExpiredNotif()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2MatchmakingExpiredNotif>(FName(TEXT("AccelByteModelsV2MatchmakingExpiredNotif")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingExpiredNotif;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingExpiredNotif.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2MatchmakingExpiredNotif>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_TicketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingExpiredNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingExpiredNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_TicketID = { "TicketID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingExpiredNotif, TicketID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_TicketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_TicketID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingExpiredNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingExpiredNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingExpiredNotif, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingExpiredNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingExpiredNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingExpiredNotif, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_MatchPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingExpiredNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingExpiredNotif.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_MatchPool = { "MatchPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingExpiredNotif, MatchPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_MatchPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_MatchPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_TicketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::NewProp_MatchPool,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2MatchmakingExpiredNotif",
		sizeof(FAccelByteModelsV2MatchmakingExpiredNotif),
		alignof(FAccelByteModelsV2MatchmakingExpiredNotif),
		Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2MatchmakingExpiredNotif"), sizeof(FAccelByteModelsV2MatchmakingExpiredNotif), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingExpiredNotif_Hash() { return 1820612845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
