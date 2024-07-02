// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABReward() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABReward_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABReward();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsQueryReward__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABReward::execGetRewardByRewardCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RewardCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRewardByRewardCode(Z_Param_RewardCode,FDModelsRewardInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABReward::execGetRewardByRewardId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RewardId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRewardByRewardId(Z_Param_RewardId,FDModelsRewardInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABReward::execQueryRewards)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventTopic);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_ENUM_REF(EAccelByteRewardListSortBy,Z_Param_Out_SortBy);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryRewards(Z_Param_EventTopic,Z_Param_Offset,Z_Param_Limit,(EAccelByteRewardListSortBy&)(Z_Param_Out_SortBy),FDModelsQueryReward(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABReward::StaticRegisterNativesUABReward()
	{
		UClass* Class = UABReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRewardByRewardCode", &UABReward::execGetRewardByRewardCode },
			{ "GetRewardByRewardId", &UABReward::execGetRewardByRewardId },
			{ "QueryRewards", &UABReward::execQueryRewards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics
	{
		struct ABReward_eventGetRewardByRewardCode_Parms
		{
			FString RewardCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode = { "RewardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, RewardCode), METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_RewardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "GetRewardByRewardCode", nullptr, nullptr, sizeof(ABReward_eventGetRewardByRewardCode_Parms), Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABReward_GetRewardByRewardCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABReward_GetRewardByRewardCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics
	{
		struct ABReward_eventGetRewardByRewardId_Parms
		{
			FString RewardId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, RewardId), METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsRewardInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventGetRewardByRewardId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_RewardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "GetRewardByRewardId", nullptr, nullptr, sizeof(ABReward_eventGetRewardByRewardId_Parms), Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABReward_GetRewardByRewardId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABReward_GetRewardByRewardId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABReward_QueryRewards_Statics
	{
		struct ABReward_eventQueryRewards_Parms
		{
			FString EventTopic;
			int32 Offset;
			int32 Limit;
			EAccelByteRewardListSortBy SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTopic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventTopic;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic = { "EventTopic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, EventTopic), METADATA_PARAMS(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy, METADATA_PARAMS(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsQueryReward__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABReward_eventQueryRewards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_EventTopic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABReward_QueryRewards_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABReward_QueryRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABReward_QueryRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABReward, nullptr, "QueryRewards", nullptr, nullptr, sizeof(ABReward_eventQueryRewards_Parms), Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABReward_QueryRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABReward_QueryRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABReward_QueryRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABReward_QueryRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABReward_NoRegister()
	{
		return UABReward::StaticClass();
	}
	struct Z_Construct_UClass_UABReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABReward_GetRewardByRewardCode, "GetRewardByRewardCode" }, // 2035698378
		{ &Z_Construct_UFunction_UABReward_GetRewardByRewardId, "GetRewardByRewardId" }, // 694192522
		{ &Z_Construct_UFunction_UABReward_QueryRewards, "QueryRewards" }, // 547119641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABReward_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABReward.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABReward.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABReward>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABReward_Statics::ClassParams = {
		&UABReward::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABReward_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABReward_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABReward()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABReward_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABReward, 1902908072);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABReward>()
	{
		return UABReward::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABReward(Z_Construct_UClass_UABReward, &UABReward::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABReward"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABReward);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
