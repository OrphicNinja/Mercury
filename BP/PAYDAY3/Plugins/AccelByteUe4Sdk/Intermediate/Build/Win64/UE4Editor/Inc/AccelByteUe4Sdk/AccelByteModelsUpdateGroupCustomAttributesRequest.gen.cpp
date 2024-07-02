// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUpdateGroupCustomAttributesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUpdateGroupCustomAttributesRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUpdateGroupCustomAttributesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUpdateGroupCustomAttributesRequest"), sizeof(FAccelByteModelsUpdateGroupCustomAttributesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUpdateGroupCustomAttributesRequest>()
{
	return FAccelByteModelsUpdateGroupCustomAttributesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest(FAccelByteModelsUpdateGroupCustomAttributesRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUpdateGroupCustomAttributesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupCustomAttributesRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupCustomAttributesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUpdateGroupCustomAttributesRequest>(FName(TEXT("AccelByteModelsUpdateGroupCustomAttributesRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUpdateGroupCustomAttributesRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateGroupCustomAttributesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUpdateGroupCustomAttributesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewProp_CustomAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUpdateGroupCustomAttributesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUpdateGroupCustomAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewProp_CustomAttributes = { "CustomAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUpdateGroupCustomAttributesRequest, CustomAttributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewProp_CustomAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewProp_CustomAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::NewProp_CustomAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUpdateGroupCustomAttributesRequest",
		sizeof(FAccelByteModelsUpdateGroupCustomAttributesRequest),
		alignof(FAccelByteModelsUpdateGroupCustomAttributesRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUpdateGroupCustomAttributesRequest"), sizeof(FAccelByteModelsUpdateGroupCustomAttributesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUpdateGroupCustomAttributesRequest_Hash() { return 579552455U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
