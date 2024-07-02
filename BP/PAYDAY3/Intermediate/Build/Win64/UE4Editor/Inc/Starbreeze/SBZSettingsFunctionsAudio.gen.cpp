// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsFunctionsAudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsFunctionsAudio() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsAudio_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsAudio();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetCinematicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetCinematicVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultCinematicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultCinematicVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultMasterVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultMasterVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultMusicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultMusicVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultSFXVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultSFXVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultVoIPVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultVoIPVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetDefaultVOVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetDefaultVOVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetMasterVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetMasterVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetMusicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetMusicVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetSFXVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetSFXVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetVoIPVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetVoIPVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execGetVOVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZSettingsFunctionsAudio::GetVOVolume(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetCinematicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetCinematicVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetMasterVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetMasterVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetMusicVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetMusicVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetSFXVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetSFXVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetVoIPVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetVoIPVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsAudio::execSetVOVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsAudio::SetVOVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	void USBZSettingsFunctionsAudio::StaticRegisterNativesUSBZSettingsFunctionsAudio()
	{
		UClass* Class = USBZSettingsFunctionsAudio::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCinematicVolume", &USBZSettingsFunctionsAudio::execGetCinematicVolume },
			{ "GetDefaultCinematicVolume", &USBZSettingsFunctionsAudio::execGetDefaultCinematicVolume },
			{ "GetDefaultMasterVolume", &USBZSettingsFunctionsAudio::execGetDefaultMasterVolume },
			{ "GetDefaultMusicVolume", &USBZSettingsFunctionsAudio::execGetDefaultMusicVolume },
			{ "GetDefaultSFXVolume", &USBZSettingsFunctionsAudio::execGetDefaultSFXVolume },
			{ "GetDefaultVoIPVolume", &USBZSettingsFunctionsAudio::execGetDefaultVoIPVolume },
			{ "GetDefaultVOVolume", &USBZSettingsFunctionsAudio::execGetDefaultVOVolume },
			{ "GetMasterVolume", &USBZSettingsFunctionsAudio::execGetMasterVolume },
			{ "GetMusicVolume", &USBZSettingsFunctionsAudio::execGetMusicVolume },
			{ "GetSFXVolume", &USBZSettingsFunctionsAudio::execGetSFXVolume },
			{ "GetVoIPVolume", &USBZSettingsFunctionsAudio::execGetVoIPVolume },
			{ "GetVOVolume", &USBZSettingsFunctionsAudio::execGetVOVolume },
			{ "SetCinematicVolume", &USBZSettingsFunctionsAudio::execSetCinematicVolume },
			{ "SetMasterVolume", &USBZSettingsFunctionsAudio::execSetMasterVolume },
			{ "SetMusicVolume", &USBZSettingsFunctionsAudio::execSetMusicVolume },
			{ "SetSFXVolume", &USBZSettingsFunctionsAudio::execSetSFXVolume },
			{ "SetVoIPVolume", &USBZSettingsFunctionsAudio::execSetVoIPVolume },
			{ "SetVOVolume", &USBZSettingsFunctionsAudio::execSetVOVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetCinematicVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetCinematicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetCinematicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetCinematicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetCinematicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultCinematicVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultCinematicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultCinematicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultCinematicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultCinematicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultMasterVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultMasterVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultMasterVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultMasterVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultMasterVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultMusicVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultMusicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultMusicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultMusicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultSFXVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultSFXVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultSFXVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultSFXVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultSFXVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultVoIPVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultVoIPVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultVoIPVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultVoIPVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultVoIPVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetDefaultVOVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultVOVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetDefaultVOVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetDefaultVOVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetDefaultVOVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetMasterVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetMasterVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetMasterVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetMasterVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetMusicVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetMusicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetMusicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetMusicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetSFXVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetSFXVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetSFXVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetSFXVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetVoIPVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetVoIPVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetVoIPVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetVoIPVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetVoIPVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventGetVOVolume_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetVOVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventGetVOVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "GetVOVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventGetVOVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetCinematicVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetCinematicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetCinematicVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetCinematicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetCinematicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetMasterVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetMasterVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetMasterVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetMasterVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetMasterVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetMusicVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetMusicVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetMusicVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetMusicVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetMusicVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetSFXVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetSFXVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetSFXVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetSFXVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetSFXVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetVoIPVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetVoIPVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetVoIPVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetVoIPVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetVoIPVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics
	{
		struct SBZSettingsFunctionsAudio_eventSetVOVolume_Parms
		{
			UObject* WorldContextObject;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetVOVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsAudio_eventSetVOVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsAudio, nullptr, "SetVOVolume", nullptr, nullptr, sizeof(SBZSettingsFunctionsAudio_eventSetVOVolume_Parms), Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsFunctionsAudio_NoRegister()
	{
		return USBZSettingsFunctionsAudio::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsFunctions,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetCinematicVolume, "GetCinematicVolume" }, // 365844529
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultCinematicVolume, "GetDefaultCinematicVolume" }, // 1429440994
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMasterVolume, "GetDefaultMasterVolume" }, // 3140285761
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultMusicVolume, "GetDefaultMusicVolume" }, // 3057631323
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultSFXVolume, "GetDefaultSFXVolume" }, // 2662453258
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVoIPVolume, "GetDefaultVoIPVolume" }, // 2711137244
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetDefaultVOVolume, "GetDefaultVOVolume" }, // 2179044202
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMasterVolume, "GetMasterVolume" }, // 2254001262
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetMusicVolume, "GetMusicVolume" }, // 1663852476
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetSFXVolume, "GetSFXVolume" }, // 3107267229
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVoIPVolume, "GetVoIPVolume" }, // 3824865502
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_GetVOVolume, "GetVOVolume" }, // 1954421904
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetCinematicVolume, "SetCinematicVolume" }, // 823143560
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMasterVolume, "SetMasterVolume" }, // 108580230
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetMusicVolume, "SetMusicVolume" }, // 1398854916
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetSFXVolume, "SetSFXVolume" }, // 1014558344
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVoIPVolume, "SetVoIPVolume" }, // 4229656803
		{ &Z_Construct_UFunction_USBZSettingsFunctionsAudio_SetVOVolume, "SetVOVolume" }, // 969297779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsFunctionsAudio.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsAudio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsFunctionsAudio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::ClassParams = {
		&USBZSettingsFunctionsAudio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsFunctionsAudio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsFunctionsAudio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsFunctionsAudio, 4221315830);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsFunctionsAudio>()
	{
		return USBZSettingsFunctionsAudio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsFunctionsAudio(Z_Construct_UClass_USBZSettingsFunctionsAudio, &USBZSettingsFunctionsAudio::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsFunctionsAudio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsFunctionsAudio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
