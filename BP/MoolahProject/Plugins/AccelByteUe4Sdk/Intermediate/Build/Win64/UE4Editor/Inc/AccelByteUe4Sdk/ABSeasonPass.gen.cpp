// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSeasonPass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSeasonPass() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSeasonPass_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSeasonPass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonInfo__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABSeasonPass::execBulkClaimRewards)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkClaimRewards(FDModelsSeasonClaimRewardResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSeasonPass::execClaimRewards)
	{
		P_GET_STRUCT_REF(FAccelByteModelsSeasonClaimRewardRequest,Z_Param_Out_RewardRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClaimRewards(Z_Param_Out_RewardRequest,FDModelsSeasonClaimRewardResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSeasonPass::execGetCurrentSeason)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentSeason(Z_Param_Language,FDModelsSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSeasonPass::execGetCurrentUserSeason)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentUserSeason(FDModelsUserSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSeasonPass::execGetUserSeason)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SeasonId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserSeason(Z_Param_SeasonId,FDModelsUserSeasonInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABSeasonPass::StaticRegisterNativesUABSeasonPass()
	{
		UClass* Class = UABSeasonPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkClaimRewards", &UABSeasonPass::execBulkClaimRewards },
			{ "ClaimRewards", &UABSeasonPass::execClaimRewards },
			{ "GetCurrentSeason", &UABSeasonPass::execGetCurrentSeason },
			{ "GetCurrentUserSeason", &UABSeasonPass::execGetCurrentUserSeason },
			{ "GetUserSeason", &UABSeasonPass::execGetUserSeason },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics
	{
		struct ABSeasonPass_eventBulkClaimRewards_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventBulkClaimRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventBulkClaimRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "BulkClaimRewards", nullptr, nullptr, sizeof(ABSeasonPass_eventBulkClaimRewards_Parms), Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics
	{
		struct ABSeasonPass_eventClaimRewards_Parms
		{
			FAccelByteModelsSeasonClaimRewardRequest RewardRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest = { "RewardRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, RewardRequest), Z_Construct_UScriptStruct_FAccelByteModelsSeasonClaimRewardRequest, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonClaimRewardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventClaimRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_RewardRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "ClaimRewards", nullptr, nullptr, sizeof(ABSeasonPass_eventClaimRewards_Parms), Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSeasonPass_ClaimRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSeasonPass_ClaimRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics
	{
		struct ABSeasonPass_eventGetCurrentSeason_Parms
		{
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsSeasonInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetCurrentSeason", nullptr, nullptr, sizeof(ABSeasonPass_eventGetCurrentSeason_Parms), Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics
	{
		struct ABSeasonPass_eventGetCurrentUserSeason_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentUserSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetCurrentUserSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetCurrentUserSeason", nullptr, nullptr, sizeof(ABSeasonPass_eventGetCurrentUserSeason_Parms), Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics
	{
		struct ABSeasonPass_eventGetUserSeason_Parms
		{
			FString SeasonId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SeasonId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId = { "SeasonId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, SeasonId), METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserSeasonInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSeasonPass_eventGetUserSeason_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_SeasonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSeasonPass, nullptr, "GetUserSeason", nullptr, nullptr, sizeof(ABSeasonPass_eventGetUserSeason_Parms), Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSeasonPass_GetUserSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSeasonPass_GetUserSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABSeasonPass_NoRegister()
	{
		return UABSeasonPass::StaticClass();
	}
	struct Z_Construct_UClass_UABSeasonPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABSeasonPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABSeasonPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSeasonPass_BulkClaimRewards, "BulkClaimRewards" }, // 2489912785
		{ &Z_Construct_UFunction_UABSeasonPass_ClaimRewards, "ClaimRewards" }, // 3668937802
		{ &Z_Construct_UFunction_UABSeasonPass_GetCurrentSeason, "GetCurrentSeason" }, // 3079109548
		{ &Z_Construct_UFunction_UABSeasonPass_GetCurrentUserSeason, "GetCurrentUserSeason" }, // 1821827971
		{ &Z_Construct_UFunction_UABSeasonPass_GetUserSeason, "GetUserSeason" }, // 3792141610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSeasonPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSeasonPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSeasonPass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABSeasonPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSeasonPass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABSeasonPass_Statics::ClassParams = {
		&UABSeasonPass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABSeasonPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABSeasonPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABSeasonPass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABSeasonPass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABSeasonPass, 3738706115);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSeasonPass>()
	{
		return UABSeasonPass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABSeasonPass(Z_Construct_UClass_UABSeasonPass, &UABSeasonPass::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABSeasonPass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSeasonPass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
