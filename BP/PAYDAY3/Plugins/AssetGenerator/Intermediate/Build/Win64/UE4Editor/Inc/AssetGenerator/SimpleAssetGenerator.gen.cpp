// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/SimpleAssetGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAssetGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void USimpleAssetGenerator::StaticRegisterNativesUSimpleAssetGenerator()
	{
	}
	UClass* Z_Construct_UClass_USimpleAssetGenerator_NoRegister()
	{
		return USimpleAssetGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USimpleAssetGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleAssetGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleAssetGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/SimpleAssetGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/SimpleAssetGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleAssetGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAssetGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleAssetGenerator_Statics::ClassParams = {
		&USimpleAssetGenerator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleAssetGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAssetGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleAssetGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleAssetGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleAssetGenerator, 145877471);
	template<> ASSETGENERATOR_API UClass* StaticClass<USimpleAssetGenerator>()
	{
		return USimpleAssetGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleAssetGenerator(Z_Construct_UClass_USimpleAssetGenerator, &USimpleAssetGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("USimpleAssetGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAssetGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
