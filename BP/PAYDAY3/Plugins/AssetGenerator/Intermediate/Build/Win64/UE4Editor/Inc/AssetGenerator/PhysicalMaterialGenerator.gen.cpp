// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/PhysicalMaterialGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UPhysicalMaterialGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UPhysicalMaterialGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UPhysicalMaterialGenerator::StaticRegisterNativesUPhysicalMaterialGenerator()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterialGenerator_NoRegister()
	{
		return UPhysicalMaterialGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/PhysicalMaterialGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/PhysicalMaterialGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::ClassParams = {
		&UPhysicalMaterialGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterialGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterialGenerator, 634202641);
	template<> ASSETGENERATOR_API UClass* StaticClass<UPhysicalMaterialGenerator>()
	{
		return UPhysicalMaterialGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterialGenerator(Z_Construct_UClass_UPhysicalMaterialGenerator, &UPhysicalMaterialGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UPhysicalMaterialGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
