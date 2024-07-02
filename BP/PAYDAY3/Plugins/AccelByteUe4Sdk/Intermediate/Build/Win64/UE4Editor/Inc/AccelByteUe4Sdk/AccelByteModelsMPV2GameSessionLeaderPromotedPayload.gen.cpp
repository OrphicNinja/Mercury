// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV2GameSessionLeaderPromotedPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV2GameSessionLeaderPromotedPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV2GameSessionLeaderPromotedPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV2GameSessionLeaderPromotedPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV2GameSessionLeaderPromotedPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV2GameSessionLeaderPromotedPayload"), sizeof(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV2GameSessionLeaderPromotedPayload>()
{
	return FAccelByteModelsMPV2GameSessionLeaderPromotedPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV2GameSessionLeaderPromotedPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionLeaderPromotedPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionLeaderPromotedPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV2GameSessionLeaderPromotedPayload>(FName(TEXT("AccelByteModelsMPV2GameSessionLeaderPromotedPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV2GameSessionLeaderPromotedPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionLeaderPromotedPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV2GameSessionLeaderPromotedPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2GameSessionLeaderPromotedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionLeaderPromotedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId = { "PromotedUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload, PromotedUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV2GameSessionLeaderPromotedPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV2GameSessionLeaderPromotedPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload, GameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_GameSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_PromotedUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::NewProp_GameSessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV2GameSessionLeaderPromotedPayload",
		sizeof(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload),
		alignof(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV2GameSessionLeaderPromotedPayload"), sizeof(FAccelByteModelsMPV2GameSessionLeaderPromotedPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV2GameSessionLeaderPromotedPayload_Hash() { return 4138129798U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
