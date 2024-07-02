// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmbientSoundComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmbientSoundComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execDisableAmbientSoundComponent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkAudioCloseEvent);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAmbientSoundComponent(Z_Param_AkAudioCloseEvent,Z_Param_NewEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execEnableAmbientSoundComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAmbientSoundComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execGetAttenuation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execIsAmbientSoundComponentEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAmbientSoundComponentEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execSetAudioEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_InAkAudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioEvent(Z_Param_InAkAudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_InRtpc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRTPCValue(Z_Param_InRtpc,Z_Param_Value,Z_Param_InterpolationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundComponent::execSetSwitchState)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSwitchGroup);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitchState(Z_Param_SwitchValue,Z_Param_InSwitchGroup,Z_Param_InSwitchState);
		P_NATIVE_END;
	}
	void USBZAmbientSoundComponent::StaticRegisterNativesUSBZAmbientSoundComponent()
	{
		UClass* Class = USBZAmbientSoundComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAmbientSoundComponent", &USBZAmbientSoundComponent::execDisableAmbientSoundComponent },
			{ "EnableAmbientSoundComponent", &USBZAmbientSoundComponent::execEnableAmbientSoundComponent },
			{ "GetAttenuation", &USBZAmbientSoundComponent::execGetAttenuation },
			{ "IsAmbientSoundComponentEnabled", &USBZAmbientSoundComponent::execIsAmbientSoundComponentEnabled },
			{ "SetAudioEvent", &USBZAmbientSoundComponent::execSetAudioEvent },
			{ "SetRTPCValue", &USBZAmbientSoundComponent::execSetRTPCValue },
			{ "SetSwitchState", &USBZAmbientSoundComponent::execSetSwitchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics
	{
		struct SBZAmbientSoundComponent_eventDisableAmbientSoundComponent_Parms
		{
			UAkAudioEvent* AkAudioCloseEvent;
			FString NewEventName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioCloseEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewEventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_AkAudioCloseEvent = { "AkAudioCloseEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventDisableAmbientSoundComponent_Parms, AkAudioCloseEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_NewEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_NewEventName = { "NewEventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventDisableAmbientSoundComponent_Parms, NewEventName), METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_NewEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_NewEventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_AkAudioCloseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::NewProp_NewEventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "DisableAmbientSoundComponent", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventDisableAmbientSoundComponent_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "EnableAmbientSoundComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics
	{
		struct SBZAmbientSoundComponent_eventGetAttenuation_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventGetAttenuation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "GetAttenuation", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventGetAttenuation_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics
	{
		struct SBZAmbientSoundComponent_eventIsAmbientSoundComponentEnabled_Parms
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
	void Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAmbientSoundComponent_eventIsAmbientSoundComponentEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAmbientSoundComponent_eventIsAmbientSoundComponentEnabled_Parms), &Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "IsAmbientSoundComponentEnabled", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventIsAmbientSoundComponentEnabled_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics
	{
		struct SBZAmbientSoundComponent_eventSetAudioEvent_Parms
		{
			UAkAudioEvent* InAkAudioEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAkAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::NewProp_InAkAudioEvent = { "InAkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetAudioEvent_Parms, InAkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::NewProp_InAkAudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "SetAudioEvent", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventSetAudioEvent_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics
	{
		struct SBZAmbientSoundComponent_eventSetRTPCValue_Parms
		{
			UAkRtpc* InRtpc;
			float Value;
			int32 InterpolationTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRtpc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_InRtpc = { "InRtpc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetRTPCValue_Parms, InRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetRTPCValue_Parms, InterpolationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_InRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::NewProp_InterpolationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventSetRTPCValue_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics
	{
		struct SBZAmbientSoundComponent_eventSetSwitchState_Parms
		{
			const UAkSwitchValue* SwitchValue;
			FString InSwitchGroup;
			FString InSwitchState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSwitchGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSwitchGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSwitchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetSwitchState_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_SwitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_SwitchValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchGroup = { "InSwitchGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetSwitchState_Parms, InSwitchGroup), METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchState = { "InSwitchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSoundComponent_eventSetSwitchState_Parms, InSwitchState), METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_SwitchValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::NewProp_InSwitchState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundComponent, nullptr, "SetSwitchState", nullptr, nullptr, sizeof(SBZAmbientSoundComponent_eventSetSwitchState_Parms), Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister()
	{
		return USBZAmbientSoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAmbientSoundComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientAkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSoundComponentEnabled_MetaData[];
#endif
		static void NewProp_bIsSoundComponentEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSoundComponentEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAreaAttenuationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveAreaAttenuationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultAttenuation_MetaData[];
#endif
		static void NewProp_bUseDefaultAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultAttenuation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioSwitches_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioSwitches_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AudioSwitches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEndpoints_MetaData[];
#endif
		static void NewProp_bHasEndpoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEndpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationSquared;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAmbientSoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAmbientSoundComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_DisableAmbientSoundComponent, "DisableAmbientSoundComponent" }, // 3320420936
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_EnableAmbientSoundComponent, "EnableAmbientSoundComponent" }, // 1735713458
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_GetAttenuation, "GetAttenuation" }, // 1485901314
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_IsAmbientSoundComponentEnabled, "IsAmbientSoundComponentEnabled" }, // 1058627297
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_SetAudioEvent, "SetAudioEvent" }, // 2410109007
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_SetRTPCValue, "SetRTPCValue" }, // 805505535
		{ &Z_Construct_UFunction_USBZAmbientSoundComponent_SetSwitchState, "SetSwitchState" }, // 773544621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZAmbientSoundComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AmbientAkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AmbientAkComponent = { "AmbientAkComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, AmbientAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AmbientAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AmbientAkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled_SetBit(void* Obj)
	{
		((USBZAmbientSoundComponent*)Obj)->bIsSoundComponentEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled = { "bIsSoundComponentEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAmbientSoundComponent), &Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, EventName), METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_ActiveAreaAttenuationScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_ActiveAreaAttenuationScale = { "ActiveAreaAttenuationScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, ActiveAreaAttenuationScale), METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_ActiveAreaAttenuationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_ActiveAreaAttenuationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_DefaultAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_DefaultAttenuation = { "DefaultAttenuation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, DefaultAttenuation), METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_DefaultAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_DefaultAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation_SetBit(void* Obj)
	{
		((USBZAmbientSoundComponent*)Obj)->bUseDefaultAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation = { "bUseDefaultAttenuation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAmbientSoundComponent), &Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_ValueProp = { "AudioSwitches", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_Key_KeyProp = { "AudioSwitches_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches = { "AudioSwitches", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, AudioSwitches), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_StartPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints_SetBit(void* Obj)
	{
		((USBZAmbientSoundComponent*)Obj)->bHasEndpoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints = { "bHasEndpoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAmbientSoundComponent), &Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AttenuationSquared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AttenuationSquared = { "AttenuationSquared", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundComponent, AttenuationSquared), METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AttenuationSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AttenuationSquared_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAmbientSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AmbientAkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bIsSoundComponentEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_ActiveAreaAttenuationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_DefaultAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bUseDefaultAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AudioSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_bHasEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundComponent_Statics::NewProp_AttenuationSquared,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAmbientSoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAmbientSoundComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAmbientSoundComponent_Statics::ClassParams = {
		&USBZAmbientSoundComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAmbientSoundComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAmbientSoundComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAmbientSoundComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAmbientSoundComponent, 997065556);
	template<> STARBREEZE_API UClass* StaticClass<USBZAmbientSoundComponent>()
	{
		return USBZAmbientSoundComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAmbientSoundComponent(Z_Construct_UClass_USBZAmbientSoundComponent, &USBZAmbientSoundComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAmbientSoundComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAmbientSoundComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
