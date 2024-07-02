// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/SAkWaapiFieldNamesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAkWaapiFieldNamesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
// End Cross Module References
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	void USAkWaapiFieldNamesConv::StaticRegisterNativesUSAkWaapiFieldNamesConv()
	{
		UClass* Class = USAkWaapiFieldNamesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiFieldNamesToString", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString },
			{ "Conv_FAkWaapiFieldNamesToText", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToString", nullptr, nullptr, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToText", nullptr, nullptr, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	struct Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString, "Conv_FAkWaapiFieldNamesToString" }, // 4160972320
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText, "Conv_FAkWaapiFieldNamesToText" }, // 703515438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAkWaapiFieldNamesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAkWaapiFieldNamesConv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams = {
		&USAkWaapiFieldNamesConv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAkWaapiFieldNamesConv, 321201201);
	template<> AKAUDIO_API UClass* StaticClass<USAkWaapiFieldNamesConv>()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAkWaapiFieldNamesConv(Z_Construct_UClass_USAkWaapiFieldNamesConv, &USAkWaapiFieldNamesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("USAkWaapiFieldNamesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAkWaapiFieldNamesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
