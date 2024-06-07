// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABEntitlement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABEntitlement() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABEntitlement_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABEntitlement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAttributes();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsDistributionReceiverResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementPagingSlicedResultResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileApple();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformSyncMobileGoogleResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSyncBase();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsTwitchDropEntitlement();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformValidateUserItemPurchaseResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABEntitlement::execConsumeUserEntitlement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UseCount);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeUserEntitlement(Z_Param_EntitlementId,Z_Param_Out_UseCount,FDAccelByteModelsEntitlementInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execCreateDistributionReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
		P_GET_STRUCT_REF(FAccelByteModelsAttributes,Z_Param_Out_Attributes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDistributionReceiver(Z_Param_ExtUserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execDeleteDistributionReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteDistributionReceiver(Z_Param_ExtUserId,Z_Param_UserId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetDistributionReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PublisherNamespace);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublisherUserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDistributionReceiver(Z_Param_PublisherNamespace,Z_Param_PublisherUserId,FDArrayModelsDistributionReceiverResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Entitlementid);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementById(Z_Param_Entitlementid,FDAccelByteModelsEntitlementInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipAny)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ItemIds);
		P_GET_TARRAY_REF(FString,Z_Param_Out_AppIds);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Skus);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementOwnershipAny(Z_Param_Out_ItemIds,Z_Param_Out_AppIds,Z_Param_Out_Skus,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipByAppId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementOwnershipByAppId(Z_Param_AppId,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipByItemId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementOwnershipByItemId(Z_Param_ItemId,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execGetUserEntitlementOwnershipBySku)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Sku);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserEntitlementOwnershipBySku(Z_Param_Sku,FDAccelByteModelsEntitlementOwnershipResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execQueryUserEntitlements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ItemIds);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_ENUM(EAccelByteEntitlementClass,Z_Param_EntitlementClass);
		P_GET_ENUM(EAccelByteAppType,Z_Param_AppType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryUserEntitlements(Z_Param_EntitlementName,Z_Param_Out_ItemIds,Z_Param_Out_Offset,Z_Param_Out_Limit,FDAccelByteModelsEntitlementPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),EAccelByteEntitlementClass(Z_Param_EntitlementClass),EAccelByteAppType(Z_Param_AppType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseApple)
	{
		P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileApple,Z_Param_Out_SyncRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncMobilePlatformPurchaseApple(Z_Param_Out_SyncRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseGoogle)
	{
		P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileGoogle,Z_Param_Out_SyncRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncMobilePlatformPurchaseGoogle(Z_Param_Out_SyncRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncMobilePlatformPurchaseGooglePlay)
	{
		P_GET_STRUCT_REF(FAccelByteModelsPlatformSyncMobileGoogle,Z_Param_Out_SyncRequest);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncMobilePlatformPurchaseGooglePlay(Z_Param_Out_SyncRequest,FDAccelByteModelsPlatformSyncMobileGoogleResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncPlatformPurchase)
	{
		P_GET_ENUM(EAccelBytePlatformSync,Z_Param_PlatformType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncPlatformPurchase(EAccelBytePlatformSync(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncPlatformPurchaseSingleItem)
	{
		P_GET_STRUCT(FAccelByteModelsEntitlementSyncBase,Z_Param_EntitlementSyncBase);
		P_GET_ENUM(EAccelBytePlatformSync,Z_Param_PlatformType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncPlatformPurchaseSingleItem(Z_Param_EntitlementSyncBase,EAccelBytePlatformSync(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execSyncTwitchDropEntitlement)
	{
		P_GET_STRUCT_REF(FAccelByteModelsTwitchDropEntitlement,Z_Param_Out_TwitchDropModel);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncTwitchDropEntitlement(Z_Param_Out_TwitchDropModel,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execUpdateDistributionReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtUserId);
		P_GET_STRUCT_REF(FAccelByteModelsAttributes,Z_Param_Out_Attributes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDistributionReceiver(Z_Param_ExtUserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABEntitlement::execValidateUserItemPurchaseCondition)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Items);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateUserItemPurchaseCondition(Z_Param_Out_Items,FDAccelByteModelsPlatformValidateUserItemPurchaseResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABEntitlement::StaticRegisterNativesUABEntitlement()
	{
		UClass* Class = UABEntitlement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeUserEntitlement", &UABEntitlement::execConsumeUserEntitlement },
			{ "CreateDistributionReceiver", &UABEntitlement::execCreateDistributionReceiver },
			{ "DeleteDistributionReceiver", &UABEntitlement::execDeleteDistributionReceiver },
			{ "GetDistributionReceiver", &UABEntitlement::execGetDistributionReceiver },
			{ "GetUserEntitlementById", &UABEntitlement::execGetUserEntitlementById },
			{ "GetUserEntitlementOwnershipAny", &UABEntitlement::execGetUserEntitlementOwnershipAny },
			{ "GetUserEntitlementOwnershipByAppId", &UABEntitlement::execGetUserEntitlementOwnershipByAppId },
			{ "GetUserEntitlementOwnershipByItemId", &UABEntitlement::execGetUserEntitlementOwnershipByItemId },
			{ "GetUserEntitlementOwnershipBySku", &UABEntitlement::execGetUserEntitlementOwnershipBySku },
			{ "QueryUserEntitlements", &UABEntitlement::execQueryUserEntitlements },
			{ "SyncMobilePlatformPurchaseApple", &UABEntitlement::execSyncMobilePlatformPurchaseApple },
			{ "SyncMobilePlatformPurchaseGoogle", &UABEntitlement::execSyncMobilePlatformPurchaseGoogle },
			{ "SyncMobilePlatformPurchaseGooglePlay", &UABEntitlement::execSyncMobilePlatformPurchaseGooglePlay },
			{ "SyncPlatformPurchase", &UABEntitlement::execSyncPlatformPurchase },
			{ "SyncPlatformPurchaseSingleItem", &UABEntitlement::execSyncPlatformPurchaseSingleItem },
			{ "SyncTwitchDropEntitlement", &UABEntitlement::execSyncTwitchDropEntitlement },
			{ "UpdateDistributionReceiver", &UABEntitlement::execUpdateDistributionReceiver },
			{ "ValidateUserItemPurchaseCondition", &UABEntitlement::execValidateUserItemPurchaseCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics
	{
		struct ABEntitlement_eventConsumeUserEntitlement_Parms
		{
			FString EntitlementId;
			int32 UseCount;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, EntitlementId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, UseCount), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventConsumeUserEntitlement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_EntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "ConsumeUserEntitlement", nullptr, nullptr, sizeof(ABEntitlement_eventConsumeUserEntitlement_Parms), Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics
	{
		struct ABEntitlement_eventCreateDistributionReceiver_Parms
		{
			FString ExtUserId;
			FAccelByteModelsAttributes Attributes;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, Attributes), Z_Construct_UScriptStruct_FAccelByteModelsAttributes, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventCreateDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_ExtUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "CreateDistributionReceiver", nullptr, nullptr, sizeof(ABEntitlement_eventCreateDistributionReceiver_Parms), Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics
	{
		struct ABEntitlement_eventDeleteDistributionReceiver_Parms
		{
			FString ExtUserId;
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventDeleteDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_ExtUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "DeleteDistributionReceiver", nullptr, nullptr, sizeof(ABEntitlement_eventDeleteDistributionReceiver_Parms), Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics
	{
		struct ABEntitlement_eventGetDistributionReceiver_Parms
		{
			FString PublisherNamespace;
			FString PublisherUserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublisherNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublisherNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublisherUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublisherUserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace = { "PublisherNamespace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, PublisherNamespace), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId = { "PublisherUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, PublisherUserId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsDistributionReceiverResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_PublisherUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetDistributionReceiver", nullptr, nullptr, sizeof(ABEntitlement_eventGetDistributionReceiver_Parms), Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics
	{
		struct ABEntitlement_eventGetUserEntitlementById_Parms
		{
			FString Entitlementid;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entitlementid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Entitlementid;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid = { "Entitlementid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, Entitlementid), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementInfoResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementById_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_Entitlementid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementById", nullptr, nullptr, sizeof(ABEntitlement_eventGetUserEntitlementById_Parms), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics
	{
		struct ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms
		{
			TArray<FString> ItemIds;
			TArray<FString> AppIds;
			TArray<FString> Skus;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Skus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skus;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_Inner = { "ItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, ItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_Inner = { "AppIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds = { "AppIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, AppIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_Inner = { "Skus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus = { "Skus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, Skus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_ItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_AppIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_Skus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipAny", nullptr, nullptr, sizeof(ABEntitlement_eventGetUserEntitlementOwnershipAny_Parms), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics
	{
		struct ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms
		{
			FString AppId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, AppId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipByAppId", nullptr, nullptr, sizeof(ABEntitlement_eventGetUserEntitlementOwnershipByAppId_Parms), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics
	{
		struct ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipByItemId", nullptr, nullptr, sizeof(ABEntitlement_eventGetUserEntitlementOwnershipByItemId_Parms), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics
	{
		struct ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms
		{
			FString Sku;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sku;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, Sku), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementOwnershipResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_Sku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "GetUserEntitlementOwnershipBySku", nullptr, nullptr, sizeof(ABEntitlement_eventGetUserEntitlementOwnershipBySku_Parms), Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics
	{
		struct ABEntitlement_eventQueryUserEntitlements_Parms
		{
			FString EntitlementName;
			TArray<FString> ItemIds;
			int32 Offset;
			int32 Limit;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			EAccelByteEntitlementClass EntitlementClass;
			EAccelByteAppType AppType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntitlementClass_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntitlementClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName = { "EntitlementName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, EntitlementName), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_Inner = { "ItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, ItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass = { "EntitlementClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, EntitlementClass), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventQueryUserEntitlements_Parms, AppType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_ItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_EntitlementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::NewProp_AppType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "QueryUserEntitlements", nullptr, nullptr, sizeof(ABEntitlement_eventQueryUserEntitlements_Parms), Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics
	{
		struct ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms
		{
			FAccelByteModelsPlatformSyncMobileApple SyncRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileApple, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_SyncRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseApple", nullptr, nullptr, sizeof(ABEntitlement_eventSyncMobilePlatformPurchaseApple_Parms), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics
	{
		struct ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms
		{
			FAccelByteModelsPlatformSyncMobileGoogle SyncRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_SyncRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseGoogle", nullptr, nullptr, sizeof(ABEntitlement_eventSyncMobilePlatformPurchaseGoogle_Parms), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics
	{
		struct ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms
		{
			FAccelByteModelsPlatformSyncMobileGoogle SyncRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncRequest;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest = { "SyncRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, SyncRequest), Z_Construct_UScriptStruct_FAccelByteModelsPlatformSyncMobileGoogle, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformSyncMobileGoogleResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_SyncRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncMobilePlatformPurchaseGooglePlay", nullptr, nullptr, sizeof(ABEntitlement_eventSyncMobilePlatformPurchaseGooglePlay_Parms), Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics
	{
		struct ABEntitlement_eventSyncPlatformPurchase_Parms
		{
			EAccelBytePlatformSync PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchase_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncPlatformPurchase", nullptr, nullptr, sizeof(ABEntitlement_eventSyncPlatformPurchase_Parms), Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics
	{
		struct ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms
		{
			FAccelByteModelsEntitlementSyncBase EntitlementSyncBase;
			EAccelBytePlatformSync PlatformType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntitlementSyncBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_EntitlementSyncBase = { "EntitlementSyncBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, EntitlementSyncBase), Z_Construct_UScriptStruct_FAccelByteModelsEntitlementSyncBase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformSync, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_EntitlementSyncBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncPlatformPurchaseSingleItem", nullptr, nullptr, sizeof(ABEntitlement_eventSyncPlatformPurchaseSingleItem_Parms), Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics
	{
		struct ABEntitlement_eventSyncTwitchDropEntitlement_Parms
		{
			FAccelByteModelsTwitchDropEntitlement TwitchDropModel;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwitchDropModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwitchDropModel;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel = { "TwitchDropModel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, TwitchDropModel), Z_Construct_UScriptStruct_FAccelByteModelsTwitchDropEntitlement, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventSyncTwitchDropEntitlement_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_TwitchDropModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "SyncTwitchDropEntitlement", nullptr, nullptr, sizeof(ABEntitlement_eventSyncTwitchDropEntitlement_Parms), Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics
	{
		struct ABEntitlement_eventUpdateDistributionReceiver_Parms
		{
			FString ExtUserId;
			FAccelByteModelsAttributes Attributes;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId = { "ExtUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, ExtUserId), METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, Attributes), Z_Construct_UScriptStruct_FAccelByteModelsAttributes, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventUpdateDistributionReceiver_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_ExtUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "UpdateDistributionReceiver", nullptr, nullptr, sizeof(ABEntitlement_eventUpdateDistributionReceiver_Parms), Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics
	{
		struct ABEntitlement_eventValidateUserItemPurchaseCondition_Parms
		{
			TArray<FString> Items;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsPlatformValidateUserItemPurchaseResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABEntitlement, nullptr, "ValidateUserItemPurchaseCondition", nullptr, nullptr, sizeof(ABEntitlement_eventValidateUserItemPurchaseCondition_Parms), Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABEntitlement_NoRegister()
	{
		return UABEntitlement::StaticClass();
	}
	struct Z_Construct_UClass_UABEntitlement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABEntitlement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABEntitlement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABEntitlement_ConsumeUserEntitlement, "ConsumeUserEntitlement" }, // 3046329932
		{ &Z_Construct_UFunction_UABEntitlement_CreateDistributionReceiver, "CreateDistributionReceiver" }, // 300413121
		{ &Z_Construct_UFunction_UABEntitlement_DeleteDistributionReceiver, "DeleteDistributionReceiver" }, // 2507300746
		{ &Z_Construct_UFunction_UABEntitlement_GetDistributionReceiver, "GetDistributionReceiver" }, // 507515207
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementById, "GetUserEntitlementById" }, // 2019812591
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipAny, "GetUserEntitlementOwnershipAny" }, // 1343102126
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByAppId, "GetUserEntitlementOwnershipByAppId" }, // 2114721683
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipByItemId, "GetUserEntitlementOwnershipByItemId" }, // 1570642875
		{ &Z_Construct_UFunction_UABEntitlement_GetUserEntitlementOwnershipBySku, "GetUserEntitlementOwnershipBySku" }, // 401234491
		{ &Z_Construct_UFunction_UABEntitlement_QueryUserEntitlements, "QueryUserEntitlements" }, // 1586050855
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseApple, "SyncMobilePlatformPurchaseApple" }, // 1259708723
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGoogle, "SyncMobilePlatformPurchaseGoogle" }, // 200778153
		{ &Z_Construct_UFunction_UABEntitlement_SyncMobilePlatformPurchaseGooglePlay, "SyncMobilePlatformPurchaseGooglePlay" }, // 2193005814
		{ &Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchase, "SyncPlatformPurchase" }, // 4168289174
		{ &Z_Construct_UFunction_UABEntitlement_SyncPlatformPurchaseSingleItem, "SyncPlatformPurchaseSingleItem" }, // 2490696975
		{ &Z_Construct_UFunction_UABEntitlement_SyncTwitchDropEntitlement, "SyncTwitchDropEntitlement" }, // 2997310567
		{ &Z_Construct_UFunction_UABEntitlement_UpdateDistributionReceiver, "UpdateDistributionReceiver" }, // 2630500926
		{ &Z_Construct_UFunction_UABEntitlement_ValidateUserItemPurchaseCondition, "ValidateUserItemPurchaseCondition" }, // 2440924866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABEntitlement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABEntitlement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABEntitlement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABEntitlement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABEntitlement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABEntitlement_Statics::ClassParams = {
		&UABEntitlement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABEntitlement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABEntitlement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABEntitlement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABEntitlement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABEntitlement, 3356096000);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABEntitlement>()
	{
		return UABEntitlement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABEntitlement(Z_Construct_UClass_UABEntitlement, &UABEntitlement::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABEntitlement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABEntitlement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
