// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsFunctionsKeyboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsFunctionsKeyboard() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsKeyboard_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsKeyboard();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execGetDefaultPrimaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsKeyboard::GetDefaultPrimaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execGetDefaultSecondaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsKeyboard::GetDefaultSecondaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execGetPrimaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsKeyboard::GetPrimaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execGetSecondaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsKeyboard::GetSecondaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execSetPrimaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FInputChord,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsKeyboard::SetPrimaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale,Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsKeyboard::execSetSecondaryKeyboardBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FInputChord,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsKeyboard::SetSecondaryKeyboardBinding(Z_Param_WorldContextObject,Z_Param_AxisOrActionName,Z_Param_Scale,Z_Param_Binding);
		P_NATIVE_END;
	}
	void USBZSettingsFunctionsKeyboard::StaticRegisterNativesUSBZSettingsFunctionsKeyboard()
	{
		UClass* Class = USBZSettingsFunctionsKeyboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultPrimaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execGetDefaultPrimaryKeyboardBinding },
			{ "GetDefaultSecondaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execGetDefaultSecondaryKeyboardBinding },
			{ "GetPrimaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execGetPrimaryKeyboardBinding },
			{ "GetSecondaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execGetSecondaryKeyboardBinding },
			{ "SetPrimaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execSetPrimaryKeyboardBinding },
			{ "SetSecondaryKeyboardBinding", &USBZSettingsFunctionsKeyboard::execSetSecondaryKeyboardBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "GetDefaultPrimaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventGetDefaultPrimaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "GetDefaultSecondaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventGetDefaultSecondaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "GetPrimaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventGetPrimaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "GetSecondaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventGetSecondaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord Binding;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms, Binding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "SetPrimaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventSetPrimaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics
	{
		struct SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms
		{
			UObject* WorldContextObject;
			FName AxisOrActionName;
			float Scale;
			FInputChord Binding;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms, Binding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsKeyboard, nullptr, "SetSecondaryKeyboardBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsKeyboard_eventSetSecondaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsFunctionsKeyboard_NoRegister()
	{
		return USBZSettingsFunctionsKeyboard::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsFunctions,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultPrimaryKeyboardBinding, "GetDefaultPrimaryKeyboardBinding" }, // 4099480656
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetDefaultSecondaryKeyboardBinding, "GetDefaultSecondaryKeyboardBinding" }, // 3631500708
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetPrimaryKeyboardBinding, "GetPrimaryKeyboardBinding" }, // 2328713215
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_GetSecondaryKeyboardBinding, "GetSecondaryKeyboardBinding" }, // 3729508696
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetPrimaryKeyboardBinding, "SetPrimaryKeyboardBinding" }, // 84451038
		{ &Z_Construct_UFunction_USBZSettingsFunctionsKeyboard_SetSecondaryKeyboardBinding, "SetSecondaryKeyboardBinding" }, // 3795257854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsFunctionsKeyboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsKeyboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsFunctionsKeyboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::ClassParams = {
		&USBZSettingsFunctionsKeyboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsFunctionsKeyboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsFunctionsKeyboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsFunctionsKeyboard, 2124923581);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsFunctionsKeyboard>()
	{
		return USBZSettingsFunctionsKeyboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsFunctionsKeyboard(Z_Construct_UClass_USBZSettingsFunctionsKeyboard, &USBZSettingsFunctionsKeyboard::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsFunctionsKeyboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsFunctionsKeyboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
