// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABAgreement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAgreement() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAgreement_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAgreement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAcceptAgreementResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DString__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsRetrieveUserEligibilitiesResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABAgreement::execAcceptPolicyVersion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalizedPolicyVersionId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptPolicyVersion(Z_Param_LocalizedPolicyVersionId,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execBulkAcceptPolicyVersions)
	{
		P_GET_STRUCT_REF(FArrayModelsAcceptAgreementRequest,Z_Param_Out_AgreementRequests);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkAcceptPolicyVersions(Z_Param_Out_AgreementRequests,FDModelsAcceptAgreementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalDocument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalDocument(Z_Param_Url,FDString(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalPolicies)
	{
		P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
		P_GET_UBOOL(Z_Param_DefaultOnEmpty);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalPolicies((EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByCountry)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
		P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
		P_GET_UBOOL(Z_Param_DefaultOnEmpty);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalPoliciesByCountry(Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByCountryAndTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CountryCode);
		P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
		P_GET_UBOOL(Z_Param_DefaultOnEmpty);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalPoliciesByCountryAndTags(Z_Param_CountryCode,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_Out_Tags,Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByNamespace)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Namesapce);
		P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
		P_GET_UBOOL(Z_Param_DefaultOnEmpty);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalPoliciesByNamespace(Z_Param_Namesapce,(EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execGetLegalPoliciesByTags)
	{
		P_GET_ENUM_REF(EAccelByteAgreementPolicyType,Z_Param_Out_AgreementPolicyType);
		P_GET_TARRAY_REF(FString,Z_Param_Out_tags);
		P_GET_UBOOL(Z_Param_DefaultOnEmpty);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLegalPoliciesByTags((EAccelByteAgreementPolicyType&)(Z_Param_Out_AgreementPolicyType),Z_Param_Out_tags,Z_Param_DefaultOnEmpty,FDArrayModelsPublicPolicyResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAgreement::execQueryLegalEligibilities)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryLegalEligibilities(Z_Param_Namespace,FDArrayModelsRetrieveUserEligibilitiesResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABAgreement::StaticRegisterNativesUABAgreement()
	{
		UClass* Class = UABAgreement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptPolicyVersion", &UABAgreement::execAcceptPolicyVersion },
			{ "BulkAcceptPolicyVersions", &UABAgreement::execBulkAcceptPolicyVersions },
			{ "GetLegalDocument", &UABAgreement::execGetLegalDocument },
			{ "GetLegalPolicies", &UABAgreement::execGetLegalPolicies },
			{ "GetLegalPoliciesByCountry", &UABAgreement::execGetLegalPoliciesByCountry },
			{ "GetLegalPoliciesByCountryAndTags", &UABAgreement::execGetLegalPoliciesByCountryAndTags },
			{ "GetLegalPoliciesByNamespace", &UABAgreement::execGetLegalPoliciesByNamespace },
			{ "GetLegalPoliciesByTags", &UABAgreement::execGetLegalPoliciesByTags },
			{ "QueryLegalEligibilities", &UABAgreement::execQueryLegalEligibilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics
	{
		struct ABAgreement_eventAcceptPolicyVersion_Parms
		{
			FString LocalizedPolicyVersionId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPolicyVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId = { "LocalizedPolicyVersionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, LocalizedPolicyVersionId), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventAcceptPolicyVersion_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_LocalizedPolicyVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "AcceptPolicyVersion", nullptr, nullptr, sizeof(ABAgreement_eventAcceptPolicyVersion_Parms), Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics
	{
		struct ABAgreement_eventBulkAcceptPolicyVersions_Parms
		{
			FArrayModelsAcceptAgreementRequest AgreementRequests;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgreementRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests = { "AgreementRequests", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, AgreementRequests), Z_Construct_UScriptStruct_FArrayModelsAcceptAgreementRequest, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsAcceptAgreementResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventBulkAcceptPolicyVersions_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_AgreementRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "BulkAcceptPolicyVersions", nullptr, nullptr, sizeof(ABAgreement_eventBulkAcceptPolicyVersions_Parms), Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics
	{
		struct ABAgreement_eventGetLegalDocument_Parms
		{
			FString Url;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DString__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalDocument_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalDocument", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalDocument_Parms), Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics
	{
		struct ABAgreement_eventGetLegalPolicies_Parms
		{
			EAccelByteAgreementPolicyType AgreementPolicyType;
			bool DefaultOnEmpty;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
		static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_MetaData)) };
	void Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
	{
		((ABAgreement_eventGetLegalPolicies_Parms*)Obj)->DefaultOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPolicies_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPolicies_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_AgreementPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_DefaultOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPolicies", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalPolicies_Parms), Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPolicies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPolicies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics
	{
		struct ABAgreement_eventGetLegalPoliciesByCountry_Parms
		{
			FString CountryCode;
			EAccelByteAgreementPolicyType AgreementPolicyType;
			bool DefaultOnEmpty;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
		static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, CountryCode), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_MetaData)) };
	void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
	{
		((ABAgreement_eventGetLegalPoliciesByCountry_Parms*)Obj)->DefaultOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByCountry_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountry_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_CountryCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_AgreementPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_DefaultOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByCountry", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalPoliciesByCountry_Parms), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics
	{
		struct ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms
		{
			FString CountryCode;
			EAccelByteAgreementPolicyType AgreementPolicyType;
			TArray<FString> Tags;
			bool DefaultOnEmpty;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, CountryCode), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_MetaData)) };
	void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
	{
		((ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms*)Obj)->DefaultOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_CountryCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_AgreementPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_DefaultOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByCountryAndTags", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalPoliciesByCountryAndTags_Parms), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics
	{
		struct ABAgreement_eventGetLegalPoliciesByNamespace_Parms
		{
			FString Namesapce;
			EAccelByteAgreementPolicyType AgreementPolicyType;
			bool DefaultOnEmpty;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namesapce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namesapce;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
		static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce = { "Namesapce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, Namesapce), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_MetaData)) };
	void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
	{
		((ABAgreement_eventGetLegalPoliciesByNamespace_Parms*)Obj)->DefaultOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByNamespace_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByNamespace_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_Namesapce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_AgreementPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_DefaultOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByNamespace", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalPoliciesByNamespace_Parms), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics
	{
		struct ABAgreement_eventGetLegalPoliciesByTags_Parms
		{
			EAccelByteAgreementPolicyType AgreementPolicyType;
			TArray<FString> tags;
			bool DefaultOnEmpty;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgreementPolicyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreementPolicyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgreementPolicyType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tags;
		static void NewProp_DefaultOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType = { "AgreementPolicyType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, AgreementPolicyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAgreementPolicyType, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_MetaData)) };
	void Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty_SetBit(void* Obj)
	{
		((ABAgreement_eventGetLegalPoliciesByTags_Parms*)Obj)->DefaultOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty = { "DefaultOnEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAgreement_eventGetLegalPoliciesByTags_Parms), &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsPublicPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventGetLegalPoliciesByTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_AgreementPolicyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_DefaultOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "GetLegalPoliciesByTags", nullptr, nullptr, sizeof(ABAgreement_eventGetLegalPoliciesByTags_Parms), Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics
	{
		struct ABAgreement_eventQueryLegalEligibilities_Parms
		{
			FString Namespace;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, Namespace), METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsRetrieveUserEligibilitiesResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAgreement_eventQueryLegalEligibilities_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAgreement, nullptr, "QueryLegalEligibilities", nullptr, nullptr, sizeof(ABAgreement_eventQueryLegalEligibilities_Parms), Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABAgreement_NoRegister()
	{
		return UABAgreement::StaticClass();
	}
	struct Z_Construct_UClass_UABAgreement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAgreement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABAgreement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAgreement_AcceptPolicyVersion, "AcceptPolicyVersion" }, // 312067658
		{ &Z_Construct_UFunction_UABAgreement_BulkAcceptPolicyVersions, "BulkAcceptPolicyVersions" }, // 148130555
		{ &Z_Construct_UFunction_UABAgreement_GetLegalDocument, "GetLegalDocument" }, // 4152938960
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPolicies, "GetLegalPolicies" }, // 1490312564
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountry, "GetLegalPoliciesByCountry" }, // 138375337
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByCountryAndTags, "GetLegalPoliciesByCountryAndTags" }, // 3523200138
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByNamespace, "GetLegalPoliciesByNamespace" }, // 3832872192
		{ &Z_Construct_UFunction_UABAgreement_GetLegalPoliciesByTags, "GetLegalPoliciesByTags" }, // 2922810957
		{ &Z_Construct_UFunction_UABAgreement_QueryLegalEligibilities, "QueryLegalEligibilities" }, // 443010105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAgreement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABAgreement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABAgreement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAgreement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAgreement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABAgreement_Statics::ClassParams = {
		&UABAgreement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABAgreement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABAgreement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABAgreement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABAgreement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABAgreement, 4226324091);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABAgreement>()
	{
		return UABAgreement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABAgreement(Z_Construct_UClass_UABAgreement, &UABAgreement::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABAgreement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAgreement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
