// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABLeaderboard() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLeaderboard_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLeaderboard();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkUserRankingDataV3__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedLeaderboardData__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataV3__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABLeaderboard::execGetBulkUserRankingV3)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBulkUserRankingV3(Z_Param_Out_UserIds,Z_Param_LeaderboardCode,FDModelsBulkUserRankingDataV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetLeaderboards)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboards(Z_Param_Offset,Z_Param_Limit,FDModelsPaginatedLeaderboardData(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetRankingByCycle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_CycleId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRankingByCycle(Z_Param_LeaderboardCode,Z_Param_CycleId,Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetRankings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_ENUM_REF(EAccelByteLeaderboardTimeFrame,Z_Param_Out_TimeFrame);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRankings(Z_Param_LeaderboardCode,(EAccelByteLeaderboardTimeFrame&)(Z_Param_Out_TimeFrame),Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetRankingsV3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRankingsV3(Z_Param_LeaderboardCode,Z_Param_Offset,Z_Param_Limit,FDModelsLeaderboardRankingResultV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetUserRanking)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserRanking(Z_Param_UserId,Z_Param_LeaderboardCode,FDModelsUserRankingDataResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLeaderboard::execGetUserRankingV3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserRankingV3(Z_Param_UserId,Z_Param_LeaderboardCode,FDModelsUserRankingDataV3(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABLeaderboard::StaticRegisterNativesUABLeaderboard()
	{
		UClass* Class = UABLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBulkUserRankingV3", &UABLeaderboard::execGetBulkUserRankingV3 },
			{ "GetLeaderboards", &UABLeaderboard::execGetLeaderboards },
			{ "GetRankingByCycle", &UABLeaderboard::execGetRankingByCycle },
			{ "GetRankings", &UABLeaderboard::execGetRankings },
			{ "GetRankingsV3", &UABLeaderboard::execGetRankingsV3 },
			{ "GetUserRanking", &UABLeaderboard::execGetUserRanking },
			{ "GetUserRankingV3", &UABLeaderboard::execGetUserRankingV3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics
	{
		struct ABLeaderboard_eventGetBulkUserRankingV3_Parms
		{
			TArray<FString> UserIds;
			FString LeaderboardCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBulkUserRankingDataV3__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetBulkUserRankingV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_UserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetBulkUserRankingV3", nullptr, nullptr, sizeof(ABLeaderboard_eventGetBulkUserRankingV3_Parms), Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics
	{
		struct ABLeaderboard_eventGetLeaderboards_Parms
		{
			int32 Offset;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedLeaderboardData__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetLeaderboards_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetLeaderboards", nullptr, nullptr, sizeof(ABLeaderboard_eventGetLeaderboards_Parms), Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics
	{
		struct ABLeaderboard_eventGetRankingByCycle_Parms
		{
			FString LeaderboardCode;
			FString CycleId;
			int32 Offset;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CycleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CycleId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId = { "CycleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, CycleId), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingByCycle_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_CycleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankingByCycle", nullptr, nullptr, sizeof(ABLeaderboard_eventGetRankingByCycle_Parms), Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics
	{
		struct ABLeaderboard_eventGetRankings_Parms
		{
			FString LeaderboardCode;
			EAccelByteLeaderboardTimeFrame TimeFrame;
			int32 Offset;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeFrame_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimeFrame;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame = { "TimeFrame", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, TimeFrame), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLeaderboardTimeFrame, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankings_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_TimeFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankings", nullptr, nullptr, sizeof(ABLeaderboard_eventGetRankings_Parms), Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics
	{
		struct ABLeaderboard_eventGetRankingsV3_Parms
		{
			FString LeaderboardCode;
			int32 Offset;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsLeaderboardRankingResultV3__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetRankingsV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetRankingsV3", nullptr, nullptr, sizeof(ABLeaderboard_eventGetRankingsV3_Parms), Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetRankingsV3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetRankingsV3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics
	{
		struct ABLeaderboard_eventGetUserRanking_Parms
		{
			FString UserId;
			FString LeaderboardCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRanking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetUserRanking", nullptr, nullptr, sizeof(ABLeaderboard_eventGetUserRanking_Parms), Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetUserRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetUserRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics
	{
		struct ABLeaderboard_eventGetUserRankingV3_Parms
		{
			FString UserId;
			FString LeaderboardCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode = { "LeaderboardCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, LeaderboardCode), METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRankingDataV3__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLeaderboard_eventGetUserRankingV3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_LeaderboardCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLeaderboard, nullptr, "GetUserRankingV3", nullptr, nullptr, sizeof(ABLeaderboard_eventGetUserRankingV3_Parms), Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABLeaderboard_NoRegister()
	{
		return UABLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UABLeaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABLeaderboard_GetBulkUserRankingV3, "GetBulkUserRankingV3" }, // 2084643729
		{ &Z_Construct_UFunction_UABLeaderboard_GetLeaderboards, "GetLeaderboards" }, // 2635193582
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankingByCycle, "GetRankingByCycle" }, // 3367734585
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankings, "GetRankings" }, // 3648266788
		{ &Z_Construct_UFunction_UABLeaderboard_GetRankingsV3, "GetRankingsV3" }, // 2659797044
		{ &Z_Construct_UFunction_UABLeaderboard_GetUserRanking, "GetUserRanking" }, // 1824688067
		{ &Z_Construct_UFunction_UABLeaderboard_GetUserRankingV3, "GetUserRankingV3" }, // 4224602319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABLeaderboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABLeaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABLeaderboard_Statics::ClassParams = {
		&UABLeaderboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABLeaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABLeaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABLeaderboard, 3697713703);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABLeaderboard>()
	{
		return UABLeaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABLeaderboard(Z_Construct_UClass_UABLeaderboard, &UABLeaderboard::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABLeaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABLeaderboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
