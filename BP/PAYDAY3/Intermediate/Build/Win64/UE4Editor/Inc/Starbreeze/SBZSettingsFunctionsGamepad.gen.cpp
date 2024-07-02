// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsFunctionsGamepad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsFunctionsGamepad() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsGamepad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctionsGamepad();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execGetDefaultGamepadBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsGamepad::GetDefaultGamepadBinding(Z_Param_WorldContextObject,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execGetDefaultGamepadBindingsPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZSettingsFunctionsGamepad::GetDefaultGamepadBindingsPreset(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execGetGamepadBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputChord*)Z_Param__Result=USBZSettingsFunctionsGamepad::GetGamepadBinding(Z_Param_WorldContextObject,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execGetGamepadBindingsPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZSettingsFunctionsGamepad::GetGamepadBindingsPreset(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execSetGamepadBinding)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FInputChord,Z_Param_Binding);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsGamepad::SetGamepadBinding(Z_Param_WorldContextObject,Z_Param_Binding,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsFunctionsGamepad::execSetGamepadBindingsPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Preset);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSettingsFunctionsGamepad::SetGamepadBindingsPreset(Z_Param_WorldContextObject,Z_Param_Preset);
		P_NATIVE_END;
	}
	void USBZSettingsFunctionsGamepad::StaticRegisterNativesUSBZSettingsFunctionsGamepad()
	{
		UClass* Class = USBZSettingsFunctionsGamepad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultGamepadBinding", &USBZSettingsFunctionsGamepad::execGetDefaultGamepadBinding },
			{ "GetDefaultGamepadBindingsPreset", &USBZSettingsFunctionsGamepad::execGetDefaultGamepadBindingsPreset },
			{ "GetGamepadBinding", &USBZSettingsFunctionsGamepad::execGetGamepadBinding },
			{ "GetGamepadBindingsPreset", &USBZSettingsFunctionsGamepad::execGetGamepadBindingsPreset },
			{ "SetGamepadBinding", &USBZSettingsFunctionsGamepad::execSetGamepadBinding },
			{ "SetGamepadBindingsPreset", &USBZSettingsFunctionsGamepad::execSetGamepadBindingsPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBinding_Parms
		{
			UObject* WorldContextObject;
			FName ActionName;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBinding_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "GetDefaultGamepadBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBindingsPreset_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBindingsPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBindingsPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "GetDefaultGamepadBindingsPreset", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventGetDefaultGamepadBindingsPreset_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventGetGamepadBinding_Parms
		{
			UObject* WorldContextObject;
			FName ActionName;
			FInputChord ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetGamepadBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetGamepadBinding_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetGamepadBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "GetGamepadBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventGetGamepadBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventGetGamepadBindingsPreset_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetGamepadBindingsPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventGetGamepadBindingsPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "GetGamepadBindingsPreset", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventGetGamepadBindingsPreset_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventSetGamepadBinding_Parms
		{
			UObject* WorldContextObject;
			FInputChord Binding;
			FName ActionName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventSetGamepadBinding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventSetGamepadBinding_Parms, Binding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventSetGamepadBinding_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "SetGamepadBinding", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventSetGamepadBinding_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics
	{
		struct SBZSettingsFunctionsGamepad_eventSetGamepadBindingsPreset_Parms
		{
			UObject* WorldContextObject;
			int32 Preset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventSetGamepadBindingsPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctionsGamepad_eventSetGamepadBindingsPreset_Parms, Preset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctionsGamepad, nullptr, "SetGamepadBindingsPreset", nullptr, nullptr, sizeof(SBZSettingsFunctionsGamepad_eventSetGamepadBindingsPreset_Parms), Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsFunctionsGamepad_NoRegister()
	{
		return USBZSettingsFunctionsGamepad::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsFunctions,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBinding, "GetDefaultGamepadBinding" }, // 2004538794
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetDefaultGamepadBindingsPreset, "GetDefaultGamepadBindingsPreset" }, // 1230032436
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBinding, "GetGamepadBinding" }, // 1832838290
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_GetGamepadBindingsPreset, "GetGamepadBindingsPreset" }, // 2920379145
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBinding, "SetGamepadBinding" }, // 2313939853
		{ &Z_Construct_UFunction_USBZSettingsFunctionsGamepad_SetGamepadBindingsPreset, "SetGamepadBindingsPreset" }, // 1902018946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsFunctionsGamepad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsFunctionsGamepad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsFunctionsGamepad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::ClassParams = {
		&USBZSettingsFunctionsGamepad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsFunctionsGamepad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsFunctionsGamepad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsFunctionsGamepad, 2959507681);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsFunctionsGamepad>()
	{
		return USBZSettingsFunctionsGamepad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsFunctionsGamepad(Z_Construct_UClass_USBZSettingsFunctionsGamepad, &USBZSettingsFunctionsGamepad::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsFunctionsGamepad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsFunctionsGamepad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
