// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSeasonClaimRewardRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSeasonClaimRewardRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSeasonClaimRewardRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSeasonClaimRewardRequest"), sizeof(FAccelByteModelsSeasonClaimRewardRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSeasonClaimRewardRequest>()
{
	return FAccelByteModelsSeasonClaimRewardRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest(FAccelByteModelsSeasonClaimRewardRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSeasonClaimRewardRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSeasonClaimRewardRequest>(FName(TEXT("AccelByteModelsSeasonClaimRewardRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSeasonClaimRewardRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PassCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TierIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSeasonClaimRewardRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_PassCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonClaimRewardRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_PassCode = { "PassCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonClaimRewardRequest, PassCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_PassCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_PassCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_TierIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonClaimRewardRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_TierIndex = { "TierIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonClaimRewardRequest, TierIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_TierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_TierIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_RewardCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSeasonClaimRewardRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSeasonClaimRewardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_RewardCode = { "RewardCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSeasonClaimRewardRequest, RewardCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_RewardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_RewardCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_PassCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_TierIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::NewProp_RewardCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSeasonClaimRewardRequest",
		sizeof(FAccelByteModelsSeasonClaimRewardRequest),
		alignof(FAccelByteModelsSeasonClaimRewardRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSeasonClaimRewardRequest"), sizeof(FAccelByteModelsSeasonClaimRewardRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest_Hash() { return 62355928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
