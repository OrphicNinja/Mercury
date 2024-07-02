// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkItemBoolPropertiesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
// End Cross Module References
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemBoolPropertiesConv::StaticRegisterNativesUAkItemBoolPropertiesConv()
	{
		UClass* Class = UAkItemBoolPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkBoolPropertyToControlToString", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString },
			{ "Conv_FAkBoolPropertyToControlToText", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToString", nullptr, nullptr, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToText", nullptr, nullptr, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString, "Conv_FAkBoolPropertyToControlToString" }, // 3747164738
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText, "Conv_FAkBoolPropertyToControlToText" }, // 2219206858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkItemBoolPropertiesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemBoolPropertiesConv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams = {
		&UAkItemBoolPropertiesConv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemBoolPropertiesConv, 1455173332);
	template<> AKAUDIO_API UClass* StaticClass<UAkItemBoolPropertiesConv>()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemBoolPropertiesConv(Z_Construct_UClass_UAkItemBoolPropertiesConv, &UAkItemBoolPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemBoolPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolPropertiesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
