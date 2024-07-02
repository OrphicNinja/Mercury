// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaAssetsGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMediaPlayerGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMediaPlayerGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMediaTextureGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMediaTextureGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UFileMediaSourceGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UFileMediaSourceGenerator();
// End Cross Module References
	void UMediaPlayerGenerator::StaticRegisterNativesUMediaPlayerGenerator()
	{
	}
	UClass* Z_Construct_UClass_UMediaPlayerGenerator_NoRegister()
	{
		return UMediaPlayerGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerGenerator_Statics::ClassParams = {
		&UMediaPlayerGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPlayerGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPlayerGenerator, 3838022437);
	template<> ASSETGENERATOR_API UClass* StaticClass<UMediaPlayerGenerator>()
	{
		return UMediaPlayerGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPlayerGenerator(Z_Construct_UClass_UMediaPlayerGenerator, &UMediaPlayerGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UMediaPlayerGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerGenerator);
	void UMediaTextureGenerator::StaticRegisterNativesUMediaTextureGenerator()
	{
	}
	UClass* Z_Construct_UClass_UMediaTextureGenerator_NoRegister()
	{
		return UMediaTextureGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTextureGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTextureGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTextureGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTextureGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTextureGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaTextureGenerator_Statics::ClassParams = {
		&UMediaTextureGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaTextureGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTextureGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTextureGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaTextureGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaTextureGenerator, 2620017752);
	template<> ASSETGENERATOR_API UClass* StaticClass<UMediaTextureGenerator>()
	{
		return UMediaTextureGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaTextureGenerator(Z_Construct_UClass_UMediaTextureGenerator, &UMediaTextureGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UMediaTextureGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTextureGenerator);
	void UFileMediaSourceGenerator::StaticRegisterNativesUFileMediaSourceGenerator()
	{
	}
	UClass* Z_Construct_UClass_UFileMediaSourceGenerator_NoRegister()
	{
		return UFileMediaSourceGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaSourceGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaSourceGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaSourceGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MediaAssetsGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaSourceGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaSourceGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaSourceGenerator_Statics::ClassParams = {
		&UFileMediaSourceGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaSourceGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSourceGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaSourceGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileMediaSourceGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileMediaSourceGenerator, 3558299380);
	template<> ASSETGENERATOR_API UClass* StaticClass<UFileMediaSourceGenerator>()
	{
		return UFileMediaSourceGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileMediaSourceGenerator(Z_Construct_UClass_UFileMediaSourceGenerator, &UFileMediaSourceGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UFileMediaSourceGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaSourceGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
