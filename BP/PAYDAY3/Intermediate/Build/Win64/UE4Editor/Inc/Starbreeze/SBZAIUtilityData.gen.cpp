// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_NoRegister();
// End Cross Module References
	void USBZAIUtilityData::StaticRegisterNativesUSBZAIUtilityData()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityData_NoRegister()
	{
		return USBZAIUtilityData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deciders_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Deciders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deciders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Deciders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_RootTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityData" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_RootTree = { "RootTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityData, RootTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_RootTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_RootTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_InjectionTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityData" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_InjectionTag = { "InjectionTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityData, InjectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_InjectionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_InjectionTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityData, Default), Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_Inner = { "Deciders", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIUtilityDecider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders = { "Deciders", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityData, Deciders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_RootTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_InjectionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityData_Statics::NewProp_Deciders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityData_Statics::ClassParams = {
		&USBZAIUtilityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityData, 811488139);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityData>()
	{
		return USBZAIUtilityData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityData(Z_Construct_UClass_USBZAIUtilityData, &USBZAIUtilityData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
