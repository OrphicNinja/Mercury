// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUtilities() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUtilities_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonArrayValue)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UABUtilities::AddOrReplaceJsonArrayValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonBoolValue)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UABUtilities::AddOrReplaceJsonBoolValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonNumberValue)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UABUtilities::AddOrReplaceJsonNumberValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execAddOrReplaceJsonStringValue)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UABUtilities::AddOrReplaceJsonStringValue(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execDateTimeToString)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UABUtilities::DateTimeToString(Z_Param_Out_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execGetJsonObjectAsJsonString)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UABUtilities::GetJsonObjectAsJsonString(Z_Param_Out_ObjectWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsArray)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsArray(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsBool)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_OutBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsBool(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsNumber)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsNumber(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABUtilities::execGetJsonValueAsString)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_ObjectWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UABUtilities::GetJsonValueAsString(Z_Param_Out_ObjectWrapper,Z_Param_Key,Z_Param_Out_OutString);
		P_NATIVE_END;
	}
	void UABUtilities::StaticRegisterNativesUABUtilities()
	{
		UClass* Class = UABUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrReplaceJsonArrayValue", &UABUtilities::execAddOrReplaceJsonArrayValue },
			{ "AddOrReplaceJsonBoolValue", &UABUtilities::execAddOrReplaceJsonBoolValue },
			{ "AddOrReplaceJsonNumberValue", &UABUtilities::execAddOrReplaceJsonNumberValue },
			{ "AddOrReplaceJsonStringValue", &UABUtilities::execAddOrReplaceJsonStringValue },
			{ "DateTimeToString", &UABUtilities::execDateTimeToString },
			{ "GetJsonObjectAsJsonString", &UABUtilities::execGetJsonObjectAsJsonString },
			{ "GetJsonValueAsArray", &UABUtilities::execGetJsonValueAsArray },
			{ "GetJsonValueAsBool", &UABUtilities::execGetJsonValueAsBool },
			{ "GetJsonValueAsNumber", &UABUtilities::execGetJsonValueAsNumber },
			{ "GetJsonValueAsString", &UABUtilities::execGetJsonValueAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics
	{
		struct ABUtilities_eventAddOrReplaceJsonArrayValue_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			TArray<FString> Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonArrayValue", nullptr, nullptr, sizeof(ABUtilities_eventAddOrReplaceJsonArrayValue_Parms), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics
	{
		struct ABUtilities_eventAddOrReplaceJsonBoolValue_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			bool Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ABUtilities_eventAddOrReplaceJsonBoolValue_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms), &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonBoolValue", nullptr, nullptr, sizeof(ABUtilities_eventAddOrReplaceJsonBoolValue_Parms), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics
	{
		struct ABUtilities_eventAddOrReplaceJsonNumberValue_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			float Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonNumberValue", nullptr, nullptr, sizeof(ABUtilities_eventAddOrReplaceJsonNumberValue_Parms), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics
	{
		struct ABUtilities_eventAddOrReplaceJsonStringValue_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			FString Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventAddOrReplaceJsonStringValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "AddOrReplaceJsonStringValue", nullptr, nullptr, sizeof(ABUtilities_eventAddOrReplaceJsonStringValue_Parms), Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics
	{
		struct ABUtilities_eventDateTimeToString_Parms
		{
			FDateTime DateTime;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventDateTimeToString_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventDateTimeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "DateTimeToString", nullptr, nullptr, sizeof(ABUtilities_eventDateTimeToString_Parms), Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_DateTimeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_DateTimeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics
	{
		struct ABUtilities_eventGetJsonObjectAsJsonString_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonObjectAsJsonString_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonObjectAsJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonObjectAsJsonString", nullptr, nullptr, sizeof(ABUtilities_eventGetJsonObjectAsJsonString_Parms), Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics
	{
		struct ABUtilities_eventGetJsonValueAsArray_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			TArray<FString> OutArray;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABUtilities_eventGetJsonValueAsArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsArray_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_OutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsArray", nullptr, nullptr, sizeof(ABUtilities_eventGetJsonValueAsArray_Parms), Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics
	{
		struct ABUtilities_eventGetJsonValueAsBool_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			bool OutBool;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_OutBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutBool;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsBool_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool_SetBit(void* Obj)
	{
		((ABUtilities_eventGetJsonValueAsBool_Parms*)Obj)->OutBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool = { "OutBool", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsBool_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABUtilities_eventGetJsonValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsBool_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_OutBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsBool", nullptr, nullptr, sizeof(ABUtilities_eventGetJsonValueAsBool_Parms), Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics
	{
		struct ABUtilities_eventGetJsonValueAsNumber_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			float OutNumber;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_OutNumber = { "OutNumber", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsNumber_Parms, OutNumber), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABUtilities_eventGetJsonValueAsNumber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsNumber_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_OutNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsNumber", nullptr, nullptr, sizeof(ABUtilities_eventGetJsonValueAsNumber_Parms), Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics
	{
		struct ABUtilities_eventGetJsonValueAsString_Parms
		{
			FJsonObjectWrapper ObjectWrapper;
			FString Key;
			FString OutString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper = { "ObjectWrapper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, ObjectWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABUtilities_eventGetJsonValueAsString_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABUtilities_eventGetJsonValueAsString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABUtilities_eventGetJsonValueAsString_Parms), &Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ObjectWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_OutString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUtilities, nullptr, "GetJsonValueAsString", nullptr, nullptr, sizeof(ABUtilities_eventGetJsonValueAsString_Parms), Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABUtilities_GetJsonValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABUtilities_GetJsonValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABUtilities_NoRegister()
	{
		return UABUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UABUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonArrayValue, "AddOrReplaceJsonArrayValue" }, // 854873068
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonBoolValue, "AddOrReplaceJsonBoolValue" }, // 3688160555
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonNumberValue, "AddOrReplaceJsonNumberValue" }, // 2173257427
		{ &Z_Construct_UFunction_UABUtilities_AddOrReplaceJsonStringValue, "AddOrReplaceJsonStringValue" }, // 3640866371
		{ &Z_Construct_UFunction_UABUtilities_DateTimeToString, "DateTimeToString" }, // 825971211
		{ &Z_Construct_UFunction_UABUtilities_GetJsonObjectAsJsonString, "GetJsonObjectAsJsonString" }, // 2106079050
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsArray, "GetJsonValueAsArray" }, // 579233010
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsBool, "GetJsonValueAsBool" }, // 4147593461
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsNumber, "GetJsonValueAsNumber" }, // 4231830578
		{ &Z_Construct_UFunction_UABUtilities_GetJsonValueAsString, "GetJsonValueAsString" }, // 2977735614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABUtilities_Statics::ClassParams = {
		&UABUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABUtilities, 832421434);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABUtilities>()
	{
		return UABUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABUtilities(Z_Construct_UClass_UABUtilities, &UABUtilities::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
