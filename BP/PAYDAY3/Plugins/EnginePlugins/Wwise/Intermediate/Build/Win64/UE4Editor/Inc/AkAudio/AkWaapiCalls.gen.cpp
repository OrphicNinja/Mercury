// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiCalls.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiCalls() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiCalls();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAkWaapiCalls::execCallWaapi)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri);
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiArgs);
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::CallWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiArgs,Z_Param_Out_WaapiOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToString)
	{
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(Z_Param_Out_INAkWaapiSubscriptionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToText)
	{
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_INAkWaapiSubscriptionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(Z_Param_Out_INAkWaapiSubscriptionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execGetSubscriptionID)
	{
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkWaapiCalls::GetSubscriptionID(Z_Param_Out_Subscription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execRegisterWaapiConnectionLostCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FOnWaapiConnectionLost(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execRegisterWaapiProjectLoadedCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FOnWaapiProjectLoaded(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execSetSubscriptionID)
	{
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_Subscription);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkWaapiCalls::SetSubscriptionID(Z_Param_Out_Subscription,Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execSubscribeToWaapi)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_WaapiUri);
		P_GET_STRUCT_REF(FAKWaapiJsonObject,Z_Param_Out_WaapiOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CallBack);
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId);
		P_GET_UBOOL_REF(Z_Param_Out_SubscriptionDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::SubscribeToWaapi(Z_Param_Out_WaapiUri,Z_Param_Out_WaapiOptions,FOnEventCallback(Z_Param_Out_CallBack),Z_Param_Out_SubscriptionId,Z_Param_Out_SubscriptionDone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiCalls::execUnsubscribe)
	{
		P_GET_STRUCT_REF(FAkWaapiSubscriptionId,Z_Param_Out_SubscriptionId);
		P_GET_UBOOL_REF(Z_Param_Out_UnsubscriptionDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiCalls::Unsubscribe(Z_Param_Out_SubscriptionId,Z_Param_Out_UnsubscriptionDone);
		P_NATIVE_END;
	}
	void UAkWaapiCalls::StaticRegisterNativesUAkWaapiCalls()
	{
		UClass* Class = UAkWaapiCalls::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallWaapi", &UAkWaapiCalls::execCallWaapi },
			{ "Conv_FAkWaapiSubscriptionIdToString", &UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToString },
			{ "Conv_FAkWaapiSubscriptionIdToText", &UAkWaapiCalls::execConv_FAkWaapiSubscriptionIdToText },
			{ "GetSubscriptionID", &UAkWaapiCalls::execGetSubscriptionID },
			{ "RegisterWaapiConnectionLostCallback", &UAkWaapiCalls::execRegisterWaapiConnectionLostCallback },
			{ "RegisterWaapiProjectLoadedCallback", &UAkWaapiCalls::execRegisterWaapiProjectLoadedCallback },
			{ "SetSubscriptionID", &UAkWaapiCalls::execSetSubscriptionID },
			{ "SubscribeToWaapi", &UAkWaapiCalls::execSubscribeToWaapi },
			{ "Unsubscribe", &UAkWaapiCalls::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics
	{
		struct AkWaapiCalls_eventCallWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiArgs;
			FAKWaapiJsonObject WaapiOptions;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiUri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri = { "WaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs = { "WaapiArgs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiArgs), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions = { "WaapiOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, WaapiOptions), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventCallWaapi_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_WaapiOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "CallWaapi", nullptr, nullptr, sizeof(AkWaapiCalls_eventCallWaapi_Parms), Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_CallWaapi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_CallWaapi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiSubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiSubscriptionId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId = { "INAkWaapiSubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms, INAkWaapiSubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_INAkWaapiSubscriptionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Conv_FAkWaapiSubscriptionIdToString", nullptr, nullptr, sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToString_Parms), Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics
	{
		struct AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms
		{
			FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiSubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiSubscriptionId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId = { "INAkWaapiSubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms, INAkWaapiSubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_INAkWaapiSubscriptionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Conv_FAkWaapiSubscriptionIdToText", nullptr, nullptr, sizeof(AkWaapiCalls_eventConv_FAkWaapiSubscriptionIdToText_Parms), Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics
	{
		struct AkWaapiCalls_eventGetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subscription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription = { "Subscription", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventGetSubscriptionID_Parms, Subscription), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventGetSubscriptionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_Subscription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "GetSubscriptionID", nullptr, nullptr, sizeof(AkWaapiCalls_eventGetSubscriptionID_Parms), Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics
	{
		struct AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms, Callback), Z_Construct_UDelegateFunction_AkAudio_OnWaapiConnectionLost__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback_MetaData)) };
	void Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "RegisterWaapiConnectionLostCallback", nullptr, nullptr, sizeof(AkWaapiCalls_eventRegisterWaapiConnectionLostCallback_Parms), Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics
	{
		struct AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms
		{
			FScriptDelegate Callback;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms, Callback), Z_Construct_UDelegateFunction_AkAudio_OnWaapiProjectLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback_MetaData)) };
	void Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "RegisterWaapiProjectLoadedCallback", nullptr, nullptr, sizeof(AkWaapiCalls_eventRegisterWaapiProjectLoadedCallback_Parms), Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics
	{
		struct AkWaapiCalls_eventSetSubscriptionID_Parms
		{
			FAkWaapiSubscriptionId Subscription;
			int32 id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subscription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription = { "Subscription", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSetSubscriptionID_Parms, Subscription), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSetSubscriptionID_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_Subscription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "SetSubscriptionID", nullptr, nullptr, sizeof(AkWaapiCalls_eventSetSubscriptionID_Parms), Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics
	{
		struct AkWaapiCalls_eventSubscribeToWaapi_Parms
		{
			FAkWaapiUri WaapiUri;
			FAKWaapiJsonObject WaapiOptions;
			FScriptDelegate CallBack;
			FAkWaapiSubscriptionId SubscriptionId;
			bool SubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiUri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaapiOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaapiOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CallBack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
		static void NewProp_SubscriptionDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SubscriptionDone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri = { "WaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, WaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions = { "WaapiOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, WaapiOptions), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack = { "CallBack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, CallBack), Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventSubscribeToWaapi_Parms*)Obj)->SubscriptionDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone = { "SubscriptionDone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventSubscribeToWaapi_Parms), &Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventSubscribeToWaapi_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_WaapiOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_CallBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_SubscriptionDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "SubscribeToWaapi", nullptr, nullptr, sizeof(AkWaapiCalls_eventSubscribeToWaapi_Parms), Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics
	{
		struct AkWaapiCalls_eventUnsubscribe_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			bool UnsubscriptionDone;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
		static void NewProp_UnsubscriptionDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnsubscriptionDone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventUnsubscribe_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId_MetaData)) };
	void Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone_SetBit(void* Obj)
	{
		((AkWaapiCalls_eventUnsubscribe_Parms*)Obj)->UnsubscriptionDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone = { "UnsubscriptionDone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkWaapiCalls_eventUnsubscribe_Parms), &Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiCalls_eventUnsubscribe_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_SubscriptionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_UnsubscriptionDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiCalls, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(AkWaapiCalls_eventUnsubscribe_Parms), Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiCalls_NoRegister()
	{
		return UAkWaapiCalls::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiCalls_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiCalls_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiCalls_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiCalls_CallWaapi, "CallWaapi" }, // 682623191
		{ &Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString, "Conv_FAkWaapiSubscriptionIdToString" }, // 1548484158
		{ &Z_Construct_UFunction_UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText, "Conv_FAkWaapiSubscriptionIdToText" }, // 1550037057
		{ &Z_Construct_UFunction_UAkWaapiCalls_GetSubscriptionID, "GetSubscriptionID" }, // 1329027386
		{ &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiConnectionLostCallback, "RegisterWaapiConnectionLostCallback" }, // 505159452
		{ &Z_Construct_UFunction_UAkWaapiCalls_RegisterWaapiProjectLoadedCallback, "RegisterWaapiProjectLoadedCallback" }, // 3119912901
		{ &Z_Construct_UFunction_UAkWaapiCalls_SetSubscriptionID, "SetSubscriptionID" }, // 3939606972
		{ &Z_Construct_UFunction_UAkWaapiCalls_SubscribeToWaapi, "SubscribeToWaapi" }, // 3462764036
		{ &Z_Construct_UFunction_UAkWaapiCalls_Unsubscribe, "Unsubscribe" }, // 518155359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkWaapiCalls.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiCalls.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiCalls_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiCalls>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiCalls_Statics::ClassParams = {
		&UAkWaapiCalls::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiCalls_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWaapiCalls()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWaapiCalls_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiCalls, 4034147336);
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiCalls>()
	{
		return UAkWaapiCalls::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiCalls(Z_Construct_UClass_UAkWaapiCalls, &UAkWaapiCalls::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiCalls"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiCalls);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
