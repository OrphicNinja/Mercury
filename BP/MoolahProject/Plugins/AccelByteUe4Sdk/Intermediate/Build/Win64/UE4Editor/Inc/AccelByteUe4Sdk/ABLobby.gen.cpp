// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABLobby() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLobby_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLobby();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRefreshTokenRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRefreshTokenResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRequestDSModel();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDisconnectNotifDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetRetryParametersRequest();
// End Cross Module References
	DEFINE_FUNCTION(UABLobby::execConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execRefreshToken)
	{
		P_GET_STRUCT_REF(FRefreshTokenRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->RefreshToken(Z_Param_Out_Request,FDRefreshTokenResponseDelegate(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execRequestDS)
	{
		P_GET_STRUCT_REF(FRequestDSModel,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->RequestDS(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetOnConnected)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnConnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnConnected(FDHandler(Z_Param_OnConnected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetOnConnectFailed)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnectError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnConnectFailed(FDErrorHandler(Z_Param_Out_OnConnectError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetOnConnectionClosed)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnConnectionClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnConnectionClosed(FDConnectionClosedDelegate(Z_Param_OnConnectionClosed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetOnDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnDisconnect(FDDisconnectNotifDelegate(Z_Param_Out_OnDisconnected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetOnErrorNotification)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnErrorNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnErrorNotification(FDErrorHandler(Z_Param_OnErrorNotification));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execSetRetryParameters)
	{
		P_GET_STRUCT_REF(FSetRetryParametersRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRetryParameters(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABLobby::execUnbindEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindEvent();
		P_NATIVE_END;
	}
	void UABLobby::StaticRegisterNativesUABLobby()
	{
		UClass* Class = UABLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UABLobby::execConnect },
			{ "Disconnect", &UABLobby::execDisconnect },
			{ "IsConnected", &UABLobby::execIsConnected },
			{ "RefreshToken", &UABLobby::execRefreshToken },
			{ "RequestDS", &UABLobby::execRequestDS },
			{ "SetOnConnected", &UABLobby::execSetOnConnected },
			{ "SetOnConnectFailed", &UABLobby::execSetOnConnectFailed },
			{ "SetOnConnectionClosed", &UABLobby::execSetOnConnectionClosed },
			{ "SetOnDisconnect", &UABLobby::execSetOnDisconnect },
			{ "SetOnErrorNotification", &UABLobby::execSetOnErrorNotification },
			{ "SetRetryParameters", &UABLobby::execSetRetryParameters },
			{ "UnbindEvent", &UABLobby::execUnbindEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABLobby_Connect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_Connect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "Connect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_IsConnected_Statics
	{
		struct ABLobby_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABLobby_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABLobby_eventIsConnected_Parms), &Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "IsConnected", nullptr, nullptr, sizeof(ABLobby_eventIsConnected_Parms), Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_RefreshToken_Statics
	{
		struct ABLobby_eventRefreshToken_Parms
		{
			FRefreshTokenRequest Request;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, Request), Z_Construct_UScriptStruct_FRefreshTokenRequest, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRefreshTokenResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRefreshToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RefreshToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_RefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_RefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "RefreshToken", nullptr, nullptr, sizeof(ABLobby_eventRefreshToken_Parms), Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_RefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_RefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_RequestDS_Statics
	{
		struct ABLobby_eventRequestDS_Parms
		{
			FRequestDSModel Request;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRequestDS_Parms, Request), Z_Construct_UScriptStruct_FRequestDSModel, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventRequestDS_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_RequestDS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_RequestDS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_RequestDS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "RequestDS", nullptr, nullptr, sizeof(ABLobby_eventRequestDS_Parms), Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_RequestDS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_RequestDS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_RequestDS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_RequestDS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetOnConnected_Statics
	{
		struct ABLobby_eventSetOnConnected_Parms
		{
			FScriptDelegate OnConnected;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnected_Parms, OnConnected), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::NewProp_OnConnected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnected", nullptr, nullptr, sizeof(ABLobby_eventSetOnConnected_Parms), Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetOnConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics
	{
		struct ABLobby_eventSetOnConnectFailed_Parms
		{
			FScriptDelegate OnConnectError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnectError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError = { "OnConnectError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnectFailed_Parms, OnConnectError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::NewProp_OnConnectError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnectFailed", nullptr, nullptr, sizeof(ABLobby_eventSetOnConnectFailed_Parms), Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetOnConnectFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnectFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics
	{
		struct ABLobby_eventSetOnConnectionClosed_Parms
		{
			FScriptDelegate OnConnectionClosed;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnConnectionClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::NewProp_OnConnectionClosed = { "OnConnectionClosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetOnConnectionClosed_Parms, OnConnectionClosed), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DConnectionClosedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::NewProp_OnConnectionClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnConnectionClosed", nullptr, nullptr, sizeof(ABLobby_eventSetOnConnectionClosed_Parms), Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetOnConnectionClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnConnectionClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics
	{
		struct ABLobby_eventSetOnDisconnect_Parms
		{
			FScriptDelegate OnDisconnected;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetOnDisconnect_Parms, OnDisconnected), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDisconnectNotifDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::NewProp_OnDisconnected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnDisconnect", nullptr, nullptr, sizeof(ABLobby_eventSetOnDisconnect_Parms), Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetOnDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics
	{
		struct ABLobby_eventSetOnErrorNotification_Parms
		{
			FScriptDelegate OnErrorNotification;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnErrorNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::NewProp_OnErrorNotification = { "OnErrorNotification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetOnErrorNotification_Parms, OnErrorNotification), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::NewProp_OnErrorNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetOnErrorNotification", nullptr, nullptr, sizeof(ABLobby_eventSetOnErrorNotification_Parms), Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetOnErrorNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetOnErrorNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics
	{
		struct ABLobby_eventSetRetryParameters_Parms
		{
			FSetRetryParametersRequest Request;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABLobby_eventSetRetryParameters_Parms, Request), Z_Construct_UScriptStruct_FSetRetryParametersRequest, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "SetRetryParameters", nullptr, nullptr, sizeof(ABLobby_eventSetRetryParameters_Parms), Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_SetRetryParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_SetRetryParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABLobby_UnbindEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABLobby, nullptr, "UnbindEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABLobby_UnbindEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABLobby_UnbindEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABLobby_NoRegister()
	{
		return UABLobby::StaticClass();
	}
	struct Z_Construct_UClass_UABLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABLobby_Connect, "Connect" }, // 1135954327
		{ &Z_Construct_UFunction_UABLobby_Disconnect, "Disconnect" }, // 3628860287
		{ &Z_Construct_UFunction_UABLobby_IsConnected, "IsConnected" }, // 903351217
		{ &Z_Construct_UFunction_UABLobby_RefreshToken, "RefreshToken" }, // 4273305827
		{ &Z_Construct_UFunction_UABLobby_RequestDS, "RequestDS" }, // 1285281777
		{ &Z_Construct_UFunction_UABLobby_SetOnConnected, "SetOnConnected" }, // 1541106544
		{ &Z_Construct_UFunction_UABLobby_SetOnConnectFailed, "SetOnConnectFailed" }, // 3400153265
		{ &Z_Construct_UFunction_UABLobby_SetOnConnectionClosed, "SetOnConnectionClosed" }, // 1394530915
		{ &Z_Construct_UFunction_UABLobby_SetOnDisconnect, "SetOnDisconnect" }, // 1926982021
		{ &Z_Construct_UFunction_UABLobby_SetOnErrorNotification, "SetOnErrorNotification" }, // 1368876381
		{ &Z_Construct_UFunction_UABLobby_SetRetryParameters, "SetRetryParameters" }, // 32954763
		{ &Z_Construct_UFunction_UABLobby_UnbindEvent, "UnbindEvent" }, // 2081166197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABLobby.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABLobby_Statics::ClassParams = {
		&UABLobby::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABLobby, 2010636834);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABLobby>()
	{
		return UABLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABLobby(Z_Construct_UClass_UABLobby, &UABLobby::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
