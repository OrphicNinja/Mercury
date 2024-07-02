// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/StringTableGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTableGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UStringTableGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UStringTableGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UStringTableGenerator::StaticRegisterNativesUStringTableGenerator()
	{
	}
	UClass* Z_Construct_UClass_UStringTableGenerator_NoRegister()
	{
		return UStringTableGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UStringTableGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTableGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/StringTableGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/StringTableGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTableGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTableGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringTableGenerator_Statics::ClassParams = {
		&UStringTableGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStringTableGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTableGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringTableGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringTableGenerator, 1271281625);
	template<> ASSETGENERATOR_API UClass* StaticClass<UStringTableGenerator>()
	{
		return UStringTableGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTableGenerator(Z_Construct_UClass_UStringTableGenerator, &UStringTableGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UStringTableGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTableGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
