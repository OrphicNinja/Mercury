// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABBinaryCloudSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBinaryCloudSave() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBinaryCloudSave_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBinaryCloudSave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameBinaryRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGameBinaryRecords__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameBinaryRecord__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBinaryInfo__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetCurrentUserBinaryRecords)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetCurrentUserBinaryRecords(Z_Param_Out_Keys,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetGameBinaryRecords)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetGameBinaryRecords(Z_Param_Out_Keys,FDModelsListGameBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByKeys)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetPublicUserBinaryRecordsByKeys(Z_Param_Out_Keys,Z_Param_UserId,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByUserIds)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIds);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetPublicUserBinaryRecordsByUserIds(Z_Param_Key,Z_Param_Out_UserIds,FDModelsListUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryCurrentUserBinaryRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkQueryCurrentUserBinaryRecords(Z_Param_Query,FDModelsPaginatedUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryGameBinaryRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkQueryGameBinaryRecords(Z_Param_Query,FDModelsPaginatedGameBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execBulkQueryPublicUserBinaryRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkQueryPublicUserBinaryRecords(Z_Param_UserId,FDModelsPaginatedUserBinaryRecords(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Out_Offset,Z_Param_Out_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execDeleteUserBinaryRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteUserBinaryRecord(Z_Param_Key,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execGetCurrentUserBinaryRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentUserBinaryRecord(Z_Param_Key,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execGetGameBinaryRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameBinaryRecord(Z_Param_Key,FDModelsGameBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execGetPublicUserBinaryRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublicUserBinaryRecord(Z_Param_Key,Z_Param_UserId,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execRequestUserBinaryRecordPresignedUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestUserBinaryRecordPresignedUrl(Z_Param_Key,Z_Param_FileType,FDModelsBinaryInfo(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execSaveUserBinaryRecord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveUserBinaryRecord(Z_Param_Key,Z_Param_bIsPublic,Z_Param_FileType,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execUpdateUserBinaryRecordFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileLocation);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUserBinaryRecordFile(Z_Param_Key,Z_Param_FileType,Z_Param_FileLocation,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBinaryCloudSave::execUpdateUserBinaryRecordMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bIsPublic);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUserBinaryRecordMetadata(Z_Param_Key,Z_Param_bIsPublic,FDModelsUserBinaryRecord(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UABBinaryCloudSave::StaticRegisterNativesUABBinaryCloudSave()
	{
		UClass* Class = UABBinaryCloudSave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkGetCurrentUserBinaryRecords", &UABBinaryCloudSave::execBulkGetCurrentUserBinaryRecords },
			{ "BulkGetGameBinaryRecords", &UABBinaryCloudSave::execBulkGetGameBinaryRecords },
			{ "BulkGetPublicUserBinaryRecordsByKeys", &UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByKeys },
			{ "BulkGetPublicUserBinaryRecordsByUserIds", &UABBinaryCloudSave::execBulkGetPublicUserBinaryRecordsByUserIds },
			{ "BulkQueryCurrentUserBinaryRecords", &UABBinaryCloudSave::execBulkQueryCurrentUserBinaryRecords },
			{ "BulkQueryGameBinaryRecords", &UABBinaryCloudSave::execBulkQueryGameBinaryRecords },
			{ "BulkQueryPublicUserBinaryRecords", &UABBinaryCloudSave::execBulkQueryPublicUserBinaryRecords },
			{ "DeleteUserBinaryRecord", &UABBinaryCloudSave::execDeleteUserBinaryRecord },
			{ "GetCurrentUserBinaryRecord", &UABBinaryCloudSave::execGetCurrentUserBinaryRecord },
			{ "GetGameBinaryRecord", &UABBinaryCloudSave::execGetGameBinaryRecord },
			{ "GetPublicUserBinaryRecord", &UABBinaryCloudSave::execGetPublicUserBinaryRecord },
			{ "RequestUserBinaryRecordPresignedUrl", &UABBinaryCloudSave::execRequestUserBinaryRecordPresignedUrl },
			{ "SaveUserBinaryRecord", &UABBinaryCloudSave::execSaveUserBinaryRecord },
			{ "UpdateUserBinaryRecordFile", &UABBinaryCloudSave::execUpdateUserBinaryRecordFile },
			{ "UpdateUserBinaryRecordMetadata", &UABBinaryCloudSave::execUpdateUserBinaryRecordMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics
	{
		struct ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetCurrentUserBinaryRecords", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkGetCurrentUserBinaryRecords_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics
	{
		struct ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListGameBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetGameBinaryRecords", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkGetGameBinaryRecords_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics
	{
		struct ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms
		{
			TArray<FString> Keys;
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetPublicUserBinaryRecordsByKeys", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByKeys_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics
	{
		struct ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms
		{
			FString Key;
			TArray<FString> UserIds;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIds;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsListUserBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_UserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkGetPublicUserBinaryRecordsByUserIds", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkGetPublicUserBinaryRecordsByUserIds_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics
	{
		struct ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms
		{
			FString Query;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryCurrentUserBinaryRecords", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkQueryCurrentUserBinaryRecords_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics
	{
		struct ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms
		{
			FString Query;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedGameBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryGameBinaryRecords", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkQueryGameBinaryRecords_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics
	{
		struct ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPaginatedUserBinaryRecords__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, Offset), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "BulkQueryPublicUserBinaryRecords", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventBulkQueryPublicUserBinaryRecords_Parms), Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics
	{
		struct ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "DeleteUserBinaryRecord", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventDeleteUserBinaryRecord_Parms), Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics
	{
		struct ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetCurrentUserBinaryRecord", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventGetCurrentUserBinaryRecord_Parms), Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics
	{
		struct ABBinaryCloudSave_eventGetGameBinaryRecord_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsGameBinaryRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetGameBinaryRecord", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventGetGameBinaryRecord_Parms), Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics
	{
		struct ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "GetPublicUserBinaryRecord", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventGetPublicUserBinaryRecord_Parms), Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics
	{
		struct ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms
		{
			FString Key;
			FString FileType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, FileType), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsBinaryInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "RequestUserBinaryRecordPresignedUrl", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventRequestUserBinaryRecordPresignedUrl_Parms), Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics
	{
		struct ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms
		{
			FString Key;
			bool bIsPublic;
			FString FileType;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms*)Obj)->bIsPublic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms), &Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, FileType), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_bIsPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "SaveUserBinaryRecord", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventSaveUserBinaryRecord_Parms), Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics
	{
		struct ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms
		{
			FString Key;
			FString FileType;
			FString FileLocation;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileLocation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, FileType), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation = { "FileLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, FileLocation), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_FileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "UpdateUserBinaryRecordFile", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventUpdateUserBinaryRecordFile_Parms), Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics
	{
		struct ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms
		{
			FString Key;
			bool bIsPublic;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms*)Obj)->bIsPublic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms), &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUserBinaryRecord__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_bIsPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBinaryCloudSave, nullptr, "UpdateUserBinaryRecordMetadata", nullptr, nullptr, sizeof(ABBinaryCloudSave_eventUpdateUserBinaryRecordMetadata_Parms), Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABBinaryCloudSave_NoRegister()
	{
		return UABBinaryCloudSave::StaticClass();
	}
	struct Z_Construct_UClass_UABBinaryCloudSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABBinaryCloudSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABBinaryCloudSave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetCurrentUserBinaryRecords, "BulkGetCurrentUserBinaryRecords" }, // 3131524228
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetGameBinaryRecords, "BulkGetGameBinaryRecords" }, // 2800795628
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByKeys, "BulkGetPublicUserBinaryRecordsByKeys" }, // 2035715812
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkGetPublicUserBinaryRecordsByUserIds, "BulkGetPublicUserBinaryRecordsByUserIds" }, // 2699497513
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryCurrentUserBinaryRecords, "BulkQueryCurrentUserBinaryRecords" }, // 2337315260
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryGameBinaryRecords, "BulkQueryGameBinaryRecords" }, // 4230695855
		{ &Z_Construct_UFunction_UABBinaryCloudSave_BulkQueryPublicUserBinaryRecords, "BulkQueryPublicUserBinaryRecords" }, // 1642905234
		{ &Z_Construct_UFunction_UABBinaryCloudSave_DeleteUserBinaryRecord, "DeleteUserBinaryRecord" }, // 3103789214
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetCurrentUserBinaryRecord, "GetCurrentUserBinaryRecord" }, // 2787348737
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetGameBinaryRecord, "GetGameBinaryRecord" }, // 2234877903
		{ &Z_Construct_UFunction_UABBinaryCloudSave_GetPublicUserBinaryRecord, "GetPublicUserBinaryRecord" }, // 1248973851
		{ &Z_Construct_UFunction_UABBinaryCloudSave_RequestUserBinaryRecordPresignedUrl, "RequestUserBinaryRecordPresignedUrl" }, // 2578235469
		{ &Z_Construct_UFunction_UABBinaryCloudSave_SaveUserBinaryRecord, "SaveUserBinaryRecord" }, // 8398298
		{ &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordFile, "UpdateUserBinaryRecordFile" }, // 2157668237
		{ &Z_Construct_UFunction_UABBinaryCloudSave_UpdateUserBinaryRecordMetadata, "UpdateUserBinaryRecordMetadata" }, // 2495491527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABBinaryCloudSave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABBinaryCloudSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABBinaryCloudSave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABBinaryCloudSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABBinaryCloudSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABBinaryCloudSave_Statics::ClassParams = {
		&UABBinaryCloudSave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABBinaryCloudSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABBinaryCloudSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABBinaryCloudSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABBinaryCloudSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABBinaryCloudSave, 690075686);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABBinaryCloudSave>()
	{
		return UABBinaryCloudSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABBinaryCloudSave(Z_Construct_UClass_UABBinaryCloudSave, &UABBinaryCloudSave::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABBinaryCloudSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABBinaryCloudSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
