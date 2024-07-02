// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABMessage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMessage_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendChannelMessageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJoinDefaultChannelChatResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendPartyMessageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendPrivateMessageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMessageNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatNotif__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABMessage::execSendChannelMessage)
	{
		P_GET_STRUCT_REF(FSendChannelMessageRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendChannelMessage(Z_Param_Out_Request,FDChannelChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSendJoinDefaultChannelChatRequest)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendJoinDefaultChannelChatRequest(FDJoinDefaultChannelChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSendPartyMessage)
	{
		P_GET_STRUCT_REF(FSendPartyMessageRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendPartyMessage(Z_Param_Out_Request,FDPartyChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSendPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSendPrivateMessage)
	{
		P_GET_STRUCT_REF(FSendPrivateMessageRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendPrivateMessage(Z_Param_Out_Request,FDPersonalChatResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSetChannelMessageNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelMessageNotifDelegate(FDChannelChatNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSetMessageNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMessageNotifDelegate(FDMessageNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSetOnPartyChatNotification)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPartyChatNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPartyChatNotification(FDPartyChatNotif(Z_Param_OnPartyChatNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMessage::execSetPrivateMessageNotifDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrivateMessageNotifDelegate(FDPersonalChatNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	void UABMessage::StaticRegisterNativesUABMessage()
	{
		UClass* Class = UABMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendChannelMessage", &UABMessage::execSendChannelMessage },
			{ "SendJoinDefaultChannelChatRequest", &UABMessage::execSendJoinDefaultChannelChatRequest },
			{ "SendPartyMessage", &UABMessage::execSendPartyMessage },
			{ "SendPing", &UABMessage::execSendPing },
			{ "SendPrivateMessage", &UABMessage::execSendPrivateMessage },
			{ "SetChannelMessageNotifDelegate", &UABMessage::execSetChannelMessageNotifDelegate },
			{ "SetMessageNotifDelegate", &UABMessage::execSetMessageNotifDelegate },
			{ "SetOnPartyChatNotification", &UABMessage::execSetOnPartyChatNotification },
			{ "SetPrivateMessageNotifDelegate", &UABMessage::execSetPrivateMessageNotifDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics
	{
		struct ABMessage_eventSendChannelMessage_Parms
		{
			FSendChannelMessageRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, Request), Z_Construct_UScriptStruct_FSendChannelMessageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendChannelMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendChannelMessage", nullptr, nullptr, sizeof(ABMessage_eventSendChannelMessage_Parms), Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SendChannelMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SendChannelMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics
	{
		struct ABMessage_eventSendJoinDefaultChannelChatRequest_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJoinDefaultChannelChatResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendJoinDefaultChannelChatRequest", nullptr, nullptr, sizeof(ABMessage_eventSendJoinDefaultChannelChatRequest_Parms), Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics
	{
		struct ABMessage_eventSendPartyMessage_Parms
		{
			FSendPartyMessageRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, Request), Z_Construct_UScriptStruct_FSendPartyMessageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPartyMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPartyMessage", nullptr, nullptr, sizeof(ABMessage_eventSendPartyMessage_Parms), Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SendPartyMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SendPartyMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SendPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SendPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SendPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics
	{
		struct ABMessage_eventSendPrivateMessage_Parms
		{
			FSendPrivateMessageRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, Request), Z_Construct_UScriptStruct_FSendPrivateMessageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSendPrivateMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SendPrivateMessage", nullptr, nullptr, sizeof(ABMessage_eventSendPrivateMessage_Parms), Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SendPrivateMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SendPrivateMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics
	{
		struct ABMessage_eventSetChannelMessageNotifDelegate_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSetChannelMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DChannelChatNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetChannelMessageNotifDelegate", nullptr, nullptr, sizeof(ABMessage_eventSetChannelMessageNotifDelegate_Parms), Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics
	{
		struct ABMessage_eventSetMessageNotifDelegate_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSetMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMessageNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetMessageNotifDelegate", nullptr, nullptr, sizeof(ABMessage_eventSetMessageNotifDelegate_Parms), Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics
	{
		struct ABMessage_eventSetOnPartyChatNotification_Parms
		{
			FScriptDelegate OnPartyChatNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPartyChatNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::NewProp_OnPartyChatNotif = { "OnPartyChatNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSetOnPartyChatNotification_Parms, OnPartyChatNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPartyChatNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::NewProp_OnPartyChatNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetOnPartyChatNotification", nullptr, nullptr, sizeof(ABMessage_eventSetOnPartyChatNotification_Parms), Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics
	{
		struct ABMessage_eventSetPrivateMessageNotifDelegate_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMessage_eventSetPrivateMessageNotifDelegate_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPersonalChatNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMessage, nullptr, "SetPrivateMessageNotifDelegate", nullptr, nullptr, sizeof(ABMessage_eventSetPrivateMessageNotifDelegate_Parms), Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABMessage_NoRegister()
	{
		return UABMessage::StaticClass();
	}
	struct Z_Construct_UClass_UABMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABMessage_SendChannelMessage, "SendChannelMessage" }, // 3851894945
		{ &Z_Construct_UFunction_UABMessage_SendJoinDefaultChannelChatRequest, "SendJoinDefaultChannelChatRequest" }, // 2081515798
		{ &Z_Construct_UFunction_UABMessage_SendPartyMessage, "SendPartyMessage" }, // 1417231685
		{ &Z_Construct_UFunction_UABMessage_SendPing, "SendPing" }, // 2598742824
		{ &Z_Construct_UFunction_UABMessage_SendPrivateMessage, "SendPrivateMessage" }, // 1585492179
		{ &Z_Construct_UFunction_UABMessage_SetChannelMessageNotifDelegate, "SetChannelMessageNotifDelegate" }, // 1760066940
		{ &Z_Construct_UFunction_UABMessage_SetMessageNotifDelegate, "SetMessageNotifDelegate" }, // 2546024047
		{ &Z_Construct_UFunction_UABMessage_SetOnPartyChatNotification, "SetOnPartyChatNotification" }, // 2340072420
		{ &Z_Construct_UFunction_UABMessage_SetPrivateMessageNotifDelegate, "SetPrivateMessageNotifDelegate" }, // 3560083012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABMessage_Statics::ClassParams = {
		&UABMessage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABMessage, 1301640960);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABMessage>()
	{
		return UABMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABMessage(Z_Construct_UClass_UABMessage, &UABMessage::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
