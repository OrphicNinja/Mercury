// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZWindConfig::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWindConfig**)Z_Param__Result=USBZWindConfig::Get();
		P_NATIVE_END;
	}
	void USBZWindConfig::StaticRegisterNativesUSBZWindConfig()
	{
		UClass* Class = USBZWindConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZWindConfig::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWindConfig_Get_Statics
	{
		struct SBZWindConfig_eventGet_Parms
		{
			USBZWindConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWindConfig_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWindConfig_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZWindConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWindConfig_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWindConfig_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindConfig_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWindConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWindConfig_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWindConfig, nullptr, "Get", nullptr, nullptr, sizeof(SBZWindConfig_eventGet_Parms), Z_Construct_UFunction_USBZWindConfig_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindConfig_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWindConfig_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindConfig_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWindConfig_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWindConfig_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWindConfig_NoRegister()
	{
		return USBZWindConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZWindConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWindSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWindSpeed;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FoliageMaterialFunctionNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageMaterialFunctionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageMaterialFunctionNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWindConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWindConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWindConfig_Get, "Get" }, // 1213370439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWindConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindConfig_Statics::NewProp_MaxWindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindConfig" },
		{ "ModuleRelativePath", "Public/SBZWindConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindConfig_Statics::NewProp_MaxWindSpeed = { "MaxWindSpeed", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindConfig, MaxWindSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZWindConfig_Statics::NewProp_MaxWindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindConfig_Statics::NewProp_MaxWindSpeed_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames_Inner = { "FoliageMaterialFunctionNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindConfig" },
		{ "ModuleRelativePath", "Public/SBZWindConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames = { "FoliageMaterialFunctionNames", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindConfig, FoliageMaterialFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWindConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindConfig_Statics::NewProp_MaxWindSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindConfig_Statics::NewProp_FoliageMaterialFunctionNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWindConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWindConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWindConfig_Statics::ClassParams = {
		&USBZWindConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWindConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWindConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWindConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWindConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWindConfig, 3035458277);
	template<> STARBREEZE_API UClass* StaticClass<USBZWindConfig>()
	{
		return USBZWindConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWindConfig(Z_Construct_UClass_USBZWindConfig, &USBZWindConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWindConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWindConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
