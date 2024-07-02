// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArrayLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArrayLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArrayLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArrayLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ArraySelectDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ArraySortDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZArrayLibrary::execFindArray)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_SelectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=USBZArrayLibrary::FindArray(Z_Param_Out_Array,FArraySelectDelegate(Z_Param_Out_SelectCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZArrayLibrary::execRandomizedSplitArray)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ObjectList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ChosenObjects);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_LeftoverObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZArrayLibrary::RandomizedSplitArray(Z_Param_Out_ObjectList,Z_Param_Min,Z_Param_Max,Z_Param_Out_RandomStream,Z_Param_Out_ChosenObjects,Z_Param_Out_LeftoverObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZArrayLibrary::execSelectArray)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutArray);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_SelectCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZArrayLibrary::SelectArray(Z_Param_Out_Array,Z_Param_Out_OutArray,FArraySelectDelegate(Z_Param_Out_SelectCallback),Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZArrayLibrary::execSortArray)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutArray);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_SortCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZArrayLibrary::SortArray(Z_Param_Out_Array,Z_Param_Out_OutArray,FArraySortDelegate(Z_Param_Out_SortCallback));
		P_NATIVE_END;
	}
	void USBZArrayLibrary::StaticRegisterNativesUSBZArrayLibrary()
	{
		UClass* Class = USBZArrayLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindArray", &USBZArrayLibrary::execFindArray },
			{ "RandomizedSplitArray", &USBZArrayLibrary::execRandomizedSplitArray },
			{ "SelectArray", &USBZArrayLibrary::execSelectArray },
			{ "SortArray", &USBZArrayLibrary::execSortArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics
	{
		struct SBZArrayLibrary_eventFindArray_Parms
		{
			TArray<UObject*> Array;
			FScriptDelegate SelectCallback;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SelectCallback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventFindArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_SelectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_SelectCallback = { "SelectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventFindArray_Parms, SelectCallback), Z_Construct_UDelegateFunction_Starbreeze_ArraySelectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_SelectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_SelectCallback_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventFindArray_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_SelectCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArrayLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZArrayLibrary, nullptr, "FindArray", nullptr, nullptr, sizeof(SBZArrayLibrary_eventFindArray_Parms), Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZArrayLibrary_FindArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZArrayLibrary_FindArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics
	{
		struct SBZArrayLibrary_eventRandomizedSplitArray_Parms
		{
			TArray<UObject*> ObjectList;
			int32 Min;
			int32 Max;
			FRandomStream RandomStream;
			TArray<UObject*> ChosenObjects;
			TArray<UObject*> LeftoverObjects;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChosenObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChosenObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftoverObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeftoverObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList_Inner = { "ObjectList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList = { "ObjectList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, ObjectList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, Max), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ChosenObjects_Inner = { "ChosenObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ChosenObjects = { "ChosenObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, ChosenObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_LeftoverObjects_Inner = { "LeftoverObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_LeftoverObjects = { "LeftoverObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventRandomizedSplitArray_Parms, LeftoverObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ObjectList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ChosenObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_ChosenObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_LeftoverObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::NewProp_LeftoverObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArrayLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZArrayLibrary, nullptr, "RandomizedSplitArray", nullptr, nullptr, sizeof(SBZArrayLibrary_eventRandomizedSplitArray_Parms), Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics
	{
		struct SBZArrayLibrary_eventSelectArray_Parms
		{
			TArray<UObject*> Array;
			TArray<UObject*> OutArray;
			FScriptDelegate SelectCallback;
			int32 Limit;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SelectCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSelectArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSelectArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_SelectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_SelectCallback = { "SelectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSelectArray_Parms, SelectCallback), Z_Construct_UDelegateFunction_Starbreeze_ArraySelectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_SelectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_SelectCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSelectArray_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSelectArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_OutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_OutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_SelectCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArrayLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZArrayLibrary, nullptr, "SelectArray", nullptr, nullptr, sizeof(SBZArrayLibrary_eventSelectArray_Parms), Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZArrayLibrary_SelectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZArrayLibrary_SelectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics
	{
		struct SBZArrayLibrary_eventSortArray_Parms
		{
			TArray<UObject*> Array;
			TArray<UObject*> OutArray;
			FScriptDelegate SortCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SortCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSortArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSortArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_SortCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_SortCallback = { "SortCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArrayLibrary_eventSortArray_Parms, SortCallback), Z_Construct_UDelegateFunction_Starbreeze_ArraySortDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_SortCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_SortCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_OutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_OutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::NewProp_SortCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArrayLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZArrayLibrary, nullptr, "SortArray", nullptr, nullptr, sizeof(SBZArrayLibrary_eventSortArray_Parms), Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZArrayLibrary_SortArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZArrayLibrary_SortArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZArrayLibrary_NoRegister()
	{
		return USBZArrayLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZArrayLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZArrayLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZArrayLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZArrayLibrary_FindArray, "FindArray" }, // 1791278972
		{ &Z_Construct_UFunction_USBZArrayLibrary_RandomizedSplitArray, "RandomizedSplitArray" }, // 2076493454
		{ &Z_Construct_UFunction_USBZArrayLibrary_SelectArray, "SelectArray" }, // 1269679136
		{ &Z_Construct_UFunction_USBZArrayLibrary_SortArray, "SortArray" }, // 297086000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArrayLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZArrayLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArrayLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZArrayLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZArrayLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZArrayLibrary_Statics::ClassParams = {
		&USBZArrayLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZArrayLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArrayLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZArrayLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZArrayLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZArrayLibrary, 936776416);
	template<> STARBREEZE_API UClass* StaticClass<USBZArrayLibrary>()
	{
		return USBZArrayLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZArrayLibrary(Z_Construct_UClass_USBZArrayLibrary, &USBZArrayLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZArrayLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZArrayLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
