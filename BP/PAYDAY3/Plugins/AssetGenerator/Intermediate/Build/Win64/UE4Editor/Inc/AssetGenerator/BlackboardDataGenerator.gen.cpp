// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/BlackboardDataGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardDataGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UBlackboardDataGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UBlackboardDataGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_USimpleAssetGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UBlackboardDataGenerator::StaticRegisterNativesUBlackboardDataGenerator()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardDataGenerator_NoRegister()
	{
		return UBlackboardDataGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardDataGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardDataGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAssetGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardDataGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/BlackboardDataGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/BlackboardDataGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardDataGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardDataGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardDataGenerator_Statics::ClassParams = {
		&UBlackboardDataGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardDataGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardDataGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardDataGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardDataGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardDataGenerator, 4141474169);
	template<> ASSETGENERATOR_API UClass* StaticClass<UBlackboardDataGenerator>()
	{
		return UBlackboardDataGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardDataGenerator(Z_Construct_UClass_UBlackboardDataGenerator, &UBlackboardDataGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UBlackboardDataGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardDataGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
