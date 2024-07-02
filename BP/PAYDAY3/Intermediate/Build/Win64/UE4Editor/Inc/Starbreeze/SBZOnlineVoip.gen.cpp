// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineVoip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineVoip() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineVoip_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineVoip();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineVoip::execGetCaptureDeviceAmplitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCaptureDeviceAmplitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineVoip::execGetCaptureDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCaptureDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineVoip::execGetSBZOnlineVoip)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZOnlineVoip**)Z_Param__Result=USBZOnlineVoip::GetSBZOnlineVoip(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineVoip::execGetSelectedCaptureDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSelectedCaptureDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineVoip::execHandleStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEntered(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineVoip::execSetCaptureDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCaptureDevice(Z_Param_DeviceName);
		P_NATIVE_END;
	}
	void USBZOnlineVoip::StaticRegisterNativesUSBZOnlineVoip()
	{
		UClass* Class = USBZOnlineVoip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCaptureDeviceAmplitude", &USBZOnlineVoip::execGetCaptureDeviceAmplitude },
			{ "GetCaptureDevices", &USBZOnlineVoip::execGetCaptureDevices },
			{ "GetSBZOnlineVoip", &USBZOnlineVoip::execGetSBZOnlineVoip },
			{ "GetSelectedCaptureDevice", &USBZOnlineVoip::execGetSelectedCaptureDevice },
			{ "HandleStateEntered", &USBZOnlineVoip::execHandleStateEntered },
			{ "SetCaptureDevice", &USBZOnlineVoip::execSetCaptureDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics
	{
		struct SBZOnlineVoip_eventGetCaptureDeviceAmplitude_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventGetCaptureDeviceAmplitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "GetCaptureDeviceAmplitude", nullptr, nullptr, sizeof(SBZOnlineVoip_eventGetCaptureDeviceAmplitude_Parms), Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics
	{
		struct SBZOnlineVoip_eventGetCaptureDevices_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventGetCaptureDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "GetCaptureDevices", nullptr, nullptr, sizeof(SBZOnlineVoip_eventGetCaptureDevices_Parms), Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics
	{
		struct SBZOnlineVoip_eventGetSBZOnlineVoip_Parms
		{
			const UObject* WorldContextObject;
			USBZOnlineVoip* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventGetSBZOnlineVoip_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventGetSBZOnlineVoip_Parms, ReturnValue), Z_Construct_UClass_USBZOnlineVoip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "GetSBZOnlineVoip", nullptr, nullptr, sizeof(SBZOnlineVoip_eventGetSBZOnlineVoip_Parms), Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics
	{
		struct SBZOnlineVoip_eventGetSelectedCaptureDevice_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventGetSelectedCaptureDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "GetSelectedCaptureDevice", nullptr, nullptr, sizeof(SBZOnlineVoip_eventGetSelectedCaptureDevice_Parms), Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics
	{
		struct SBZOnlineVoip_eventHandleStateEntered_Parms
		{
			FName NewState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventHandleStateEntered_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "HandleStateEntered", nullptr, nullptr, sizeof(SBZOnlineVoip_eventHandleStateEntered_Parms), Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics
	{
		struct SBZOnlineVoip_eventSetCaptureDevice_Parms
		{
			FString DeviceName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineVoip_eventSetCaptureDevice_Parms, DeviceName), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::NewProp_DeviceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineVoip, nullptr, "SetCaptureDevice", nullptr, nullptr, sizeof(SBZOnlineVoip_eventSetCaptureDevice_Parms), Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineVoip_NoRegister()
	{
		return USBZOnlineVoip::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineVoip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineVoip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineVoip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDeviceAmplitude, "GetCaptureDeviceAmplitude" }, // 1019033271
		{ &Z_Construct_UFunction_USBZOnlineVoip_GetCaptureDevices, "GetCaptureDevices" }, // 3129955945
		{ &Z_Construct_UFunction_USBZOnlineVoip_GetSBZOnlineVoip, "GetSBZOnlineVoip" }, // 2180287572
		{ &Z_Construct_UFunction_USBZOnlineVoip_GetSelectedCaptureDevice, "GetSelectedCaptureDevice" }, // 2809780649
		{ &Z_Construct_UFunction_USBZOnlineVoip_HandleStateEntered, "HandleStateEntered" }, // 1816335357
		{ &Z_Construct_UFunction_USBZOnlineVoip_SetCaptureDevice, "SetCaptureDevice" }, // 1427327595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineVoip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineVoip.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineVoip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineVoip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineVoip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineVoip_Statics::ClassParams = {
		&USBZOnlineVoip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineVoip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineVoip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineVoip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineVoip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineVoip, 1559844058);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineVoip>()
	{
		return USBZOnlineVoip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineVoip(Z_Construct_UClass_USBZOnlineVoip, &USBZOnlineVoip::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineVoip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineVoip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
