// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCatalog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCatalog() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCatalog_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCatalog();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsCategoryInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPopulatedItemInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemDynamicDataResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemCriteria();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABCatalog::execGetCategory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCategory(Z_Param_CategoryPath,Z_Param_Language,FDModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetChildCategories)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildCategories(Z_Param_CategoryPath,Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetDescendantCategories)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDescendantCategories(Z_Param_CategoryPath,Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetItemByAppId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemByAppId(Z_Param_AppId,Z_Param_Language,Z_Param_Region,FDModelsItemInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetItemById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FStrProperty,Z_Param_StoreId);
		P_GET_UBOOL(Z_Param_bPopulateBundle);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemById(Z_Param_ItemId,Z_Param_Language,Z_Param_Region,Z_Param_StoreId,Z_Param_bPopulateBundle,FDModelsPopulatedItemInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetItemDynamicData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemDynamicData(Z_Param_ItemId,FDModelsItemDynamicDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetItemsByCriteria)
	{
		P_GET_STRUCT_REF(FAccelByteModelsItemCriteria,Z_Param_Out_ItemCriteria);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_GET_TARRAY(EAccelByteItemListSortBy,Z_Param_SortBy);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemsByCriteria(Z_Param_Out_ItemCriteria,Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_SortBy,FDModelsItemPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execGetRootCategories)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRootCategories(Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCatalog::execSearchItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_Keyword);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchItem(Z_Param_Language,Z_Param_Keyword,Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_Region,FDModelsItemPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABCatalog::StaticRegisterNativesUABCatalog()
	{
		UClass* Class = UABCatalog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategory", &UABCatalog::execGetCategory },
			{ "GetChildCategories", &UABCatalog::execGetChildCategories },
			{ "GetDescendantCategories", &UABCatalog::execGetDescendantCategories },
			{ "GetItemByAppId", &UABCatalog::execGetItemByAppId },
			{ "GetItemById", &UABCatalog::execGetItemById },
			{ "GetItemDynamicData", &UABCatalog::execGetItemDynamicData },
			{ "GetItemsByCriteria", &UABCatalog::execGetItemsByCriteria },
			{ "GetRootCategories", &UABCatalog::execGetRootCategories },
			{ "SearchItem", &UABCatalog::execSearchItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABCatalog_GetCategory_Statics
	{
		struct ABCatalog_eventGetCategory_Parms
		{
			FString CategoryPath;
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, CategoryPath), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetCategory", nullptr, nullptr, sizeof(ABCatalog_eventGetCategory_Parms), Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics
	{
		struct ABCatalog_eventGetChildCategories_Parms
		{
			FString CategoryPath;
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, CategoryPath), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetChildCategories", nullptr, nullptr, sizeof(ABCatalog_eventGetChildCategories_Parms), Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetChildCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics
	{
		struct ABCatalog_eventGetDescendantCategories_Parms
		{
			FString CategoryPath;
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, CategoryPath), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetDescendantCategories", nullptr, nullptr, sizeof(ABCatalog_eventGetDescendantCategories_Parms), Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetDescendantCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics
	{
		struct ABCatalog_eventGetItemByAppId_Parms
		{
			FString AppId;
			FString Language;
			FString Region;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, AppId), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemByAppId", nullptr, nullptr, sizeof(ABCatalog_eventGetItemByAppId_Parms), Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetItemByAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetItemById_Statics
	{
		struct ABCatalog_eventGetItemById_Parms
		{
			FString ItemId;
			FString Language;
			FString Region;
			FString StoreId;
			bool bPopulateBundle;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StoreId;
		static void NewProp_bPopulateBundle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPopulateBundle;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId = { "StoreId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, StoreId), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId_MetaData)) };
	void Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle_SetBit(void* Obj)
	{
		((ABCatalog_eventGetItemById_Parms*)Obj)->bPopulateBundle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle = { "bPopulateBundle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCatalog_eventGetItemById_Parms), &Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPopulatedItemInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemById", nullptr, nullptr, sizeof(ABCatalog_eventGetItemById_Parms), Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetItemById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics
	{
		struct ABCatalog_eventGetItemDynamicData_Parms
		{
			FString ItemId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemDynamicDataResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemDynamicData", nullptr, nullptr, sizeof(ABCatalog_eventGetItemDynamicData_Parms), Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetItemDynamicData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics
	{
		struct ABCatalog_eventGetItemsByCriteria_Parms
		{
			FAccelByteModelsItemCriteria ItemCriteria;
			int32 Offset;
			int32 Limit;
			TArray<EAccelByteItemListSortBy> SortBy;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCriteria_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemCriteria;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortBy;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria = { "ItemCriteria", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, ItemCriteria), Z_Construct_UScriptStruct_FAccelByteModelsItemCriteria, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner = { "SortBy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, SortBy), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemsByCriteria", nullptr, nullptr, sizeof(ABCatalog_eventGetItemsByCriteria_Parms), Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetItemsByCriteria()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics
	{
		struct ABCatalog_eventGetRootCategories_Parms
		{
			FString Language;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetRootCategories", nullptr, nullptr, sizeof(ABCatalog_eventGetRootCategories_Parms), Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_GetRootCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCatalog_SearchItem_Statics
	{
		struct ABCatalog_eventSearchItem_Parms
		{
			FString Language;
			FString Keyword;
			int32 Offset;
			int32 Limit;
			FString Region;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keyword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Keyword), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCatalog_SearchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "SearchItem", nullptr, nullptr, sizeof(ABCatalog_eventSearchItem_Parms), Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCatalog_SearchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCatalog_SearchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABCatalog_NoRegister()
	{
		return UABCatalog::StaticClass();
	}
	struct Z_Construct_UClass_UABCatalog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCatalog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABCatalog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCatalog_GetCategory, "GetCategory" }, // 1004507938
		{ &Z_Construct_UFunction_UABCatalog_GetChildCategories, "GetChildCategories" }, // 1146676251
		{ &Z_Construct_UFunction_UABCatalog_GetDescendantCategories, "GetDescendantCategories" }, // 2161974400
		{ &Z_Construct_UFunction_UABCatalog_GetItemByAppId, "GetItemByAppId" }, // 4116243512
		{ &Z_Construct_UFunction_UABCatalog_GetItemById, "GetItemById" }, // 3733814586
		{ &Z_Construct_UFunction_UABCatalog_GetItemDynamicData, "GetItemDynamicData" }, // 2897571513
		{ &Z_Construct_UFunction_UABCatalog_GetItemsByCriteria, "GetItemsByCriteria" }, // 3187722168
		{ &Z_Construct_UFunction_UABCatalog_GetRootCategories, "GetRootCategories" }, // 3979945539
		{ &Z_Construct_UFunction_UABCatalog_SearchItem, "SearchItem" }, // 3186849082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCatalog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCatalog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCatalog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCatalog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCatalog_Statics::ClassParams = {
		&UABCatalog::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABCatalog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCatalog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCatalog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCatalog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCatalog, 1859611230);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCatalog>()
	{
		return UABCatalog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCatalog(Z_Construct_UClass_UABCatalog, &UABCatalog::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABCatalog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCatalog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
