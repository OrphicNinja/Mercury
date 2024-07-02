// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/Texture2DGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTexture2DGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UTexture2DGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UTexture2DGenerator::StaticRegisterNativesUTexture2DGenerator()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DGenerator_NoRegister()
	{
		return UTexture2DGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/Texture2DGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/Texture2DGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DGenerator_Statics::ClassParams = {
		&UTexture2DGenerator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DGenerator, 1367392828);
	template<> ASSETGENERATOR_API UClass* StaticClass<UTexture2DGenerator>()
	{
		return UTexture2DGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DGenerator(Z_Construct_UClass_UTexture2DGenerator, &UTexture2DGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UTexture2DGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
