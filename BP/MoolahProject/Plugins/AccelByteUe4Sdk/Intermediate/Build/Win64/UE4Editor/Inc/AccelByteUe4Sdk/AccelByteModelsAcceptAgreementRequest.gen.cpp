// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptAgreementRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptAgreementRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsAcceptAgreementRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptAgreementRequest"), sizeof(FAccelByteModelsAcceptAgreementRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptAgreementRequest>()
{
	return FAccelByteModelsAcceptAgreementRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest(FAccelByteModelsAcceptAgreementRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsAcceptAgreementRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAcceptAgreementRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAcceptAgreementRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsAcceptAgreementRequest>(FName(TEXT("AccelByteModelsAcceptAgreementRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsAcceptAgreementRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPolicyVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAccepted_MetaData[];
#endif
		static void NewProp_IsAccepted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAccepted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptAgreementRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, LocalizedPolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId = { "PolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, PolicyVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId = { "PolicyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsAcceptAgreementRequest, PolicyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptAgreementRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptAgreementRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_SetBit(void* Obj)
	{
		((FAccelByteModelsAcceptAgreementRequest*)Obj)->IsAccepted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted = { "IsAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsAcceptAgreementRequest), &Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_LocalizedPolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_PolicyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::NewProp_IsAccepted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsAcceptAgreementRequest",
		sizeof(FAccelByteModelsAcceptAgreementRequest),
		alignof(FAccelByteModelsAcceptAgreementRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsAcceptAgreementRequest"), sizeof(FAccelByteModelsAcceptAgreementRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsAcceptAgreementRequest_Hash() { return 1491203446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
