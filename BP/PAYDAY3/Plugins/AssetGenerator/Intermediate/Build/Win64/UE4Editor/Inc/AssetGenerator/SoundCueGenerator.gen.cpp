// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/SoundCueGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USoundCueGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USoundCueGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void USoundCueGenerator::StaticRegisterNativesUSoundCueGenerator()
	{
	}
	UClass* Z_Construct_UClass_USoundCueGenerator_NoRegister()
	{
		return USoundCueGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/SoundCueGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/SoundCueGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGenerator_Statics::ClassParams = {
		&USoundCueGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCueGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCueGenerator, 920706129);
	template<> ASSETGENERATOR_API UClass* StaticClass<USoundCueGenerator>()
	{
		return USoundCueGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCueGenerator(Z_Construct_UClass_USoundCueGenerator, &USoundCueGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("USoundCueGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
