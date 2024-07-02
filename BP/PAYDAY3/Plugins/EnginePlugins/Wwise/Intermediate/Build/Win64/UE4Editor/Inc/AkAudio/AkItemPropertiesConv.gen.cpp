// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkItemPropertiesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
// End Cross Module References
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
	{
		UClass* Class = UAkItemPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkPropertyToControlToString", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
			{ "Conv_FAkPropertyToControlToText", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToString", nullptr, nullptr, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToText", nullptr, nullptr, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString, "Conv_FAkPropertyToControlToString" }, // 2643038351
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText, "Conv_FAkPropertyToControlToText" }, // 1393266764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkItemPropertiesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemPropertiesConv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams = {
		&UAkItemPropertiesConv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemPropertiesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkItemPropertiesConv, 1159756212);
	template<> AKAUDIO_API UClass* StaticClass<UAkItemPropertiesConv>()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemPropertiesConv(Z_Construct_UClass_UAkItemPropertiesConv, &UAkItemPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
