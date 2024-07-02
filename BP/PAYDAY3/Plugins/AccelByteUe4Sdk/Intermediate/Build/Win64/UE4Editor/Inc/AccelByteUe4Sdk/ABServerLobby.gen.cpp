// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerLobby() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerLobby_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerLobby();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockedUserResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockerResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDataPartyResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeAllResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadModifier__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABServerLobby::execGetListOfBlockedUsers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetListOfBlockedUsers(Z_Param_UserId,FDListBlockedUserResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execGetListOfBlockers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetListOfBlockers(Z_Param_UserId,FDListBlockerResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execGetPartyDataByUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartyDataByUserId(Z_Param_UserId,FDDataPartyResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execGetPartyStorage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPartyStorage(Z_Param_PartyId,FDPartyDataNotifDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execGetSessionAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSessionAttribute(Z_Param_UserId,Z_Param_Key,FDSessionAttributeResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execGetSessionAttributeAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSessionAttributeAll(Z_Param_UserId,FDSessionAttributeAllResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execSetSessionAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Attributes);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionAttribute(Z_Param_UserId,Z_Param_Out_Attributes,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execSetSessionAttributeString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionAttributeString(Z_Param_UserId,Z_Param_Key,Z_Param_Value,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerLobby::execWritePartyStorage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartyId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_PayloadModifier);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RetryAttempt);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WritePartyStorage(Z_Param_PartyId,FDPayloadModifier(Z_Param_PayloadModifier),Z_Param_Out_RetryAttempt,FDPartyDataNotifDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABServerLobby::StaticRegisterNativesUABServerLobby()
	{
		UClass* Class = UABServerLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetListOfBlockedUsers", &UABServerLobby::execGetListOfBlockedUsers },
			{ "GetListOfBlockers", &UABServerLobby::execGetListOfBlockers },
			{ "GetPartyDataByUserId", &UABServerLobby::execGetPartyDataByUserId },
			{ "GetPartyStorage", &UABServerLobby::execGetPartyStorage },
			{ "GetSessionAttribute", &UABServerLobby::execGetSessionAttribute },
			{ "GetSessionAttributeAll", &UABServerLobby::execGetSessionAttributeAll },
			{ "SetSessionAttribute", &UABServerLobby::execSetSessionAttribute },
			{ "SetSessionAttributeString", &UABServerLobby::execSetSessionAttributeString },
			{ "WritePartyStorage", &UABServerLobby::execWritePartyStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics
	{
		struct ABServerLobby_eventGetListOfBlockedUsers_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockedUserResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockedUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetListOfBlockedUsers", nullptr, nullptr, sizeof(ABServerLobby_eventGetListOfBlockedUsers_Parms), Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics
	{
		struct ABServerLobby_eventGetListOfBlockers_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListBlockerResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetListOfBlockers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetListOfBlockers", nullptr, nullptr, sizeof(ABServerLobby_eventGetListOfBlockers_Parms), Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetListOfBlockers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetListOfBlockers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics
	{
		struct ABServerLobby_eventGetPartyDataByUserId_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDataPartyResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyDataByUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetPartyDataByUserId", nullptr, nullptr, sizeof(ABServerLobby_eventGetPartyDataByUserId_Parms), Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics
	{
		struct ABServerLobby_eventGetPartyStorage_Parms
		{
			FString PartyId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, PartyId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetPartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetPartyStorage", nullptr, nullptr, sizeof(ABServerLobby_eventGetPartyStorage_Parms), Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetPartyStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetPartyStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics
	{
		struct ABServerLobby_eventGetSessionAttribute_Parms
		{
			FString UserId;
			FString Key;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetSessionAttribute", nullptr, nullptr, sizeof(ABServerLobby_eventGetSessionAttribute_Parms), Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetSessionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetSessionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics
	{
		struct ABServerLobby_eventGetSessionAttributeAll_Parms
		{
			FString UserId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSessionAttributeAllResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventGetSessionAttributeAll_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "GetSessionAttributeAll", nullptr, nullptr, sizeof(ABServerLobby_eventGetSessionAttributeAll_Parms), Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics
	{
		struct ABServerLobby_eventSetSessionAttribute_Parms
		{
			FString UserId;
			TMap<FString,FString> Attributes;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "SetSessionAttribute", nullptr, nullptr, sizeof(ABServerLobby_eventSetSessionAttribute_Parms), Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_SetSessionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_SetSessionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics
	{
		struct ABServerLobby_eventSetSessionAttributeString_Parms
		{
			FString UserId;
			FString Key;
			FString Value;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventSetSessionAttributeString_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "SetSessionAttributeString", nullptr, nullptr, sizeof(ABServerLobby_eventSetSessionAttributeString_Parms), Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics
	{
		struct ABServerLobby_eventWritePartyStorage_Parms
		{
			FString PartyId;
			FScriptDelegate PayloadModifier;
			int32 RetryAttempt;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PayloadModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryAttempt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetryAttempt;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, PartyId), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PayloadModifier = { "PayloadModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, PayloadModifier), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPayloadModifier__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt = { "RetryAttempt", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, RetryAttempt), METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyDataNotifDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerLobby_eventWritePartyStorage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_PayloadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_RetryAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerLobby, nullptr, "WritePartyStorage", nullptr, nullptr, sizeof(ABServerLobby_eventWritePartyStorage_Parms), Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerLobby_WritePartyStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerLobby_WritePartyStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerLobby_NoRegister()
	{
		return UABServerLobby::StaticClass();
	}
	struct Z_Construct_UClass_UABServerLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerLobby_GetListOfBlockedUsers, "GetListOfBlockedUsers" }, // 2327665139
		{ &Z_Construct_UFunction_UABServerLobby_GetListOfBlockers, "GetListOfBlockers" }, // 2910394115
		{ &Z_Construct_UFunction_UABServerLobby_GetPartyDataByUserId, "GetPartyDataByUserId" }, // 2729750098
		{ &Z_Construct_UFunction_UABServerLobby_GetPartyStorage, "GetPartyStorage" }, // 3247363728
		{ &Z_Construct_UFunction_UABServerLobby_GetSessionAttribute, "GetSessionAttribute" }, // 2894091691
		{ &Z_Construct_UFunction_UABServerLobby_GetSessionAttributeAll, "GetSessionAttributeAll" }, // 2736606397
		{ &Z_Construct_UFunction_UABServerLobby_SetSessionAttribute, "SetSessionAttribute" }, // 2471060562
		{ &Z_Construct_UFunction_UABServerLobby_SetSessionAttributeString, "SetSessionAttributeString" }, // 3073723827
		{ &Z_Construct_UFunction_UABServerLobby_WritePartyStorage, "WritePartyStorage" }, // 1708260698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerLobby.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerLobby_Statics::ClassParams = {
		&UABServerLobby::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerLobby, 3355469399);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerLobby>()
	{
		return UABServerLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerLobby(Z_Construct_UClass_UABServerLobby, &UABServerLobby::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
