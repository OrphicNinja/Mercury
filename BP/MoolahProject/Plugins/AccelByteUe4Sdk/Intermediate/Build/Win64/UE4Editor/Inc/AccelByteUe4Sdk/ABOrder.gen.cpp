// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABOrder() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABOrder_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABOrder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderCreate();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsOrderHistoryInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPagedOrderInfoResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABOrder::execCancelOrder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelOrder(Z_Param_OrderNo,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABOrder::execCreateNewOrder)
	{
		P_GET_STRUCT_REF(FAccelByteModelsOrderCreate,Z_Param_Out_OrderCreateRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewOrder(Z_Param_Out_OrderCreateRequest,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABOrder::execGetUserOrder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserOrder(Z_Param_OrderNo,FDAccelByteModelsOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABOrder::execGetUserOrderHistory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OrderNo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserOrderHistory(Z_Param_OrderNo,FDArrayModelsOrderHistoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABOrder::execGetUserOrders)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Page);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Size);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserOrders(Z_Param_Out_Page,Z_Param_Out_Size,FDAccelByteModelsPagedOrderInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABOrder::StaticRegisterNativesUABOrder()
	{
		UClass* Class = UABOrder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelOrder", &UABOrder::execCancelOrder },
			{ "CreateNewOrder", &UABOrder::execCreateNewOrder },
			{ "GetUserOrder", &UABOrder::execGetUserOrder },
			{ "GetUserOrderHistory", &UABOrder::execGetUserOrderHistory },
			{ "GetUserOrders", &UABOrder::execGetUserOrders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABOrder_CancelOrder_Statics
	{
		struct ABOrder_eventCancelOrder_Parms
		{
			FString OrderNo;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderNo;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OrderNo), METADATA_PARAMS(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCancelOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CancelOrder_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_CancelOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_CancelOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "CancelOrder", nullptr, nullptr, sizeof(ABOrder_eventCancelOrder_Parms), Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CancelOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABOrder_CancelOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABOrder_CancelOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics
	{
		struct ABOrder_eventCreateNewOrder_Parms
		{
			FAccelByteModelsOrderCreate OrderCreateRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderCreateRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderCreateRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest = { "OrderCreateRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OrderCreateRequest), Z_Construct_UScriptStruct_FAccelByteModelsOrderCreate, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventCreateNewOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OrderCreateRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "CreateNewOrder", nullptr, nullptr, sizeof(ABOrder_eventCreateNewOrder_Parms), Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABOrder_CreateNewOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABOrder_CreateNewOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABOrder_GetUserOrder_Statics
	{
		struct ABOrder_eventGetUserOrder_Parms
		{
			FString OrderNo;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderNo;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OrderNo), METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsOrderInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrder_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrder", nullptr, nullptr, sizeof(ABOrder_eventGetUserOrder_Parms), Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABOrder_GetUserOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics
	{
		struct ABOrder_eventGetUserOrderHistory_Parms
		{
			FString OrderNo;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderNo;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo = { "OrderNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OrderNo), METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsOrderHistoryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrderHistory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OrderNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrderHistory", nullptr, nullptr, sizeof(ABOrder_eventGetUserOrderHistory_Parms), Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABOrder_GetUserOrderHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrderHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABOrder_GetUserOrders_Statics
	{
		struct ABOrder_eventGetUserOrders_Parms
		{
			int32 Page;
			int32 Size;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Page;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, Page), METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, Size), METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPagedOrderInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABOrder_eventGetUserOrders_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABOrder, nullptr, "GetUserOrders", nullptr, nullptr, sizeof(ABOrder_eventGetUserOrders_Parms), Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABOrder_GetUserOrders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABOrder_GetUserOrders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABOrder_NoRegister()
	{
		return UABOrder::StaticClass();
	}
	struct Z_Construct_UClass_UABOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABOrder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABOrder_CancelOrder, "CancelOrder" }, // 1127106596
		{ &Z_Construct_UFunction_UABOrder_CreateNewOrder, "CreateNewOrder" }, // 1692654768
		{ &Z_Construct_UFunction_UABOrder_GetUserOrder, "GetUserOrder" }, // 2559100516
		{ &Z_Construct_UFunction_UABOrder_GetUserOrderHistory, "GetUserOrderHistory" }, // 815922437
		{ &Z_Construct_UFunction_UABOrder_GetUserOrders, "GetUserOrders" }, // 2183994172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABOrder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABOrder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABOrder_Statics::ClassParams = {
		&UABOrder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABOrder, 1064218227);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABOrder>()
	{
		return UABOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABOrder(Z_Construct_UClass_UABOrder, &UABOrder::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
