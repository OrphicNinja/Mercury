// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/CameraAnimGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UCameraAnimGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UCameraAnimGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UCameraAnimGenerator::StaticRegisterNativesUCameraAnimGenerator()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnimGenerator_NoRegister()
	{
		return UCameraAnimGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/CameraAnimGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/CameraAnimGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimGenerator_Statics::ClassParams = {
		&UCameraAnimGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnimGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnimGenerator, 466873515);
	template<> ASSETGENERATOR_API UClass* StaticClass<UCameraAnimGenerator>()
	{
		return UCameraAnimGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimGenerator(Z_Construct_UClass_UCameraAnimGenerator, &UCameraAnimGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UCameraAnimGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
