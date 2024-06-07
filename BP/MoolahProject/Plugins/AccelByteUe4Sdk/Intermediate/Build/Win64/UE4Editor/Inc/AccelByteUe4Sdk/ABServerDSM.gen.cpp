// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerDSM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerDSM() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerDSM_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerDSM();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerInfoDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionResponseDelegate__DelegateSignature();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_UEnumServerType();
// End Cross Module References
	DEFINE_FUNCTION(UABServerDSM::execConfigureAutoShutdown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TickSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_CountdownStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureAutoShutdown(Z_Param_TickSeconds,Z_Param_CountdownStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execDeregisterLocalServerFromDSM)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeregisterLocalServerFromDSM(Z_Param_ServerName,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execGetPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execGetServerInfo)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerInfo(FDServerInfoDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execGetSessionId)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSessionId(FDServerSessionResponseDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execRegisterLocalServerToDSM)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLocalServerToDSM(Z_Param_IPAddress,Z_Param_Out_Port,Z_Param_ServerName,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execRegisterServerToDSM)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterServerToDSM(Z_Param_Out_Port,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execSendShutdownToDSM)
	{
		P_GET_UBOOL_REF(Z_Param_Out_KillMe);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendShutdownToDSM(Z_Param_Out_KillMe,Z_Param_MatchId,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execSetOnAutoShutdownErrorDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnShutdownError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnAutoShutdownErrorDelegate(FDErrorHandler(Z_Param_OnShutdownError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execSetOnAutoShutdownResponse)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnAutoShutdown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnAutoShutdownResponse(FDHandler(Z_Param_OnAutoShutdown));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABServerDSM::execSetServerType)
	{
		P_GET_ENUM(UEnumServerType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerType(UEnumServerType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UABServerDSM::StaticRegisterNativesUABServerDSM()
	{
		UClass* Class = UABServerDSM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigureAutoShutdown", &UABServerDSM::execConfigureAutoShutdown },
			{ "DeregisterLocalServerFromDSM", &UABServerDSM::execDeregisterLocalServerFromDSM },
			{ "GetPlayerNum", &UABServerDSM::execGetPlayerNum },
			{ "GetServerInfo", &UABServerDSM::execGetServerInfo },
			{ "GetSessionId", &UABServerDSM::execGetSessionId },
			{ "RegisterLocalServerToDSM", &UABServerDSM::execRegisterLocalServerToDSM },
			{ "RegisterServerToDSM", &UABServerDSM::execRegisterServerToDSM },
			{ "SendShutdownToDSM", &UABServerDSM::execSendShutdownToDSM },
			{ "SetOnAutoShutdownErrorDelegate", &UABServerDSM::execSetOnAutoShutdownErrorDelegate },
			{ "SetOnAutoShutdownResponse", &UABServerDSM::execSetOnAutoShutdownResponse },
			{ "SetServerName", &UABServerDSM::execSetServerName },
			{ "SetServerType", &UABServerDSM::execSetServerType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics
	{
		struct ABServerDSM_eventConfigureAutoShutdown_Parms
		{
			int32 TickSeconds;
			int32 CountdownStart;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickSeconds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountdownStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_TickSeconds = { "TickSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventConfigureAutoShutdown_Parms, TickSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_CountdownStart = { "CountdownStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventConfigureAutoShutdown_Parms, CountdownStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_TickSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::NewProp_CountdownStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "ConfigureAutoShutdown", nullptr, nullptr, sizeof(ABServerDSM_eventConfigureAutoShutdown_Parms), Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics
	{
		struct ABServerDSM_eventDeregisterLocalServerFromDSM_Parms
		{
			FString ServerName;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, ServerName), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "DeregisterLocalServerFromDSM", nullptr, nullptr, sizeof(ABServerDSM_eventDeregisterLocalServerFromDSM_Parms), Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics
	{
		struct ABServerDSM_eventGetPlayerNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetPlayerNum", nullptr, nullptr, sizeof(ABServerDSM_eventGetPlayerNum_Parms), Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_GetPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics
	{
		struct ABServerDSM_eventGetServerInfo_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventGetServerInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerInfoDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventGetServerInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetServerInfo", nullptr, nullptr, sizeof(ABServerDSM_eventGetServerInfo_Parms), Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_GetServerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetServerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics
	{
		struct ABServerDSM_eventGetSessionId_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventGetSessionId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DServerSessionResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventGetSessionId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "GetSessionId", nullptr, nullptr, sizeof(ABServerDSM_eventGetSessionId_Parms), Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_GetSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_GetSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics
	{
		struct ABServerDSM_eventRegisterLocalServerToDSM_Parms
		{
			FString IPAddress;
			int32 Port;
			FString ServerName;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, ServerName), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterLocalServerToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "RegisterLocalServerToDSM", nullptr, nullptr, sizeof(ABServerDSM_eventRegisterLocalServerToDSM_Parms), Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics
	{
		struct ABServerDSM_eventRegisterServerToDSM_Parms
		{
			int32 Port;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventRegisterServerToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "RegisterServerToDSM", nullptr, nullptr, sizeof(ABServerDSM_eventRegisterServerToDSM_Parms), Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics
	{
		struct ABServerDSM_eventSendShutdownToDSM_Parms
		{
			bool KillMe;
			FString MatchId;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillMe_MetaData[];
#endif
		static void NewProp_KillMe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KillMe;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_SetBit(void* Obj)
	{
		((ABServerDSM_eventSendShutdownToDSM_Parms*)Obj)->KillMe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe = { "KillMe", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABServerDSM_eventSendShutdownToDSM_Parms), &Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, MatchId), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSendShutdownToDSM_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_KillMe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SendShutdownToDSM", nullptr, nullptr, sizeof(ABServerDSM_eventSendShutdownToDSM_Parms), Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics
	{
		struct ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms
		{
			FScriptDelegate OnShutdownError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnShutdownError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::NewProp_OnShutdownError = { "OnShutdownError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms, OnShutdownError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::NewProp_OnShutdownError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetOnAutoShutdownErrorDelegate", nullptr, nullptr, sizeof(ABServerDSM_eventSetOnAutoShutdownErrorDelegate_Parms), Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics
	{
		struct ABServerDSM_eventSetOnAutoShutdownResponse_Parms
		{
			FScriptDelegate OnAutoShutdown;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnAutoShutdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::NewProp_OnAutoShutdown = { "OnAutoShutdown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSetOnAutoShutdownResponse_Parms, OnAutoShutdown), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::NewProp_OnAutoShutdown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetOnAutoShutdownResponse", nullptr, nullptr, sizeof(ABServerDSM_eventSetOnAutoShutdownResponse_Parms), Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_SetServerName_Statics
	{
		struct ABServerDSM_eventSetServerName_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSetServerName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetServerName", nullptr, nullptr, sizeof(ABServerDSM_eventSetServerName_Parms), Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABServerDSM_SetServerType_Statics
	{
		struct ABServerDSM_eventSetServerType_Parms
		{
			UEnumServerType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABServerDSM_eventSetServerType_Parms, Type), Z_Construct_UEnum_AccelByteUe4Sdk_UEnumServerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerDSM, nullptr, "SetServerType", nullptr, nullptr, sizeof(ABServerDSM_eventSetServerType_Parms), Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABServerDSM_SetServerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABServerDSM_SetServerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABServerDSM_NoRegister()
	{
		return UABServerDSM::StaticClass();
	}
	struct Z_Construct_UClass_UABServerDSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABServerDSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABServerDSM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerDSM_ConfigureAutoShutdown, "ConfigureAutoShutdown" }, // 1696856711
		{ &Z_Construct_UFunction_UABServerDSM_DeregisterLocalServerFromDSM, "DeregisterLocalServerFromDSM" }, // 3802135406
		{ &Z_Construct_UFunction_UABServerDSM_GetPlayerNum, "GetPlayerNum" }, // 732784965
		{ &Z_Construct_UFunction_UABServerDSM_GetServerInfo, "GetServerInfo" }, // 2165098185
		{ &Z_Construct_UFunction_UABServerDSM_GetSessionId, "GetSessionId" }, // 1318337131
		{ &Z_Construct_UFunction_UABServerDSM_RegisterLocalServerToDSM, "RegisterLocalServerToDSM" }, // 491171388
		{ &Z_Construct_UFunction_UABServerDSM_RegisterServerToDSM, "RegisterServerToDSM" }, // 14917178
		{ &Z_Construct_UFunction_UABServerDSM_SendShutdownToDSM, "SendShutdownToDSM" }, // 212613551
		{ &Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownErrorDelegate, "SetOnAutoShutdownErrorDelegate" }, // 368575356
		{ &Z_Construct_UFunction_UABServerDSM_SetOnAutoShutdownResponse, "SetOnAutoShutdownResponse" }, // 92942452
		{ &Z_Construct_UFunction_UABServerDSM_SetServerName, "SetServerName" }, // 2890873215
		{ &Z_Construct_UFunction_UABServerDSM_SetServerType, "SetServerType" }, // 2368806193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABServerDSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerDSM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerDSM.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABServerDSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerDSM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABServerDSM_Statics::ClassParams = {
		&UABServerDSM::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABServerDSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABServerDSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABServerDSM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABServerDSM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABServerDSM, 88202558);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerDSM>()
	{
		return UABServerDSM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABServerDSM(Z_Construct_UClass_UABServerDSM, &UABServerDSM::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABServerDSM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerDSM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
