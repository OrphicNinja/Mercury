// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABFriends.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFriends() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFriends_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFriends();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsBulkFriendsRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetFriendshipStatusResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListIncomingFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOutgoingFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoadFriendListResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABFriends::execAcceptFriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptFriend(Z_Param_UserId,FDAcceptFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execBulkFriendRequest)
	{
		P_GET_STRUCT(FAccelByteModelsBulkFriendsRequest,Z_Param_UserIds);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkFriendRequest(Z_Param_UserIds,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execCancelFriendRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelFriendRequest(Z_Param_UserId,FDCancelFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execGetFriendshipStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFriendshipStatus(Z_Param_UserId,FDGetFriendshipStatusResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execListIncomingFriends)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListIncomingFriends(FDListIncomingFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execListOutgoingFriends)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListOutgoingFriends(FDListOutgoingFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execLoadFriendsList)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFriendsList(FDLoadFriendListResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execRejectFriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectFriend(Z_Param_UserId,FDRejectFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execRequestFriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFriend(Z_Param_UserId,FDRequestFriendsResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execSetOnCancelFriendsNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnCancelFriendsNotifDelegate(FDCancelFriendsNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execSetOnFriendRequestAcceptedNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnFriendRequestAcceptedNotifDelegate(FDAcceptFriendsNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execSetOnIncomingRequestFriendsNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnIncomingRequestFriendsNotifDelegate(FDRequestFriendsNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execSetOnRejectFriendsNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnRejectFriendsNotifDelegate(FDRejectFriendsNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execSetOnUnfriendNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnUnfriendNotifDelegate(FDUnfriendNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABFriends::execUnfriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unfriend(Z_Param_UserId,FDUnfriendResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABFriends::StaticRegisterNativesUABFriends()
	{
		UClass* Class = UABFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptFriend", &UABFriends::execAcceptFriend },
			{ "BulkFriendRequest", &UABFriends::execBulkFriendRequest },
			{ "CancelFriendRequest", &UABFriends::execCancelFriendRequest },
			{ "GetFriendshipStatus", &UABFriends::execGetFriendshipStatus },
			{ "ListIncomingFriends", &UABFriends::execListIncomingFriends },
			{ "ListOutgoingFriends", &UABFriends::execListOutgoingFriends },
			{ "LoadFriendsList", &UABFriends::execLoadFriendsList },
			{ "RejectFriend", &UABFriends::execRejectFriend },
			{ "RequestFriend", &UABFriends::execRequestFriend },
			{ "SetOnCancelFriendsNotifDelegate", &UABFriends::execSetOnCancelFriendsNotifDelegate },
			{ "SetOnFriendRequestAcceptedNotifDelegate", &UABFriends::execSetOnFriendRequestAcceptedNotifDelegate },
			{ "SetOnIncomingRequestFriendsNotifDelegate", &UABFriends::execSetOnIncomingRequestFriendsNotifDelegate },
			{ "SetOnRejectFriendsNotifDelegate", &UABFriends::execSetOnRejectFriendsNotifDelegate },
			{ "SetOnUnfriendNotifDelegate", &UABFriends::execSetOnUnfriendNotifDelegate },
			{ "Unfriend", &UABFriends::execUnfriend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABFriends_AcceptFriend_Statics
	{
		struct ABFriends_eventAcceptFriend_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventAcceptFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "AcceptFriend", nullptr, nullptr, sizeof(ABFriends_eventAcceptFriend_Parms), Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_AcceptFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_AcceptFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics
	{
		struct ABFriends_eventBulkFriendRequest_Parms
		{
			FAccelByteModelsBulkFriendsRequest UserIds;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserIds;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, UserIds), Z_Construct_UScriptStruct_FAccelByteModelsBulkFriendsRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventBulkFriendRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_UserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "BulkFriendRequest", nullptr, nullptr, sizeof(ABFriends_eventBulkFriendRequest_Parms), Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_BulkFriendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_BulkFriendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics
	{
		struct ABFriends_eventCancelFriendRequest_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventCancelFriendRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "CancelFriendRequest", nullptr, nullptr, sizeof(ABFriends_eventCancelFriendRequest_Parms), Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_CancelFriendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_CancelFriendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics
	{
		struct ABFriends_eventGetFriendshipStatus_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetFriendshipStatusResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventGetFriendshipStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "GetFriendshipStatus", nullptr, nullptr, sizeof(ABFriends_eventGetFriendshipStatus_Parms), Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_GetFriendshipStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_GetFriendshipStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics
	{
		struct ABFriends_eventListIncomingFriends_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventListIncomingFriends_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListIncomingFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventListIncomingFriends_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "ListIncomingFriends", nullptr, nullptr, sizeof(ABFriends_eventListIncomingFriends_Parms), Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_ListIncomingFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_ListIncomingFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics
	{
		struct ABFriends_eventListOutgoingFriends_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventListOutgoingFriends_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOutgoingFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventListOutgoingFriends_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "ListOutgoingFriends", nullptr, nullptr, sizeof(ABFriends_eventListOutgoingFriends_Parms), Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_ListOutgoingFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_ListOutgoingFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics
	{
		struct ABFriends_eventLoadFriendsList_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventLoadFriendsList_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoadFriendListResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventLoadFriendsList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "LoadFriendsList", nullptr, nullptr, sizeof(ABFriends_eventLoadFriendsList_Parms), Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_LoadFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_LoadFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_RejectFriend_Statics
	{
		struct ABFriends_eventRejectFriend_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRejectFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RejectFriend_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_RejectFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_RejectFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "RejectFriend", nullptr, nullptr, sizeof(ABFriends_eventRejectFriend_Parms), Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RejectFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_RejectFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_RejectFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_RequestFriend_Statics
	{
		struct ABFriends_eventRequestFriend_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventRequestFriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_RequestFriend_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_RequestFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_RequestFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "RequestFriend", nullptr, nullptr, sizeof(ABFriends_eventRequestFriend_Parms), Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_RequestFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_RequestFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_RequestFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics
	{
		struct ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelFriendsNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnCancelFriendsNotifDelegate", nullptr, nullptr, sizeof(ABFriends_eventSetOnCancelFriendsNotifDelegate_Parms), Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics
	{
		struct ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAcceptFriendsNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnFriendRequestAcceptedNotifDelegate", nullptr, nullptr, sizeof(ABFriends_eventSetOnFriendRequestAcceptedNotifDelegate_Parms), Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics
	{
		struct ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRequestFriendsNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnIncomingRequestFriendsNotifDelegate", nullptr, nullptr, sizeof(ABFriends_eventSetOnIncomingRequestFriendsNotifDelegate_Parms), Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics
	{
		struct ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRejectFriendsNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnRejectFriendsNotifDelegate", nullptr, nullptr, sizeof(ABFriends_eventSetOnRejectFriendsNotifDelegate_Parms), Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics
	{
		struct ABFriends_eventSetOnUnfriendNotifDelegate_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventSetOnUnfriendNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "SetOnUnfriendNotifDelegate", nullptr, nullptr, sizeof(ABFriends_eventSetOnUnfriendNotifDelegate_Parms), Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABFriends_Unfriend_Statics
	{
		struct ABFriends_eventUnfriend_Parms
		{
			FString UserId;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnfriendResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABFriends_eventUnfriend_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFriends_Unfriend_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABFriends_Unfriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFriends_Unfriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFriends, nullptr, "Unfriend", nullptr, nullptr, sizeof(ABFriends_eventUnfriend_Parms), Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABFriends_Unfriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFriends_Unfriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABFriends_Unfriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABFriends_Unfriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABFriends_NoRegister()
	{
		return UABFriends::StaticClass();
	}
	struct Z_Construct_UClass_UABFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABFriends_AcceptFriend, "AcceptFriend" }, // 3998532538
		{ &Z_Construct_UFunction_UABFriends_BulkFriendRequest, "BulkFriendRequest" }, // 4267787404
		{ &Z_Construct_UFunction_UABFriends_CancelFriendRequest, "CancelFriendRequest" }, // 2872763893
		{ &Z_Construct_UFunction_UABFriends_GetFriendshipStatus, "GetFriendshipStatus" }, // 1240559734
		{ &Z_Construct_UFunction_UABFriends_ListIncomingFriends, "ListIncomingFriends" }, // 1245587521
		{ &Z_Construct_UFunction_UABFriends_ListOutgoingFriends, "ListOutgoingFriends" }, // 3965848844
		{ &Z_Construct_UFunction_UABFriends_LoadFriendsList, "LoadFriendsList" }, // 1598336590
		{ &Z_Construct_UFunction_UABFriends_RejectFriend, "RejectFriend" }, // 2562031915
		{ &Z_Construct_UFunction_UABFriends_RequestFriend, "RequestFriend" }, // 3507744683
		{ &Z_Construct_UFunction_UABFriends_SetOnCancelFriendsNotifDelegate, "SetOnCancelFriendsNotifDelegate" }, // 1595938550
		{ &Z_Construct_UFunction_UABFriends_SetOnFriendRequestAcceptedNotifDelegate, "SetOnFriendRequestAcceptedNotifDelegate" }, // 3256297255
		{ &Z_Construct_UFunction_UABFriends_SetOnIncomingRequestFriendsNotifDelegate, "SetOnIncomingRequestFriendsNotifDelegate" }, // 1258164587
		{ &Z_Construct_UFunction_UABFriends_SetOnRejectFriendsNotifDelegate, "SetOnRejectFriendsNotifDelegate" }, // 860762914
		{ &Z_Construct_UFunction_UABFriends_SetOnUnfriendNotifDelegate, "SetOnUnfriendNotifDelegate" }, // 3889550348
		{ &Z_Construct_UFunction_UABFriends_Unfriend, "Unfriend" }, // 2284865756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABFriends_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABFriends.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABFriends.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABFriends_Statics::ClassParams = {
		&UABFriends::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABFriends, 4225288384);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABFriends>()
	{
		return UABFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABFriends(Z_Construct_UClass_UABFriends, &UABFriends::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABFriends);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
