// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStandardImpactData();
// End Cross Module References
	void USBZImpactConfig::StaticRegisterNativesUSBZImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZImpactConfig_NoRegister()
	{
		return USBZImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTranslucentMaterial_MetaData[];
#endif
		static void NewProp_bIsTranslucentMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TranslucentSortPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactConfig, Default), Z_Construct_UScriptStruct_FSBZStandardImpactData, METADATA_PARAMS(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZImpactConfig.h" },
	};
#endif
	void Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial_SetBit(void* Obj)
	{
		((USBZImpactConfig*)Obj)->bIsTranslucentMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial = { "bIsTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZImpactConfig), &Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_TranslucentSortPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactConfig" },
		{ "ModuleRelativePath", "Public/SBZImpactConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_TranslucentSortPriority = { "TranslucentSortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactConfig, TranslucentSortPriority), METADATA_PARAMS(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_TranslucentSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_TranslucentSortPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZImpactConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_bIsTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactConfig_Statics::NewProp_TranslucentSortPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZImpactConfig_Statics::ClassParams = {
		&USBZImpactConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZImpactConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactConfig_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZImpactConfig, 3859290707);
	template<> STARBREEZE_API UClass* StaticClass<USBZImpactConfig>()
	{
		return USBZImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZImpactConfig(Z_Construct_UClass_USBZImpactConfig, &USBZImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
