// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetGeneration/AssetTypeGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTypeGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UObjectHierarchySerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UAssetTypeGenerator::StaticRegisterNativesUAssetTypeGenerator()
	{
	}
	UClass* Z_Construct_UClass_UAssetTypeGenerator_NoRegister()
	{
		return UAssetTypeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTypeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSerializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectSerializer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySerializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertySerializer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTypeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetGeneration/AssetTypeGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetTypeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_ObjectSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetTypeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_ObjectSerializer = { "ObjectSerializer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetTypeGenerator, ObjectSerializer), Z_Construct_UClass_UObjectHierarchySerializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_ObjectSerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_ObjectSerializer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_PropertySerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetTypeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_PropertySerializer = { "PropertySerializer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetTypeGenerator, PropertySerializer), Z_Construct_UClass_UPropertySerializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_PropertySerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_PropertySerializer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetTypeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetPackage = { "AssetPackage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetTypeGenerator, AssetPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetTypeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetTypeGenerator, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetTypeGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_ObjectSerializer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_PropertySerializer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTypeGenerator_Statics::NewProp_AssetObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTypeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTypeGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetTypeGenerator_Statics::ClassParams = {
		&UAssetTypeGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetTypeGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetTypeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTypeGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetTypeGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetTypeGenerator, 2828641700);
	template<> ASSETGENERATOR_API UClass* StaticClass<UAssetTypeGenerator>()
	{
		return UAssetTypeGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetTypeGenerator(Z_Construct_UClass_UAssetTypeGenerator, &UAssetTypeGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UAssetTypeGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTypeGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
