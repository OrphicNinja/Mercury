// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBlock() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBlock_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBlock();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBlockPlayerRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockedUserResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockersResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUnblockPlayerRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABBlock::execBlockPlayer)
	{
		P_GET_STRUCT_REF(FBlockPlayerRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockPlayer(Z_Param_Out_Request,FDBlockPlayerResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBlock::execGetListOfBlockedUsers)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetListOfBlockedUsers(FDListOfBlockedUserResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBlock::execGetListOfBlockers)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetListOfBlockers(FDListOfBlockersResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBlock::execSetBlockPlayerNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockPlayerNotifDelegate(FDBlockPlayerNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBlock::execSetUnblockPlayerNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnblockPlayerNotifDelegate(FDUnblockPlayerNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABBlock::execUnblockPlayer)
	{
		P_GET_STRUCT_REF(FUnblockPlayerRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnblockPlayer(Z_Param_Out_Request,FDUnblockPlayerResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABBlock::StaticRegisterNativesUABBlock()
	{
		UClass* Class = UABBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockPlayer", &UABBlock::execBlockPlayer },
			{ "GetListOfBlockedUsers", &UABBlock::execGetListOfBlockedUsers },
			{ "GetListOfBlockers", &UABBlock::execGetListOfBlockers },
			{ "SetBlockPlayerNotifDelegate", &UABBlock::execSetBlockPlayerNotifDelegate },
			{ "SetUnblockPlayerNotifDelegate", &UABBlock::execSetUnblockPlayerNotifDelegate },
			{ "UnblockPlayer", &UABBlock::execUnblockPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABBlock_BlockPlayer_Statics
	{
		struct ABBlock_eventBlockPlayer_Parms
		{
			FBlockPlayerRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, Request), Z_Construct_UScriptStruct_FBlockPlayerRequest, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventBlockPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "BlockPlayer", nullptr, nullptr, sizeof(ABBlock_eventBlockPlayer_Parms), Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_BlockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_BlockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics
	{
		struct ABBlock_eventGetListOfBlockedUsers_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockedUsers_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockedUserResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockedUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "GetListOfBlockedUsers", nullptr, nullptr, sizeof(ABBlock_eventGetListOfBlockedUsers_Parms), Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics
	{
		struct ABBlock_eventGetListOfBlockers_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockers_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DListOfBlockersResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventGetListOfBlockers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "GetListOfBlockers", nullptr, nullptr, sizeof(ABBlock_eventGetListOfBlockers_Parms), Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_GetListOfBlockers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_GetListOfBlockers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics
	{
		struct ABBlock_eventSetBlockPlayerNotifDelegate_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventSetBlockPlayerNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBlockPlayerNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "SetBlockPlayerNotifDelegate", nullptr, nullptr, sizeof(ABBlock_eventSetBlockPlayerNotifDelegate_Parms), Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics
	{
		struct ABBlock_eventSetUnblockPlayerNotifDelegate_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventSetUnblockPlayerNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "SetUnblockPlayerNotifDelegate", nullptr, nullptr, sizeof(ABBlock_eventSetUnblockPlayerNotifDelegate_Parms), Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics
	{
		struct ABBlock_eventUnblockPlayer_Parms
		{
			FUnblockPlayerRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, Request), Z_Construct_UScriptStruct_FUnblockPlayerRequest, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUnblockPlayerResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABBlock_eventUnblockPlayer_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABBlock, nullptr, "UnblockPlayer", nullptr, nullptr, sizeof(ABBlock_eventUnblockPlayer_Parms), Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABBlock_UnblockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABBlock_UnblockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABBlock_NoRegister()
	{
		return UABBlock::StaticClass();
	}
	struct Z_Construct_UClass_UABBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABBlock_BlockPlayer, "BlockPlayer" }, // 803868233
		{ &Z_Construct_UFunction_UABBlock_GetListOfBlockedUsers, "GetListOfBlockedUsers" }, // 3984239388
		{ &Z_Construct_UFunction_UABBlock_GetListOfBlockers, "GetListOfBlockers" }, // 1691337753
		{ &Z_Construct_UFunction_UABBlock_SetBlockPlayerNotifDelegate, "SetBlockPlayerNotifDelegate" }, // 1149217140
		{ &Z_Construct_UFunction_UABBlock_SetUnblockPlayerNotifDelegate, "SetUnblockPlayerNotifDelegate" }, // 2985439371
		{ &Z_Construct_UFunction_UABBlock_UnblockPlayer, "UnblockPlayer" }, // 413511106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABBlock_Statics::ClassParams = {
		&UABBlock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABBlock, 2275363558);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABBlock>()
	{
		return UABBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABBlock(Z_Construct_UClass_UABBlock, &UABBlock::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
