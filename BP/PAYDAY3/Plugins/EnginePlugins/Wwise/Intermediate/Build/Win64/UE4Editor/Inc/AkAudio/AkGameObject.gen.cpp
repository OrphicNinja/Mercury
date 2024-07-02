// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGameObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameObject() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	DEFINE_FUNCTION(UAkGameObject::execGetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
		P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAkEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_in_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAkEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAkEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAssociatedAkEventAsync(Z_Param_WorldContextObject,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_LatentInfo,Z_Param_Out_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void UAkGameObject::StaticRegisterNativesUAkGameObject()
	{
		UClass* Class = UAkGameObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRTPCValue", &UAkGameObject::execGetRTPCValue },
			{ "PostAkEvent", &UAkGameObject::execPostAkEvent },
			{ "PostAkEventAsync", &UAkGameObject::execPostAkEventAsync },
			{ "PostAssociatedAkEvent", &UAkGameObject::execPostAssociatedAkEvent },
			{ "PostAssociatedAkEventAsync", &UAkGameObject::execPostAssociatedAkEventAsync },
			{ "SetRTPCValue", &UAkGameObject::execSetRTPCValue },
			{ "Stop", &UAkGameObject::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics
	{
		struct AkGameObject_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			FString RTPC;
			int32 PlayingID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "GetRTPCValue", nullptr, nullptr, sizeof(AkGameObject_eventGetRTPCValue_Parms), Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics
	{
		struct AkGameObject_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FString in_EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEvent", nullptr, nullptr, sizeof(AkGameObject_eventPostAkEvent_Parms), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEventAsync", nullptr, nullptr, sizeof(AkGameObject_eventPostAkEventAsync_Parms), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEvent_Parms
		{
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEvent", nullptr, nullptr, sizeof(AkGameObject_eventPostAssociatedAkEvent_Parms), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 PlayingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEventAsync", nullptr, nullptr, sizeof(AkGameObject_eventPostAssociatedAkEventAsync_Parms), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics
	{
		struct AkGameObject_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			FString RTPC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(AkGameObject_eventSetRTPCValue_Parms), Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameObject_NoRegister()
	{
		return UAkGameObject::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameObject_GetRTPCValue, "GetRTPCValue" }, // 3040372329
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEvent, "PostAkEvent" }, // 2697577116
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEventAsync, "PostAkEventAsync" }, // 1881548120
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 4036421514
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync, "PostAssociatedAkEventAsync" }, // 1253155883
		{ &Z_Construct_UFunction_UAkGameObject_SetRTPCValue, "SetRTPCValue" }, // 2961845082
		{ &Z_Construct_UFunction_UAkGameObject_Stop, "Stop" }, // 3452086801
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkGameObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGameObject" },
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGameObject, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGameObject" },
		{ "ModuleRelativePath", "Public/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGameObject, EventName), METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGameObject_Statics::ClassParams = {
		&UAkGameObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGameObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGameObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGameObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameObject, 48985310);
	template<> AKAUDIO_API UClass* StaticClass<UAkGameObject>()
	{
		return UAkGameObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameObject(Z_Construct_UClass_UAkGameObject, &UAkGameObject::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
