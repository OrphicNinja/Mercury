// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMPV1MatchmakingReadyConsentPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMPV1MatchmakingReadyConsentPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsMPV1MatchmakingReadyConsentPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsMPV1MatchmakingReadyConsentPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsMPV1MatchmakingReadyConsentPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMPV1MatchmakingReadyConsentPayload"), sizeof(FAccelByteModelsMPV1MatchmakingReadyConsentPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMPV1MatchmakingReadyConsentPayload>()
{
	return FAccelByteModelsMPV1MatchmakingReadyConsentPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload(FAccelByteModelsMPV1MatchmakingReadyConsentPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMPV1MatchmakingReadyConsentPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingReadyConsentPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingReadyConsentPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMPV1MatchmakingReadyConsentPayload>(FName(TEXT("AccelByteModelsMPV1MatchmakingReadyConsentPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMPV1MatchmakingReadyConsentPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingReadyConsentPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMPV1MatchmakingReadyConsentPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV1MatchmakingReadyConsentPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingReadyConsentPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV1MatchmakingReadyConsentPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_MatchId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMPV1MatchmakingReadyConsentPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMPV1MatchmakingReadyConsentPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMPV1MatchmakingReadyConsentPayload, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsMPV1MatchmakingReadyConsentPayload",
		sizeof(FAccelByteModelsMPV1MatchmakingReadyConsentPayload),
		alignof(FAccelByteModelsMPV1MatchmakingReadyConsentPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMPV1MatchmakingReadyConsentPayload"), sizeof(FAccelByteModelsMPV1MatchmakingReadyConsentPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMPV1MatchmakingReadyConsentPayload_Hash() { return 1595954482U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
