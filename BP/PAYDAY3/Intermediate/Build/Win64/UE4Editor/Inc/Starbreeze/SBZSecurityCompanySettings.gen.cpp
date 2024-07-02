// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityCompanySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityCompanySettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecurityCompanySettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecurityCompanySettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZSecurityCompanySettingData*)Z_Param__Result=USBZSecurityCompanySettings::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasAICore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasAICore(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasAIShielding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasAIShielding(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasAlphaStrike)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasAlphaStrike(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasArmorPiercing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasArmorPiercing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasBuddySystem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasBuddySystem(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasCameraRuntimeLimit)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasCameraRuntimeLimit(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasDebilitatingSpecials)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasDebilitatingSpecials(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasFacialRecognition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasFacialRecognition(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasHardBargain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasHardBargain(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasIndestructibleCameras)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasIndestructibleCameras(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasLeadGuard)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasLeadGuard(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecurityCompanySettings::execHasReflectorShields)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSecurityCompanySettings::HasReflectorShields(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZSecurityCompanySettings::StaticRegisterNativesUSBZSecurityCompanySettings()
	{
		UClass* Class = USBZSecurityCompanySettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSecurityCompanySettings::execGet },
			{ "HasAICore", &USBZSecurityCompanySettings::execHasAICore },
			{ "HasAIShielding", &USBZSecurityCompanySettings::execHasAIShielding },
			{ "HasAlphaStrike", &USBZSecurityCompanySettings::execHasAlphaStrike },
			{ "HasArmorPiercing", &USBZSecurityCompanySettings::execHasArmorPiercing },
			{ "HasBuddySystem", &USBZSecurityCompanySettings::execHasBuddySystem },
			{ "HasCameraRuntimeLimit", &USBZSecurityCompanySettings::execHasCameraRuntimeLimit },
			{ "HasDebilitatingSpecials", &USBZSecurityCompanySettings::execHasDebilitatingSpecials },
			{ "HasFacialRecognition", &USBZSecurityCompanySettings::execHasFacialRecognition },
			{ "HasHardBargain", &USBZSecurityCompanySettings::execHasHardBargain },
			{ "HasIndestructibleCameras", &USBZSecurityCompanySettings::execHasIndestructibleCameras },
			{ "HasLeadGuard", &USBZSecurityCompanySettings::execHasLeadGuard },
			{ "HasReflectorShields", &USBZSecurityCompanySettings::execHasReflectorShields },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics
	{
		struct SBZSecurityCompanySettings_eventGet_Parms
		{
			FSBZSecurityCompanySettingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventGet_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "Get", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventGet_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics
	{
		struct SBZSecurityCompanySettings_eventHasAICore_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasAICore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasAICore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasAICore_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasAICore", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasAICore_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics
	{
		struct SBZSecurityCompanySettings_eventHasAIShielding_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasAIShielding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasAIShielding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasAIShielding_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasAIShielding", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasAIShielding_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics
	{
		struct SBZSecurityCompanySettings_eventHasAlphaStrike_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasAlphaStrike_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasAlphaStrike_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasAlphaStrike_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasAlphaStrike", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasAlphaStrike_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics
	{
		struct SBZSecurityCompanySettings_eventHasArmorPiercing_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasArmorPiercing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasArmorPiercing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasArmorPiercing_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasArmorPiercing", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasArmorPiercing_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics
	{
		struct SBZSecurityCompanySettings_eventHasBuddySystem_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasBuddySystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasBuddySystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasBuddySystem_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasBuddySystem", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasBuddySystem_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics
	{
		struct SBZSecurityCompanySettings_eventHasCameraRuntimeLimit_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasCameraRuntimeLimit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasCameraRuntimeLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasCameraRuntimeLimit_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasCameraRuntimeLimit", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasCameraRuntimeLimit_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics
	{
		struct SBZSecurityCompanySettings_eventHasDebilitatingSpecials_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasDebilitatingSpecials_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasDebilitatingSpecials_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasDebilitatingSpecials_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasDebilitatingSpecials", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasDebilitatingSpecials_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics
	{
		struct SBZSecurityCompanySettings_eventHasFacialRecognition_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasFacialRecognition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasFacialRecognition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasFacialRecognition_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasFacialRecognition", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasFacialRecognition_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics
	{
		struct SBZSecurityCompanySettings_eventHasHardBargain_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasHardBargain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasHardBargain_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasHardBargain_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasHardBargain", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasHardBargain_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics
	{
		struct SBZSecurityCompanySettings_eventHasIndestructibleCameras_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasIndestructibleCameras_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasIndestructibleCameras_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasIndestructibleCameras_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasIndestructibleCameras", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasIndestructibleCameras_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics
	{
		struct SBZSecurityCompanySettings_eventHasLeadGuard_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasLeadGuard_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasLeadGuard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasLeadGuard_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasLeadGuard", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasLeadGuard_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics
	{
		struct SBZSecurityCompanySettings_eventHasReflectorShields_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCompanySettings_eventHasReflectorShields_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCompanySettings_eventHasReflectorShields_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCompanySettings_eventHasReflectorShields_Parms), &Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecurityCompanySettings, nullptr, "HasReflectorShields", nullptr, nullptr, sizeof(SBZSecurityCompanySettings_eventHasReflectorShields_Parms), Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSecurityCompanySettings_NoRegister()
	{
		return USBZSecurityCompanySettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZSecurityCompanySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSecurityCompanySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSecurityCompanySettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_Get, "Get" }, // 2212983732
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAICore, "HasAICore" }, // 3538048227
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAIShielding, "HasAIShielding" }, // 1386648761
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasAlphaStrike, "HasAlphaStrike" }, // 3652989013
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasArmorPiercing, "HasArmorPiercing" }, // 4124515472
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasBuddySystem, "HasBuddySystem" }, // 2753499059
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasCameraRuntimeLimit, "HasCameraRuntimeLimit" }, // 738377193
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasDebilitatingSpecials, "HasDebilitatingSpecials" }, // 387440887
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasFacialRecognition, "HasFacialRecognition" }, // 2161222553
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasHardBargain, "HasHardBargain" }, // 3545209431
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasIndestructibleCameras, "HasIndestructibleCameras" }, // 3549415765
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasLeadGuard, "HasLeadGuard" }, // 3195247841
		{ &Z_Construct_UFunction_USBZSecurityCompanySettings_HasReflectorShields, "HasReflectorShields" }, // 2051543416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecurityCompanySettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecurityCompanySettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecurityCompanySettings_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCompanySettings" },
		{ "ModuleRelativePath", "Public/SBZSecurityCompanySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSecurityCompanySettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecurityCompanySettings, Settings), Z_Construct_UScriptStruct_FSBZSecurityCompanySettingData, METADATA_PARAMS(Z_Construct_UClass_USBZSecurityCompanySettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanySettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSecurityCompanySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecurityCompanySettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSecurityCompanySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSecurityCompanySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSecurityCompanySettings_Statics::ClassParams = {
		&USBZSecurityCompanySettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSecurityCompanySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanySettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSecurityCompanySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecurityCompanySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSecurityCompanySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSecurityCompanySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSecurityCompanySettings, 2153947427);
	template<> STARBREEZE_API UClass* StaticClass<USBZSecurityCompanySettings>()
	{
		return USBZSecurityCompanySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSecurityCompanySettings(Z_Construct_UClass_USBZSecurityCompanySettings, &USBZSecurityCompanySettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSecurityCompanySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSecurityCompanySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
