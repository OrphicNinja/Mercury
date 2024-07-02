// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemFulfilledPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsItemFulfilledPayload() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSummaryEventPayload();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCreditSummaryEventPayload();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSubscriptionSummaryEventPayload();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsItemFulfilledPayload>() == std::is_polymorphic<FAccelByteModelsPredefinedEvent>(), "USTRUCT FAccelByteModelsItemFulfilledPayload cannot be polymorphic unless super FAccelByteModelsPredefinedEvent is polymorphic");

class UScriptStruct* FAccelByteModelsItemFulfilledPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsItemFulfilledPayload"), sizeof(FAccelByteModelsItemFulfilledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsItemFulfilledPayload>()
{
	return FAccelByteModelsItemFulfilledPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsItemFulfilledPayload(FAccelByteModelsItemFulfilledPayload::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsItemFulfilledPayload"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemFulfilledPayload
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemFulfilledPayload()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsItemFulfilledPayload>(FName(TEXT("AccelByteModelsItemFulfilledPayload")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemFulfilledPayload;
	struct Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntitlementSummaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementSummaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntitlementSummaries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreditSummaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditSummaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreditSummaries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionSummaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionSummaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubscriptionSummaries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemFulfilledPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsItemFulfilledPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemFulfilledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemFulfilledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemFulfilledPayload, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries_Inner = { "EntitlementSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSummaryEventPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemFulfilledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemFulfilledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries = { "EntitlementSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemFulfilledPayload, EntitlementSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries_Inner = { "CreditSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsCreditSummaryEventPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemFulfilledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemFulfilledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries = { "CreditSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemFulfilledPayload, CreditSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries_Inner = { "SubscriptionSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsSubscriptionSummaryEventPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemFulfilledPayload" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemFulfilledPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries = { "SubscriptionSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemFulfilledPayload, SubscriptionSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_EntitlementSummaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_CreditSummaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::NewProp_SubscriptionSummaries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsPredefinedEvent,
		&NewStructOps,
		"AccelByteModelsItemFulfilledPayload",
		sizeof(FAccelByteModelsItemFulfilledPayload),
		alignof(FAccelByteModelsItemFulfilledPayload),
		Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsItemFulfilledPayload"), sizeof(FAccelByteModelsItemFulfilledPayload), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemFulfilledPayload_Hash() { return 1010493895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
