// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/TextureCubeGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTextureCubeGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTextureCubeGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTextureGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UTextureCubeGenerator::StaticRegisterNativesUTextureCubeGenerator()
	{
	}
	UClass* Z_Construct_UClass_UTextureCubeGenerator_NoRegister()
	{
		return UTextureCubeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCubeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCubeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/TextureCubeGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/TextureCubeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCubeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeGenerator_Statics::ClassParams = {
		&UTextureCubeGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureCubeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCubeGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureCubeGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureCubeGenerator, 288197015);
	template<> ASSETGENERATOR_API UClass* StaticClass<UTextureCubeGenerator>()
	{
		return UTextureCubeGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureCubeGenerator(Z_Construct_UClass_UTextureCubeGenerator, &UTextureCubeGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UTextureCubeGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
