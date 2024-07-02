// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/Texture2DArrayGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArrayGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTexture2DArrayGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTexture2DArrayGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTextureGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UTexture2DArrayGenerator::StaticRegisterNativesUTexture2DArrayGenerator()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DArrayGenerator_NoRegister()
	{
		return UTexture2DArrayGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArrayGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DArrayGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArrayGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/Texture2DArrayGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/Texture2DArrayGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArrayGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArrayGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArrayGenerator_Statics::ClassParams = {
		&UTexture2DArrayGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArrayGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArrayGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DArrayGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DArrayGenerator, 2001214586);
	template<> ASSETGENERATOR_API UClass* StaticClass<UTexture2DArrayGenerator>()
	{
		return UTexture2DArrayGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DArrayGenerator(Z_Construct_UClass_UTexture2DArrayGenerator, &UTexture2DArrayGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UTexture2DArrayGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArrayGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
