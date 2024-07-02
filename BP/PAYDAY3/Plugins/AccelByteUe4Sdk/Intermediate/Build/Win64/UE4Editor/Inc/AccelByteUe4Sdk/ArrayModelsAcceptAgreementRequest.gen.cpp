// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ArrayModelsAcceptAgreementRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayModelsAcceptAgreementRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest();
// End Cross Module References
class UScriptStruct* FArrayModelsAcceptAgreementRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ArrayModelsAcceptAgreementRequest"), sizeof(FArrayModelsAcceptAgreementRequest), Get_Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FArrayModelsAcceptAgreementRequest>()
{
	return FArrayModelsAcceptAgreementRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayModelsAcceptAgreementRequest(FArrayModelsAcceptAgreementRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ArrayModelsAcceptAgreementRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsAcceptAgreementRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsAcceptAgreementRequest()
	{
		UScriptStruct::DeferCppStructOps<FArrayModelsAcceptAgreementRequest>(FName(TEXT("ArrayModelsAcceptAgreementRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFArrayModelsAcceptAgreementRequest;
	struct Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayModelsAcceptAgreementRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayModelsAcceptAgreementRequest>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ArrayModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/ArrayModelsAcceptAgreementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArrayModelsAcceptAgreementRequest, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"ArrayModelsAcceptAgreementRequest",
		sizeof(FArrayModelsAcceptAgreementRequest),
		alignof(FArrayModelsAcceptAgreementRequest),
		Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayModelsAcceptAgreementRequest"), sizeof(FArrayModelsAcceptAgreementRequest), Get_Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest_Hash() { return 2893618462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
