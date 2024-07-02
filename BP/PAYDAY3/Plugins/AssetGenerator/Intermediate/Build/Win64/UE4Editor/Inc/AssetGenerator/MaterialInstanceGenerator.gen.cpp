// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/MaterialInstanceGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMaterialInstanceGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMaterialInstanceGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UMaterialInstanceGenerator::StaticRegisterNativesUMaterialInstanceGenerator()
	{
	}
	UClass* Z_Construct_UClass_UMaterialInstanceGenerator_NoRegister()
	{
		return UMaterialInstanceGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/MaterialInstanceGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MaterialInstanceGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceGenerator_Statics::ClassParams = {
		&UMaterialInstanceGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstanceGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceGenerator, 1963512654);
	template<> ASSETGENERATOR_API UClass* StaticClass<UMaterialInstanceGenerator>()
	{
		return UMaterialInstanceGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceGenerator(Z_Construct_UClass_UMaterialInstanceGenerator, &UMaterialInstanceGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UMaterialInstanceGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
