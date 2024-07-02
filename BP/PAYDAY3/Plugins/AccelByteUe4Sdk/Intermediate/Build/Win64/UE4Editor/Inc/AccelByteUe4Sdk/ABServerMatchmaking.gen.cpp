// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerMatchmaking() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerMatchmaking_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerMatchmaking();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult();
// End Cross Module References
	DEFINE_FUNCTION(UABServerMatchmaking::execActivateSessionStatusPolling)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntervalSec);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSessionStatusPolling(Z_Param_MatchId,Z_Param_IntervalSec,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execAddUserToSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalPartyId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUserToSession(Z_Param_ChannelName,Z_Param_MatchId,Z_Param_UserId,Z_Param_OptionalPartyId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execDeactivateStatusPolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateStatusPolling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execDequeueJoinableSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DequeueJoinableSession(Z_Param_MatchId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execEnqueueJoinableSession)
	{
		P_GET_STRUCT_REF(FAccelByteModelsMatchmakingResult,Z_Param_Out_MatchmakingResult);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnqueueJoinableSession(Z_Param_Out_MatchmakingResult,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execQuerySessionStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuerySessionStatus(Z_Param_MatchId,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execRebalanceMatchmakingBasedOnMMR)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebalanceMatchmakingBasedOnMMR(Z_Param_MatchId,FDMatchmakingResultDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerMatchmaking::execRemoveUserFromSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_STRUCT_REF(FAccelByteModelsMatchmakingResult,Z_Param_Out_OptionalBody);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserFromSession(Z_Param_ChannelName,Z_Param_MatchId,Z_Param_UserId,Z_Param_Out_OptionalBody,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABServerMatchmaking::StaticRegisterNativesUABServerMatchmaking()
	{
		UClass* Class = UABServerMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSessionStatusPolling", &UABServerMatchmaking::execActivateSessionStatusPolling },
			{ "AddUserToSession", &UABServerMatchmaking::execAddUserToSession },
			{ "DeactivateStatusPolling", &UABServerMatchmaking::execDeactivateStatusPolling },
			{ "DequeueJoinableSession", &UABServerMatchmaking::execDequeueJoinableSession },
			{ "EnqueueJoinableSession", &UABServerMatchmaking::execEnqueueJoinableSession },
			{ "QuerySessionStatus", &UABServerMatchmaking::execQuerySessionStatus },
			{ "RebalanceMatchmakingBasedOnMMR", &UABServerMatchmaking::execRebalanceMatchmakingBasedOnMMR },
			{ "RemoveUserFromSession", &UABServerMatchmaking::execRemoveUserFromSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics
	{
		struct ABServerMatchmaking_eventActivateSessionStatusPolling_Parms
		{
			FString MatchId;
			int32 IntervalSec;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntervalSec;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_IntervalSec = { "IntervalSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, IntervalSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_IntervalSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "ActivateSessionStatusPolling", nullptr, nullptr, sizeof(ABServerMatchmaking_eventActivateSessionStatusPolling_Parms), Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics
	{
		struct ABServerMatchmaking_eventAddUserToSession_Parms
		{
			FString ChannelName;
			FString MatchId;
			FString UserId;
			FString OptionalPartyId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalPartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalPartyId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, ChannelName), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId = { "OptionalPartyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OptionalPartyId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventAddUserToSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_ChannelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OptionalPartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "AddUserToSession", nullptr, nullptr, sizeof(ABServerMatchmaking_eventAddUserToSession_Parms), Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "DeactivateStatusPolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics
	{
		struct ABServerMatchmaking_eventDequeueJoinableSession_Parms
		{
			FString MatchId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventDequeueJoinableSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "DequeueJoinableSession", nullptr, nullptr, sizeof(ABServerMatchmaking_eventDequeueJoinableSession_Parms), Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics
	{
		struct ABServerMatchmaking_eventEnqueueJoinableSession_Parms
		{
			FAccelByteModelsMatchmakingResult MatchmakingResult;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchmakingResult;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult = { "MatchmakingResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, MatchmakingResult), Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventEnqueueJoinableSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_MatchmakingResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "EnqueueJoinableSession", nullptr, nullptr, sizeof(ABServerMatchmaking_eventEnqueueJoinableSession_Parms), Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics
	{
		struct ABServerMatchmaking_eventQuerySessionStatus_Parms
		{
			FString MatchId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventQuerySessionStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "QuerySessionStatus", nullptr, nullptr, sizeof(ABServerMatchmaking_eventQuerySessionStatus_Parms), Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics
	{
		struct ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms
		{
			FString MatchId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "RebalanceMatchmakingBasedOnMMR", nullptr, nullptr, sizeof(ABServerMatchmaking_eventRebalanceMatchmakingBasedOnMMR_Parms), Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics
	{
		struct ABServerMatchmaking_eventRemoveUserFromSession_Parms
		{
			FString ChannelName;
			FString MatchId;
			FString UserId;
			FAccelByteModelsMatchmakingResult OptionalBody;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalBody;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, ChannelName), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody = { "OptionalBody", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OptionalBody), Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerMatchmaking_eventRemoveUserFromSession_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_ChannelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OptionalBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerMatchmaking, nullptr, "RemoveUserFromSession", nullptr, nullptr, sizeof(ABServerMatchmaking_eventRemoveUserFromSession_Parms), Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerMatchmaking_NoRegister()
	{
		return UABServerMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UABServerMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerMatchmaking_ActivateSessionStatusPolling, "ActivateSessionStatusPolling" }, // 3458071221
		{ &Z_Construct_UFunction_UABServerMatchmaking_AddUserToSession, "AddUserToSession" }, // 3302293083
		{ &Z_Construct_UFunction_UABServerMatchmaking_DeactivateStatusPolling, "DeactivateStatusPolling" }, // 3743119196
		{ &Z_Construct_UFunction_UABServerMatchmaking_DequeueJoinableSession, "DequeueJoinableSession" }, // 1614937071
		{ &Z_Construct_UFunction_UABServerMatchmaking_EnqueueJoinableSession, "EnqueueJoinableSession" }, // 1112749089
		{ &Z_Construct_UFunction_UABServerMatchmaking_QuerySessionStatus, "QuerySessionStatus" }, // 3666907257
		{ &Z_Construct_UFunction_UABServerMatchmaking_RebalanceMatchmakingBasedOnMMR, "RebalanceMatchmakingBasedOnMMR" }, // 360856865
		{ &Z_Construct_UFunction_UABServerMatchmaking_RemoveUserFromSession, "RemoveUserFromSession" }, // 1282246205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerMatchmaking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerMatchmaking_Statics::ClassParams = {
		&UABServerMatchmaking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerMatchmaking, 4105423118);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerMatchmaking>()
	{
		return UABServerMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerMatchmaking(Z_Construct_UClass_UABServerMatchmaking, &UABServerMatchmaking::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
