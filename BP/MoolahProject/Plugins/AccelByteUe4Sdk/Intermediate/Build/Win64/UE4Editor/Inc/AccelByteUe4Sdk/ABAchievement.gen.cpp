// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABAchievement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAchievement() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAchievement_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAchievement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMultiLanguageAchievementResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicTagResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicAchievementResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementContributorsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserGlobalAchievementResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementUserContributedResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserAchievementResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABAchievement::execClaimGlobalAchievements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClaimGlobalAchievements(Z_Param_AchievementCode,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execGetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAchievement(Z_Param_AchievementCode,FDModelsMultiLanguageAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execGetTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTags(Z_Param_Name,(EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedPublicTagResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execQueryAchievements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagQuery);
		P_GET_UBOOL(Z_Param_bGlobal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryAchievements(Z_Param_Language,(EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedPublicAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_TagQuery,Z_Param_bGlobal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievementContributors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_ENUM_REF(EAccelByteGlobalAchievementContributorsSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryGlobalAchievementContributors(Z_Param_AchievementCode,(EAccelByteGlobalAchievementContributorsSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedGlobalAchievementContributorsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_ENUM_REF(EAccelByteGlobalAchievementStatus,Z_Param_Out_AchievementStatus);
		P_GET_ENUM_REF(EAccelByteGlobalAchievementListSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryGlobalAchievements(Z_Param_AchievementCode,(EAccelByteGlobalAchievementStatus&)(Z_Param_Out_AchievementStatus),(EAccelByteGlobalAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedUserGlobalAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execQueryGlobalAchievementUserContributed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_ENUM_REF(EAccelByteGlobalAchievementContributorsSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryGlobalAchievementUserContributed(Z_Param_AchievementCode,(EAccelByteGlobalAchievementContributorsSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedGlobalAchievementUserContributedResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execQueryUserAchievements)
	{
		P_GET_ENUM_REF(EAccelByteAchievementListSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_GET_UBOOL(Z_Param_PreferUnlocked);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryUserAchievements((EAccelByteAchievementListSortBy&)(Z_Param_Out_SortBy),FDModelsPaginatedUserAchievementResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_PreferUnlocked,Z_Param_TagQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABAchievement::execUnlockAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockAchievement(Z_Param_AchievementCode,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABAchievement::StaticRegisterNativesUABAchievement()
	{
		UClass* Class = UABAchievement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimGlobalAchievements", &UABAchievement::execClaimGlobalAchievements },
			{ "GetAchievement", &UABAchievement::execGetAchievement },
			{ "GetTags", &UABAchievement::execGetTags },
			{ "QueryAchievements", &UABAchievement::execQueryAchievements },
			{ "QueryGlobalAchievementContributors", &UABAchievement::execQueryGlobalAchievementContributors },
			{ "QueryGlobalAchievements", &UABAchievement::execQueryGlobalAchievements },
			{ "QueryGlobalAchievementUserContributed", &UABAchievement::execQueryGlobalAchievementUserContributed },
			{ "QueryUserAchievements", &UABAchievement::execQueryUserAchievements },
			{ "UnlockAchievement", &UABAchievement::execUnlockAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics
	{
		struct ABAchievement_eventClaimGlobalAchievements_Parms
		{
			FString AchievementCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventClaimGlobalAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "ClaimGlobalAchievements", nullptr, nullptr, sizeof(ABAchievement_eventClaimGlobalAchievements_Parms), Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_GetAchievement_Statics
	{
		struct ABAchievement_eventGetAchievement_Parms
		{
			FString AchievementCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsMultiLanguageAchievementResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetAchievement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "GetAchievement", nullptr, nullptr, sizeof(ABAchievement_eventGetAchievement_Parms), Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_GetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_GetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_GetTags_Statics
	{
		struct ABAchievement_eventGetTags_Parms
		{
			FString Name;
			EAccelByteAchievementListSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicTagResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventGetTags_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_GetTags_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_GetTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "GetTags", nullptr, nullptr, sizeof(ABAchievement_eventGetTags_Parms), Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_GetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_GetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics
	{
		struct ABAchievement_eventQueryAchievements_Parms
		{
			FString Language;
			EAccelByteAchievementListSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
			FString TagQuery;
			bool bGlobal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagQuery;
		static void NewProp_bGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedPublicAchievementResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryAchievements_Parms, TagQuery), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery_MetaData)) };
	void Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal_SetBit(void* Obj)
	{
		((ABAchievement_eventQueryAchievements_Parms*)Obj)->bGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal = { "bGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAchievement_eventQueryAchievements_Parms), &Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_TagQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::NewProp_bGlobal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryAchievements", nullptr, nullptr, sizeof(ABAchievement_eventQueryAchievements_Parms), Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_QueryAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics
	{
		struct ABAchievement_eventQueryGlobalAchievementContributors_Parms
		{
			FString AchievementCode;
			EAccelByteGlobalAchievementContributorsSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementContributorsResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementContributors_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievementContributors", nullptr, nullptr, sizeof(ABAchievement_eventQueryGlobalAchievementContributors_Parms), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics
	{
		struct ABAchievement_eventQueryGlobalAchievements_Parms
		{
			FString AchievementCode;
			EAccelByteGlobalAchievementStatus AchievementStatus;
			EAccelByteGlobalAchievementListSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus = { "AchievementStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, AchievementStatus), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementStatus, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserGlobalAchievementResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievements_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_AchievementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievements", nullptr, nullptr, sizeof(ABAchievement_eventQueryGlobalAchievements_Parms), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics
	{
		struct ABAchievement_eventQueryGlobalAchievementUserContributed_Parms
		{
			FString AchievementCode;
			EAccelByteGlobalAchievementContributorsSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGlobalAchievementUserContributedResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryGlobalAchievementUserContributed", nullptr, nullptr, sizeof(ABAchievement_eventQueryGlobalAchievementUserContributed_Parms), Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics
	{
		struct ABAchievement_eventQueryUserAchievements_Parms
		{
			EAccelByteAchievementListSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
			bool PreferUnlocked;
			FString TagQuery;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static void NewProp_PreferUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreferUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagQuery;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserAchievementResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit_MetaData)) };
	void Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked_SetBit(void* Obj)
	{
		((ABAchievement_eventQueryUserAchievements_Parms*)Obj)->PreferUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked = { "PreferUnlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABAchievement_eventQueryUserAchievements_Parms), &Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventQueryUserAchievements_Parms, TagQuery), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_PreferUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::NewProp_TagQuery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "QueryUserAchievements", nullptr, nullptr, sizeof(ABAchievement_eventQueryUserAchievements_Parms), Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_QueryUserAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_QueryUserAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics
	{
		struct ABAchievement_eventUnlockAchievement_Parms
		{
			FString AchievementCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode = { "AchievementCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, AchievementCode), METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABAchievement_eventUnlockAchievement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_AchievementCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAchievement, nullptr, "UnlockAchievement", nullptr, nullptr, sizeof(ABAchievement_eventUnlockAchievement_Parms), Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAchievement_UnlockAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAchievement_UnlockAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABAchievement_NoRegister()
	{
		return UABAchievement::StaticClass();
	}
	struct Z_Construct_UClass_UABAchievement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAchievement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABAchievement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAchievement_ClaimGlobalAchievements, "ClaimGlobalAchievements" }, // 3534347512
		{ &Z_Construct_UFunction_UABAchievement_GetAchievement, "GetAchievement" }, // 3482407172
		{ &Z_Construct_UFunction_UABAchievement_GetTags, "GetTags" }, // 3861676163
		{ &Z_Construct_UFunction_UABAchievement_QueryAchievements, "QueryAchievements" }, // 841962364
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementContributors, "QueryGlobalAchievementContributors" }, // 3821878976
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievements, "QueryGlobalAchievements" }, // 3217796913
		{ &Z_Construct_UFunction_UABAchievement_QueryGlobalAchievementUserContributed, "QueryGlobalAchievementUserContributed" }, // 441170954
		{ &Z_Construct_UFunction_UABAchievement_QueryUserAchievements, "QueryUserAchievements" }, // 3351562170
		{ &Z_Construct_UFunction_UABAchievement_UnlockAchievement, "UnlockAchievement" }, // 2699082580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAchievement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABAchievement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABAchievement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAchievement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAchievement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABAchievement_Statics::ClassParams = {
		&UABAchievement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABAchievement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABAchievement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABAchievement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABAchievement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABAchievement, 3578642540);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABAchievement>()
	{
		return UABAchievement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABAchievement(Z_Construct_UClass_UABAchievement, &UABAchievement::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABAchievement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAchievement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
