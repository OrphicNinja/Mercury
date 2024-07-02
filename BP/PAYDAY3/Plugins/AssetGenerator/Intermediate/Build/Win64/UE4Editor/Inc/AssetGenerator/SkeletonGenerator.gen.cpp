// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/SkeletonGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USkeletonGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USkeletonGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void USkeletonGenerator::StaticRegisterNativesUSkeletonGenerator()
	{
	}
	UClass* Z_Construct_UClass_USkeletonGenerator_NoRegister()
	{
		return USkeletonGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/SkeletonGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/SkeletonGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletonGenerator_Statics::ClassParams = {
		&USkeletonGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletonGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletonGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletonGenerator, 562791361);
	template<> ASSETGENERATOR_API UClass* StaticClass<USkeletonGenerator>()
	{
		return USkeletonGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletonGenerator(Z_Construct_UClass_USkeletonGenerator, &USkeletonGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("USkeletonGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
