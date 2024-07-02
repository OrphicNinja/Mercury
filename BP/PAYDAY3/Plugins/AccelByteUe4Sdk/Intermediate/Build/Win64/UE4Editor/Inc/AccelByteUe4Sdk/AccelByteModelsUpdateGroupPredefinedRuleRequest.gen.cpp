// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateGroupPredefinedRuleRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUpdateGroupPredefinedRuleRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRuleInformation();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUpdateGroupPredefinedRuleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUpdateGroupPredefinedRuleRequest"), sizeof(FAccelByteModelsUpdateGroupPredefinedRuleRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUpdateGroupPredefinedRuleRequest>()
{
	return FAccelByteModelsUpdateGroupPredefinedRuleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest(FAccelByteModelsUpdateGroupPredefinedRuleRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUpdateGroupPredefinedRuleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupPredefinedRuleRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupPredefinedRuleRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUpdateGroupPredefinedRuleRequest>(FName(TEXT("AccelByteModelsUpdateGroupPredefinedRuleRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupPredefinedRuleRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuleDetail_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuleDetail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateGroupPredefinedRuleRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUpdateGroupPredefinedRuleRequest>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail_Inner = { "RuleDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsRuleInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUpdateGroupPredefinedRuleRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateGroupPredefinedRuleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail = { "RuleDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUpdateGroupPredefinedRuleRequest, RuleDetail), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::NewProp_RuleDetail,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUpdateGroupPredefinedRuleRequest",
		sizeof(FAccelByteModelsUpdateGroupPredefinedRuleRequest),
		alignof(FAccelByteModelsUpdateGroupPredefinedRuleRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUpdateGroupPredefinedRuleRequest"), sizeof(FAccelByteModelsUpdateGroupPredefinedRuleRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupPredefinedRuleRequest_Hash() { return 2361418578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
