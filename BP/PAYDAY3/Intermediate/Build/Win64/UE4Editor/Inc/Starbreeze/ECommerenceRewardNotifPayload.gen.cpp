// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ECommerenceRewardNotifPayload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommerenceRewardNotifPayload() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSummary();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCreditSummary();
// End Cross Module References
class UScriptStruct* FECommerenceRewardNotifPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ECommerenceRewardNotifPayload"), sizeof(FECommerenceRewardNotifPayload), Get_Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FECommerenceRewardNotifPayload>()
{
	return FECommerenceRewardNotifPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FECommerenceRewardNotifPayload(FECommerenceRewardNotifPayload::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("ECommerenceRewardNotifPayload"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFECommerenceRewardNotifPayload
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFECommerenceRewardNotifPayload()
	{
		UScriptStruct::DeferCppStructOps<FECommerenceRewardNotifPayload>(FName(TEXT("ECommerenceRewardNotifPayload")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFECommerenceRewardNotifPayload;
	struct Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardTopic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardTopic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardCondition;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FECommerenceRewardNotifPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardTopic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ECommerenceRewardNotifPayload" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardTopic = { "rewardTopic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FECommerenceRewardNotifPayload, rewardTopic), METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardTopic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardTopic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ECommerenceRewardNotifPayload" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCode = { "rewardCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FECommerenceRewardNotifPayload, rewardCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ECommerenceRewardNotifPayload" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCondition = { "rewardCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FECommerenceRewardNotifPayload, rewardCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCondition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries_Inner = { "EntitlementSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSummary, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ECommerenceRewardNotifPayload" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries = { "EntitlementSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FECommerenceRewardNotifPayload, EntitlementSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries_Inner = { "CreditSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsCreditSummary, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ECommerenceRewardNotifPayload" },
		{ "ModuleRelativePath", "Public/ECommerenceRewardNotifPayload.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries = { "CreditSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FECommerenceRewardNotifPayload, CreditSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardTopic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_rewardCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_EntitlementSummaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::NewProp_CreditSummaries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"ECommerenceRewardNotifPayload",
		sizeof(FECommerenceRewardNotifPayload),
		alignof(FECommerenceRewardNotifPayload),
		Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ECommerenceRewardNotifPayload"), sizeof(FECommerenceRewardNotifPayload), Get_Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FECommerenceRewardNotifPayload_Hash() { return 628160878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
