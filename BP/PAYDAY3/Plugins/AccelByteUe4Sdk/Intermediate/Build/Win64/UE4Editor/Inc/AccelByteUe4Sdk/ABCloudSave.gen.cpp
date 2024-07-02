// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCloudSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCloudSave() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCloudSave_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCloudSave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedBulkGetPublicUserRecordKeysResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameRecord__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadJsonObject__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsReplaceUserRecordResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABCloudSave::execBulkGetGameRecords)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetGameRecords(Z_Param_Out_Keys,FDModelsListGameRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execBulkGetOtherPlayerPublicRecordKeys)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetOtherPlayerPublicRecordKeys(Z_Param_UserId,FDModelsPaginatedBulkGetPublicUserRecordKeysResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execBulkGetOtherPlayerPublicRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetOtherPlayerPublicRecords(Z_Param_UserId,Z_Param_Out_Keys,FDModelsListUserRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execBulkGetUserRecords)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetUserRecords(Z_Param_Out_Keys,FDModelsListUserRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execDeleteGameRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteGameRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execDeleteUserRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteUserRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execGetGameRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameRecord(Z_Param_Key,FDModelsGameRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execGetPublicUserRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublicUserRecord(Z_Param_Key,Z_Param_UserId,FDModelsUserRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execGetUserRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserRecord(Z_Param_Key,FDModelsUserRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceGameRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceGameRecord(Z_Param_Key,Z_Param_RecordRequest,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceGameRecordCheckLatest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FDateTime,Z_Param_LastUpdated);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceGameRecordCheckLatest(Z_Param_Key,Z_Param_LastUpdated,Z_Param_RecordRequest,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceGameRecordCheckLatestRetry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TryAttempt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PayloadModifier);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceGameRecordCheckLatestRetry(Z_Param_TryAttempt,Z_Param_Key,Z_Param_RecordRequest,FDPayloadJsonObject(Z_Param_Out_PayloadModifier),FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceUserRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_UBOOL(Z_Param_IsPublic);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserRecord(Z_Param_Key,Z_Param_RecordRequest,Z_Param_IsPublic,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceUserRecordCheckLatest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FDateTime,Z_Param_LastUpdated);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserRecordCheckLatest(Z_Param_Key,Z_Param_LastUpdated,Z_Param_RecordRequest,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceUserRecordCheckLatestRetry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TryAttempt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PayloadModifier);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserRecordCheckLatestRetry(Z_Param_TryAttempt,Z_Param_Key,Z_Param_RecordRequest,FDPayloadJsonObject(Z_Param_Out_PayloadModifier),FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceUserRecordCheckLatestRetryWithResponse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TryAttempt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PayloadModifier);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserRecordCheckLatestRetryWithResponse(Z_Param_TryAttempt,Z_Param_Key,Z_Param_RecordRequest,FDPayloadJsonObject(Z_Param_Out_PayloadModifier),FDModelsReplaceUserRecordResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execReplaceUserRecordCheckLatestWithResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FDateTime,Z_Param_LastUpdated);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserRecordCheckLatestWithResponse(Z_Param_Key,Z_Param_LastUpdated,Z_Param_RecordRequest,FDModelsReplaceUserRecordResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execSaveGameRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGameRecord(Z_Param_Key,Z_Param_RecordRequest,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCloudSave::execSaveUserRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_RecordRequest);
		P_GET_UBOOL(Z_Param_IsPublic);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveUserRecord(Z_Param_Key,Z_Param_RecordRequest,Z_Param_IsPublic,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABCloudSave::StaticRegisterNativesUABCloudSave()
	{
		UClass* Class = UABCloudSave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkGetGameRecords", &UABCloudSave::execBulkGetGameRecords },
			{ "BulkGetOtherPlayerPublicRecordKeys", &UABCloudSave::execBulkGetOtherPlayerPublicRecordKeys },
			{ "BulkGetOtherPlayerPublicRecords", &UABCloudSave::execBulkGetOtherPlayerPublicRecords },
			{ "BulkGetUserRecords", &UABCloudSave::execBulkGetUserRecords },
			{ "DeleteGameRecord", &UABCloudSave::execDeleteGameRecord },
			{ "DeleteUserRecord", &UABCloudSave::execDeleteUserRecord },
			{ "GetGameRecord", &UABCloudSave::execGetGameRecord },
			{ "GetPublicUserRecord", &UABCloudSave::execGetPublicUserRecord },
			{ "GetUserRecord", &UABCloudSave::execGetUserRecord },
			{ "ReplaceGameRecord", &UABCloudSave::execReplaceGameRecord },
			{ "ReplaceGameRecordCheckLatest", &UABCloudSave::execReplaceGameRecordCheckLatest },
			{ "ReplaceGameRecordCheckLatestRetry", &UABCloudSave::execReplaceGameRecordCheckLatestRetry },
			{ "ReplaceUserRecord", &UABCloudSave::execReplaceUserRecord },
			{ "ReplaceUserRecordCheckLatest", &UABCloudSave::execReplaceUserRecordCheckLatest },
			{ "ReplaceUserRecordCheckLatestRetry", &UABCloudSave::execReplaceUserRecordCheckLatestRetry },
			{ "ReplaceUserRecordCheckLatestRetryWithResponse", &UABCloudSave::execReplaceUserRecordCheckLatestRetryWithResponse },
			{ "ReplaceUserRecordCheckLatestWithResponse", &UABCloudSave::execReplaceUserRecordCheckLatestWithResponse },
			{ "SaveGameRecord", &UABCloudSave::execSaveGameRecord },
			{ "SaveUserRecord", &UABCloudSave::execSaveUserRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics
	{
		struct ABCloudSave_eventBulkGetGameRecords_Parms
		{
			TArray<FString> Keys;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetGameRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetGameRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetGameRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "BulkGetGameRecords", nullptr, nullptr, sizeof(ABCloudSave_eventBulkGetGameRecords_Parms), Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics
	{
		struct ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedBulkGetPublicUserRecordKeysResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "BulkGetOtherPlayerPublicRecordKeys", nullptr, nullptr, sizeof(ABCloudSave_eventBulkGetOtherPlayerPublicRecordKeys_Parms), Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics
	{
		struct ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms
		{
			FString UserId;
			TArray<FString> Keys;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "BulkGetOtherPlayerPublicRecords", nullptr, nullptr, sizeof(ABCloudSave_eventBulkGetOtherPlayerPublicRecords_Parms), Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics
	{
		struct ABCloudSave_eventBulkGetUserRecords_Parms
		{
			TArray<FString> Keys;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetUserRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetUserRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventBulkGetUserRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "BulkGetUserRecords", nullptr, nullptr, sizeof(ABCloudSave_eventBulkGetUserRecords_Parms), Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics
	{
		struct ABCloudSave_eventDeleteGameRecord_Parms
		{
			FString Key;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteGameRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "DeleteGameRecord", nullptr, nullptr, sizeof(ABCloudSave_eventDeleteGameRecord_Parms), Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_DeleteGameRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_DeleteGameRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics
	{
		struct ABCloudSave_eventDeleteUserRecord_Parms
		{
			FString Key;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteUserRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventDeleteUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "DeleteUserRecord", nullptr, nullptr, sizeof(ABCloudSave_eventDeleteUserRecord_Parms), Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_DeleteUserRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_DeleteUserRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics
	{
		struct ABCloudSave_eventGetGameRecord_Parms
		{
			FString Key;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetGameRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "GetGameRecord", nullptr, nullptr, sizeof(ABCloudSave_eventGetGameRecord_Parms), Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_GetGameRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_GetGameRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics
	{
		struct ABCloudSave_eventGetPublicUserRecord_Parms
		{
			FString Key;
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetPublicUserRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetPublicUserRecord_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetPublicUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetPublicUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "GetPublicUserRecord", nullptr, nullptr, sizeof(ABCloudSave_eventGetPublicUserRecord_Parms), Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics
	{
		struct ABCloudSave_eventGetUserRecord_Parms
		{
			FString Key;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetUserRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventGetUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "GetUserRecord", nullptr, nullptr, sizeof(ABCloudSave_eventGetUserRecord_Parms), Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_GetUserRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_GetUserRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics
	{
		struct ABCloudSave_eventReplaceGameRecord_Parms
		{
			FString Key;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecord_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceGameRecord", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceGameRecord_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics
	{
		struct ABCloudSave_eventReplaceGameRecordCheckLatest_Parms
		{
			FString Key;
			FDateTime LastUpdated;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastUpdated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms, LastUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_LastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceGameRecordCheckLatest", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceGameRecordCheckLatest_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics
	{
		struct ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms
		{
			int32 TryAttempt;
			FString Key;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate PayloadModifier;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TryAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PayloadModifier;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_TryAttempt = { "TryAttempt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, TryAttempt), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_PayloadModifier = { "PayloadModifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, PayloadModifier), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadJsonObject__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_TryAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_PayloadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceGameRecordCheckLatestRetry", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceGameRecordCheckLatestRetry_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics
	{
		struct ABCloudSave_eventReplaceUserRecord_Parms
		{
			FString Key;
			FJsonObjectWrapper RecordRequest;
			bool IsPublic;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
		static void NewProp_IsPublic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPublic;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecord_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_IsPublic_SetBit(void* Obj)
	{
		((ABCloudSave_eventReplaceUserRecord_Parms*)Obj)->IsPublic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_IsPublic = { "IsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCloudSave_eventReplaceUserRecord_Parms), &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_IsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_IsPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceUserRecord", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceUserRecord_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics
	{
		struct ABCloudSave_eventReplaceUserRecordCheckLatest_Parms
		{
			FString Key;
			FDateTime LastUpdated;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastUpdated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms, LastUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_LastUpdated_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_LastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceUserRecordCheckLatest", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceUserRecordCheckLatest_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics
	{
		struct ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms
		{
			int32 TryAttempt;
			FString Key;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate PayloadModifier;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TryAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PayloadModifier;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_TryAttempt = { "TryAttempt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, TryAttempt), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_PayloadModifier = { "PayloadModifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, PayloadModifier), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadJsonObject__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_PayloadModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_TryAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_PayloadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceUserRecordCheckLatestRetry", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceUserRecordCheckLatestRetry_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics
	{
		struct ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms
		{
			int32 TryAttempt;
			FString Key;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate PayloadModifier;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TryAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PayloadModifier;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_TryAttempt = { "TryAttempt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, TryAttempt), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_PayloadModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_PayloadModifier = { "PayloadModifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, PayloadModifier), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadJsonObject__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_PayloadModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_PayloadModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsReplaceUserRecordResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_TryAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_PayloadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceUserRecordCheckLatestRetryWithResponse", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceUserRecordCheckLatestRetryWithResponse_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics
	{
		struct ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms
		{
			FString Key;
			FDateTime LastUpdated;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastUpdated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_LastUpdated = { "LastUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms, LastUpdated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsReplaceUserRecordResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_LastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "ReplaceUserRecordCheckLatestWithResponse", nullptr, nullptr, sizeof(ABCloudSave_eventReplaceUserRecordCheckLatestWithResponse_Parms), Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics
	{
		struct ABCloudSave_eventSaveGameRecord_Parms
		{
			FString Key;
			FJsonObjectWrapper RecordRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveGameRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveGameRecord_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveGameRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveGameRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "SaveGameRecord", nullptr, nullptr, sizeof(ABCloudSave_eventSaveGameRecord_Parms), Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_SaveGameRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_SaveGameRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics
	{
		struct ABCloudSave_eventSaveUserRecord_Parms
		{
			FString Key;
			FJsonObjectWrapper RecordRequest;
			bool IsPublic;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordRequest;
		static void NewProp_IsPublic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPublic;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveUserRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_RecordRequest = { "RecordRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveUserRecord_Parms, RecordRequest), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_IsPublic_SetBit(void* Obj)
	{
		((ABCloudSave_eventSaveUserRecord_Parms*)Obj)->IsPublic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_IsPublic = { "IsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCloudSave_eventSaveUserRecord_Parms), &Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_IsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveUserRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCloudSave_eventSaveUserRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_RecordRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_IsPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCloudSave, nullptr, "SaveUserRecord", nullptr, nullptr, sizeof(ABCloudSave_eventSaveUserRecord_Parms), Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCloudSave_SaveUserRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABCloudSave_SaveUserRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABCloudSave_NoRegister()
	{
		return UABCloudSave::StaticClass();
	}
	struct Z_Construct_UClass_UABCloudSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCloudSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABCloudSave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCloudSave_BulkGetGameRecords, "BulkGetGameRecords" }, // 3816897919
		{ &Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecordKeys, "BulkGetOtherPlayerPublicRecordKeys" }, // 3182727711
		{ &Z_Construct_UFunction_UABCloudSave_BulkGetOtherPlayerPublicRecords, "BulkGetOtherPlayerPublicRecords" }, // 1744225802
		{ &Z_Construct_UFunction_UABCloudSave_BulkGetUserRecords, "BulkGetUserRecords" }, // 2201070115
		{ &Z_Construct_UFunction_UABCloudSave_DeleteGameRecord, "DeleteGameRecord" }, // 3589429787
		{ &Z_Construct_UFunction_UABCloudSave_DeleteUserRecord, "DeleteUserRecord" }, // 3337380378
		{ &Z_Construct_UFunction_UABCloudSave_GetGameRecord, "GetGameRecord" }, // 868815831
		{ &Z_Construct_UFunction_UABCloudSave_GetPublicUserRecord, "GetPublicUserRecord" }, // 1874243660
		{ &Z_Construct_UFunction_UABCloudSave_GetUserRecord, "GetUserRecord" }, // 3883142284
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceGameRecord, "ReplaceGameRecord" }, // 1843678360
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatest, "ReplaceGameRecordCheckLatest" }, // 1740975332
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceGameRecordCheckLatestRetry, "ReplaceGameRecordCheckLatestRetry" }, // 42219132
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecord, "ReplaceUserRecord" }, // 427374946
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatest, "ReplaceUserRecordCheckLatest" }, // 4056835989
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetry, "ReplaceUserRecordCheckLatestRetry" }, // 369554312
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestRetryWithResponse, "ReplaceUserRecordCheckLatestRetryWithResponse" }, // 1784115231
		{ &Z_Construct_UFunction_UABCloudSave_ReplaceUserRecordCheckLatestWithResponse, "ReplaceUserRecordCheckLatestWithResponse" }, // 3583427842
		{ &Z_Construct_UFunction_UABCloudSave_SaveGameRecord, "SaveGameRecord" }, // 784290920
		{ &Z_Construct_UFunction_UABCloudSave_SaveUserRecord, "SaveUserRecord" }, // 63603286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCloudSave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCloudSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCloudSave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCloudSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCloudSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCloudSave_Statics::ClassParams = {
		&UABCloudSave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABCloudSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCloudSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCloudSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCloudSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCloudSave, 2341003576);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCloudSave>()
	{
		return UABCloudSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCloudSave(Z_Construct_UClass_UABCloudSave, &UABCloudSave::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABCloudSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCloudSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
