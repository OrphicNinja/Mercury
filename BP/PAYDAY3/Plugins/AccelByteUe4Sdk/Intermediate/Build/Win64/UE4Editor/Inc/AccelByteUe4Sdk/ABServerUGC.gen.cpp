// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerUGC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerUGC() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerUGC_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerUGC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCServerResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABServerUGC::execDeleteContentByShareCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteContentByShareCode(Z_Param_UserId,Z_Param_ChannelId,Z_Param_ShareCode,FDHandler(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerUGC::execModifyContentByShareCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ShareCode);
		P_GET_STRUCT_REF(FAccelByteModelsUGCUpdateRequest,Z_Param_Out_ModifyRequest);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyContentByShareCode(Z_Param_UserId,Z_Param_ChannelId,Z_Param_ShareCode,Z_Param_Out_ModifyRequest,FDModelsUGCServerResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerUGC::execSearchContents)
	{
		P_GET_STRUCT_REF(FAccelByteModelsUGCSearchContentsRequest,Z_Param_Out_Request);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchContents(Z_Param_Out_Request,FDModelsUGCSearchContentsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerUGC::execSearchContentsSpecificToChannel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelId);
		P_GET_STRUCT_REF(FAccelByteModelsUGCSearchContentsRequest,Z_Param_Out_Request);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchContentsSpecificToChannel(Z_Param_ChannelId,Z_Param_Out_Request,FDModelsUGCSearchContentsResponse(Z_Param_Out_OnSuccess),FDErrorHandler(Z_Param_Out_OnError),Z_Param_Limit,Z_Param_Offset);
		P_NATIVE_END;
	}
	void UABServerUGC::StaticRegisterNativesUABServerUGC()
	{
		UClass* Class = UABServerUGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteContentByShareCode", &UABServerUGC::execDeleteContentByShareCode },
			{ "ModifyContentByShareCode", &UABServerUGC::execModifyContentByShareCode },
			{ "SearchContents", &UABServerUGC::execSearchContents },
			{ "SearchContentsSpecificToChannel", &UABServerUGC::execSearchContentsSpecificToChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics
	{
		struct ABServerUGC_eventDeleteContentByShareCode_Parms
		{
			FString UserId;
			FString ChannelId;
			FString ShareCode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShareCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, ChannelId), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, ShareCode), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventDeleteContentByShareCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_ShareCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "DeleteContentByShareCode", nullptr, nullptr, sizeof(ABServerUGC_eventDeleteContentByShareCode_Parms), Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics
	{
		struct ABServerUGC_eventModifyContentByShareCode_Parms
		{
			FString UserId;
			FString ChannelId;
			FString ShareCode;
			FAccelByteModelsUGCUpdateRequest ModifyRequest;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShareCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifyRequest;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ChannelId), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ShareCode), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest = { "ModifyRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, ModifyRequest), Z_Construct_UScriptStruct_FAccelByteModelsUGCUpdateRequest, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCServerResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventModifyContentByShareCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ShareCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_ModifyRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "ModifyContentByShareCode", nullptr, nullptr, sizeof(ABServerUGC_eventModifyContentByShareCode_Parms), Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerUGC_SearchContents_Statics
	{
		struct ABServerUGC_eventSearchContents_Parms
		{
			FAccelByteModelsUGCSearchContentsRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Limit;
			int32 Offset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContents_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "SearchContents", nullptr, nullptr, sizeof(ABServerUGC_eventSearchContents_Parms), Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerUGC_SearchContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerUGC_SearchContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics
	{
		struct ABServerUGC_eventSearchContentsSpecificToChannel_Parms
		{
			FString ChannelId;
			FAccelByteModelsUGCSearchContentsRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
			int32 Limit;
			int32 Offset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, ChannelId), METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Request), Z_Construct_UScriptStruct_FAccelByteModelsUGCSearchContentsRequest, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsUGCSearchContentsResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerUGC_eventSearchContentsSpecificToChannel_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerUGC, nullptr, "SearchContentsSpecificToChannel", nullptr, nullptr, sizeof(ABServerUGC_eventSearchContentsSpecificToChannel_Parms), Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerUGC_NoRegister()
	{
		return UABServerUGC::StaticClass();
	}
	struct Z_Construct_UClass_UABServerUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerUGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerUGC_DeleteContentByShareCode, "DeleteContentByShareCode" }, // 3999566500
		{ &Z_Construct_UFunction_UABServerUGC_ModifyContentByShareCode, "ModifyContentByShareCode" }, // 3782769479
		{ &Z_Construct_UFunction_UABServerUGC_SearchContents, "SearchContents" }, // 3718271723
		{ &Z_Construct_UFunction_UABServerUGC_SearchContentsSpecificToChannel, "SearchContentsSpecificToChannel" }, // 1159362264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerUGC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerUGC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerUGC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerUGC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerUGC_Statics::ClassParams = {
		&UABServerUGC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerUGC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerUGC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerUGC, 516079572);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerUGC>()
	{
		return UABServerUGC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerUGC(Z_Construct_UClass_UABServerUGC, &UABServerUGC::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerUGC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerUGC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
