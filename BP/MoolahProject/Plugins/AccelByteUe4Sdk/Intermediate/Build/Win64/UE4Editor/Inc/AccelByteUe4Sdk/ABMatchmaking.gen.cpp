// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABMatchmaking() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMatchmaking_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMatchmaking();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FCancelMatchmakingRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelMatchmakingResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDsNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRematchmakingNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetReadyConsentRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetRejectConsentRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FStartMatchmakingRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DStartMatchmakingResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABMatchmaking::execCancelMatchmaking)
	{
		P_GET_STRUCT_REF(FCancelMatchmakingRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelMatchmaking(Z_Param_Out_Request,FDCancelMatchmakingResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetOnDs)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnDs(FDDsNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetOnMatchmaking)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMatchmaking(FDMatchmakingNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetOnRematchmaking)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnRematchmaking(FDRematchmakingNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetOnSetReadyConsent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSetReadyConsent(FDSetReadyConsentNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetOnSetRejectConsent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSetRejectConsent(FDSetRejectConsentNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetReadyConsent)
	{
		P_GET_STRUCT_REF(FSetReadyConsentRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReadyConsent(Z_Param_Out_Request,FDSetReadyConsentResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execSetRejectConsent)
	{
		P_GET_STRUCT_REF(FSetRejectConsentRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRejectConsent(Z_Param_Out_Request,FDSetRejectConsentResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABMatchmaking::execStartMatchmaking)
	{
		P_GET_STRUCT_REF(FStartMatchmakingRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMatchmaking(Z_Param_Out_Request,FDStartMatchmakingResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABMatchmaking::StaticRegisterNativesUABMatchmaking()
	{
		UClass* Class = UABMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelMatchmaking", &UABMatchmaking::execCancelMatchmaking },
			{ "SetOnDs", &UABMatchmaking::execSetOnDs },
			{ "SetOnMatchmaking", &UABMatchmaking::execSetOnMatchmaking },
			{ "SetOnRematchmaking", &UABMatchmaking::execSetOnRematchmaking },
			{ "SetOnSetReadyConsent", &UABMatchmaking::execSetOnSetReadyConsent },
			{ "SetOnSetRejectConsent", &UABMatchmaking::execSetOnSetRejectConsent },
			{ "SetReadyConsent", &UABMatchmaking::execSetReadyConsent },
			{ "SetRejectConsent", &UABMatchmaking::execSetRejectConsent },
			{ "StartMatchmaking", &UABMatchmaking::execStartMatchmaking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics
	{
		struct ABMatchmaking_eventCancelMatchmaking_Parms
		{
			FCancelMatchmakingRequest Request;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, Request), Z_Construct_UScriptStruct_FCancelMatchmakingRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelMatchmakingResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "CancelMatchmaking", nullptr, nullptr, sizeof(ABMatchmaking_eventCancelMatchmaking_Parms), Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics
	{
		struct ABMatchmaking_eventSetOnDs_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnDs_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDsNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnDs", nullptr, nullptr, sizeof(ABMatchmaking_eventSetOnDs_Parms), Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics
	{
		struct ABMatchmaking_eventSetOnMatchmaking_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnMatchmaking_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnMatchmaking", nullptr, nullptr, sizeof(ABMatchmaking_eventSetOnMatchmaking_Parms), Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics
	{
		struct ABMatchmaking_eventSetOnRematchmaking_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnRematchmaking_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRematchmakingNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnRematchmaking", nullptr, nullptr, sizeof(ABMatchmaking_eventSetOnRematchmaking_Parms), Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics
	{
		struct ABMatchmaking_eventSetOnSetReadyConsent_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnSetReadyConsent_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnSetReadyConsent", nullptr, nullptr, sizeof(ABMatchmaking_eventSetOnSetReadyConsent_Parms), Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics
	{
		struct ABMatchmaking_eventSetOnSetRejectConsent_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnSetRejectConsent_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnSetRejectConsent", nullptr, nullptr, sizeof(ABMatchmaking_eventSetOnSetRejectConsent_Parms), Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics
	{
		struct ABMatchmaking_eventSetReadyConsent_Parms
		{
			FSetReadyConsentRequest Request;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, Request), Z_Construct_UScriptStruct_FSetReadyConsentRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetReadyConsent", nullptr, nullptr, sizeof(ABMatchmaking_eventSetReadyConsent_Parms), Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetReadyConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics
	{
		struct ABMatchmaking_eventSetRejectConsent_Parms
		{
			FSetRejectConsentRequest Request;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, Request), Z_Construct_UScriptStruct_FSetRejectConsentRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetRejectConsent", nullptr, nullptr, sizeof(ABMatchmaking_eventSetRejectConsent_Parms), Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_SetRejectConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics
	{
		struct ABMatchmaking_eventStartMatchmaking_Parms
		{
			FStartMatchmakingRequest Request;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, Request), Z_Construct_UScriptStruct_FStartMatchmakingRequest, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DStartMatchmakingResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "StartMatchmaking", nullptr, nullptr, sizeof(ABMatchmaking_eventStartMatchmaking_Parms), Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABMatchmaking_StartMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABMatchmaking_NoRegister()
	{
		return UABMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UABMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking, "CancelMatchmaking" }, // 910350058
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnDs, "SetOnDs" }, // 1419116130
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking, "SetOnMatchmaking" }, // 3840257685
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking, "SetOnRematchmaking" }, // 1135818185
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent, "SetOnSetReadyConsent" }, // 3551494264
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent, "SetOnSetRejectConsent" }, // 3523876113
		{ &Z_Construct_UFunction_UABMatchmaking_SetReadyConsent, "SetReadyConsent" }, // 1051446318
		{ &Z_Construct_UFunction_UABMatchmaking_SetRejectConsent, "SetRejectConsent" }, // 1328441597
		{ &Z_Construct_UFunction_UABMatchmaking_StartMatchmaking, "StartMatchmaking" }, // 2981431520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABMatchmaking_Statics::ClassParams = {
		&UABMatchmaking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABMatchmaking, 1840467989);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABMatchmaking>()
	{
		return UABMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABMatchmaking(Z_Construct_UClass_UABMatchmaking, &UABMatchmaking::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
