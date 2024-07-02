// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/StaticMeshGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UStaticMeshGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UStaticMeshGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UStaticMeshGenerator::StaticRegisterNativesUStaticMeshGenerator()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshGenerator_NoRegister()
	{
		return UStaticMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/StaticMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/StaticMeshGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshGenerator_Statics::ClassParams = {
		&UStaticMeshGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshGenerator, 610304388);
	template<> ASSETGENERATOR_API UClass* StaticClass<UStaticMeshGenerator>()
	{
		return UStaticMeshGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshGenerator(Z_Construct_UClass_UStaticMeshGenerator, &UStaticMeshGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UStaticMeshGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
