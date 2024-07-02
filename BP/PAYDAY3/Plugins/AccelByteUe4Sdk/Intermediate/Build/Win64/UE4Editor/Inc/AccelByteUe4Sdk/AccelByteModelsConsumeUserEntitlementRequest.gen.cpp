// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsConsumeUserEntitlementRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsConsumeUserEntitlementRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsConsumeUserEntitlementRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsConsumeUserEntitlementRequest"), sizeof(FAccelByteModelsConsumeUserEntitlementRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsConsumeUserEntitlementRequest>()
{
	return FAccelByteModelsConsumeUserEntitlementRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest(FAccelByteModelsConsumeUserEntitlementRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsConsumeUserEntitlementRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsConsumeUserEntitlementRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsConsumeUserEntitlementRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsConsumeUserEntitlementRequest>(FName(TEXT("AccelByteModelsConsumeUserEntitlementRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsConsumeUserEntitlementRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsConsumeUserEntitlementRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsConsumeUserEntitlementRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsConsumeUserEntitlementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsConsumeUserEntitlementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsConsumeUserEntitlementRequest, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_UseCount_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsConsumeUserEntitlementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsConsumeUserEntitlementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsConsumeUserEntitlementRequest, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_RequestId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsConsumeUserEntitlementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsConsumeUserEntitlementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsConsumeUserEntitlementRequest, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_RequestId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::NewProp_RequestId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsConsumeUserEntitlementRequest",
		sizeof(FAccelByteModelsConsumeUserEntitlementRequest),
		alignof(FAccelByteModelsConsumeUserEntitlementRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsConsumeUserEntitlementRequest"), sizeof(FAccelByteModelsConsumeUserEntitlementRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsConsumeUserEntitlementRequest_Hash() { return 1602167401U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
