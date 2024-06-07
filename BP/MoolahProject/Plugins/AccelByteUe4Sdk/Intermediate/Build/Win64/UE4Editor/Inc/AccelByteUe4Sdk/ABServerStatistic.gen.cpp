// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerStatistic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerStatistic() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerStatistic_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerStatistic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFetchUserStatistic__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatItemInc();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc();
// End Cross Module References
	DEFINE_FUNCTION(UABServerStatistic::execBulkFetchStatItemsValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkFetchStatItemsValue(Z_Param_StatCode,Z_Param_Out_UserIds,FDFetchUserStatistic(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execCreateUserStatItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateUserStatItems(Z_Param_UserId,Z_Param_Out_StatCodes,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execGetAllUserStatItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllUserStatItems(Z_Param_UserId,FDUserStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execGetGlobalStatItemsByStatCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalStatItemsByStatCode(Z_Param_StatCode,FDGlobalStatItemDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execGetUserStatItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StatCodes);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_ENUM(EAccelByteStatisticSortBy,Z_Param_SortBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserStatItems(Z_Param_UserId,Z_Param_Out_StatCodes,Z_Param_Out_Tags,FDUserStatItemPagingSlicedDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_Limit,Z_Param_Offset,EAccelByteStatisticSortBy(Z_Param_SortBy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execIncrementManyUsersStatItems)
	{
		P_GET_TARRAY_REF(FAccelByteModelsBulkUserStatItemInc,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementManyUsersStatItems(Z_Param_Out_Data,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerStatistic::execIncrementUserStatItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FAccelByteModelsBulkStatItemInc,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementUserStatItems(Z_Param_UserId,Z_Param_Out_Data,FDArrayBulkStatItemOperationDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABServerStatistic::StaticRegisterNativesUABServerStatistic()
	{
		UClass* Class = UABServerStatistic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkFetchStatItemsValue", &UABServerStatistic::execBulkFetchStatItemsValue },
			{ "CreateUserStatItems", &UABServerStatistic::execCreateUserStatItems },
			{ "GetAllUserStatItems", &UABServerStatistic::execGetAllUserStatItems },
			{ "GetGlobalStatItemsByStatCode", &UABServerStatistic::execGetGlobalStatItemsByStatCode },
			{ "GetUserStatItems", &UABServerStatistic::execGetUserStatItems },
			{ "IncrementManyUsersStatItems", &UABServerStatistic::execIncrementManyUsersStatItems },
			{ "IncrementUserStatItems", &UABServerStatistic::execIncrementUserStatItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics
	{
		struct ABServerStatistic_eventBulkFetchStatItemsValue_Parms
		{
			FString StatCode;
			TArray<FString> UserIds;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, StatCode), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFetchUserStatistic__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventBulkFetchStatItemsValue_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_UserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "BulkFetchStatItemsValue", nullptr, nullptr, sizeof(ABServerStatistic_eventBulkFetchStatItemsValue_Parms), Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics
	{
		struct ABServerStatistic_eventCreateUserStatItems_Parms
		{
			FString UserId;
			TArray<FString> StatCodes;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventCreateUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_StatCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "CreateUserStatItems", nullptr, nullptr, sizeof(ABServerStatistic_eventCreateUserStatItems_Parms), Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics
	{
		struct ABServerStatistic_eventGetAllUserStatItems_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Limit;
			int32 Offset;
			EAccelByteStatisticSortBy SortBy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetAllUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::NewProp_SortBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetAllUserStatItems", nullptr, nullptr, sizeof(ABServerStatistic_eventGetAllUserStatItems_Parms), Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics
	{
		struct ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms
		{
			FString StatCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, StatCode), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGlobalStatItemDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetGlobalStatItemsByStatCode", nullptr, nullptr, sizeof(ABServerStatistic_eventGetGlobalStatItemsByStatCode_Parms), Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics
	{
		struct ABServerStatistic_eventGetUserStatItems_Parms
		{
			FString UserId;
			TArray<FString> StatCodes;
			TArray<FString> Tags;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Limit;
			int32 Offset;
			EAccelByteStatisticSortBy SortBy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatCodes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner = { "StatCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes = { "StatCodes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, StatCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserStatItemPagingSlicedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventGetUserStatItems_Parms, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_StatCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::NewProp_SortBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "GetUserStatItems", nullptr, nullptr, sizeof(ABServerStatistic_eventGetUserStatItems_Parms), Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_GetUserStatItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_GetUserStatItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics
	{
		struct ABServerStatistic_eventIncrementManyUsersStatItems_Parms
		{
			TArray<FAccelByteModelsBulkUserStatItemInc> Data;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkUserStatItemInc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementManyUsersStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "IncrementManyUsersStatItems", nullptr, nullptr, sizeof(ABServerStatistic_eventIncrementManyUsersStatItems_Parms), Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics
	{
		struct ABServerStatistic_eventIncrementUserStatItems_Parms
		{
			FString UserId;
			TArray<FAccelByteModelsBulkStatItemInc> Data;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsBulkStatItemInc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayBulkStatItemOperationDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerStatistic_eventIncrementUserStatItems_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerStatistic, nullptr, "IncrementUserStatItems", nullptr, nullptr, sizeof(ABServerStatistic_eventIncrementUserStatItems_Parms), Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerStatistic_NoRegister()
	{
		return UABServerStatistic::StaticClass();
	}
	struct Z_Construct_UClass_UABServerStatistic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerStatistic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerStatistic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerStatistic_BulkFetchStatItemsValue, "BulkFetchStatItemsValue" }, // 2287540789
		{ &Z_Construct_UFunction_UABServerStatistic_CreateUserStatItems, "CreateUserStatItems" }, // 3517901407
		{ &Z_Construct_UFunction_UABServerStatistic_GetAllUserStatItems, "GetAllUserStatItems" }, // 2989000535
		{ &Z_Construct_UFunction_UABServerStatistic_GetGlobalStatItemsByStatCode, "GetGlobalStatItemsByStatCode" }, // 1708100593
		{ &Z_Construct_UFunction_UABServerStatistic_GetUserStatItems, "GetUserStatItems" }, // 3762644148
		{ &Z_Construct_UFunction_UABServerStatistic_IncrementManyUsersStatItems, "IncrementManyUsersStatItems" }, // 1618330869
		{ &Z_Construct_UFunction_UABServerStatistic_IncrementUserStatItems, "IncrementUserStatItems" }, // 3592992221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerStatistic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerStatistic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerStatistic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerStatistic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerStatistic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerStatistic_Statics::ClassParams = {
		&UABServerStatistic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerStatistic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerStatistic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerStatistic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerStatistic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerStatistic, 2247969161);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerStatistic>()
	{
		return UABServerStatistic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerStatistic(Z_Construct_UClass_UABServerStatistic, &UABServerStatistic::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerStatistic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerStatistic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
