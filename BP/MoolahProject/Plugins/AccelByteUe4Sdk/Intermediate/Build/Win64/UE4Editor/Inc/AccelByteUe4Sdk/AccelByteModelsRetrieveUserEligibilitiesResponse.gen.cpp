// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsRetrieveUserEligibilitiesResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject();
// End Cross Module References
class UScriptStruct* FAccelByteModelsRetrieveUserEligibilitiesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsRetrieveUserEligibilitiesResponse"), sizeof(FAccelByteModelsRetrieveUserEligibilitiesResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsRetrieveUserEligibilitiesResponse>()
{
	return FAccelByteModelsRetrieveUserEligibilitiesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse(FAccelByteModelsRetrieveUserEligibilitiesResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsRetrieveUserEligibilitiesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRetrieveUserEligibilitiesResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRetrieveUserEligibilitiesResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsRetrieveUserEligibilitiesResponse>(FName(TEXT("AccelByteModelsRetrieveUserEligibilitiesResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsRetrieveUserEligibilitiesResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReadableId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryGrupCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryGrupCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseUrls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseUrls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseUrls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolicyVersions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyVersions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolicyVersions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMandatory_MetaData[];
#endif
		static void NewProp_IsMandatory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMandatory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAccepted_MetaData[];
#endif
		static void NewProp_IsAccepted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAccepted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsRetrieveUserEligibilitiesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_ReadableId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_ReadableId = { "ReadableId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, ReadableId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_ReadableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_ReadableId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyName = { "PolicyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, PolicyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyType = { "PolicyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, PolicyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, CountryCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryGrupCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryGrupCode = { "CountryGrupCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, CountryGrupCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryGrupCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryGrupCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls_Inner = { "BaseUrls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls = { "BaseUrls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, BaseUrls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions_Inner = { "PolicyVersions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions = { "PolicyVersions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, PolicyVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyId = { "PolicyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsRetrieveUserEligibilitiesResponse, PolicyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory_SetBit(void* Obj)
	{
		((FAccelByteModelsRetrieveUserEligibilitiesResponse*)Obj)->IsMandatory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory = { "IsMandatory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsRetrieveUserEligibilitiesResponse), &Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsRetrieveUserEligibilitiesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsRetrieveUserEligibilitiesResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted_SetBit(void* Obj)
	{
		((FAccelByteModelsRetrieveUserEligibilitiesResponse*)Obj)->IsAccepted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted = { "IsAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsRetrieveUserEligibilitiesResponse), &Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_ReadableId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_CountryGrupCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_BaseUrls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyVersions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_PolicyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsMandatory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::NewProp_IsAccepted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsRetrieveUserEligibilitiesResponse",
		sizeof(FAccelByteModelsRetrieveUserEligibilitiesResponse),
		alignof(FAccelByteModelsRetrieveUserEligibilitiesResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsRetrieveUserEligibilitiesResponse"), sizeof(FAccelByteModelsRetrieveUserEligibilitiesResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsRetrieveUserEligibilitiesResponse_Hash() { return 2160656237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
