// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/UserDefinedEnumGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedEnumGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UUserDefinedEnumGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UUserDefinedEnumGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UUserDefinedEnumGenerator::StaticRegisterNativesUUserDefinedEnumGenerator()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedEnumGenerator_NoRegister()
	{
		return UUserDefinedEnumGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedEnumGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/UserDefinedEnumGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/UserDefinedEnumGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedEnumGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::ClassParams = {
		&UUserDefinedEnumGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedEnumGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedEnumGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedEnumGenerator, 1044931091);
	template<> ASSETGENERATOR_API UClass* StaticClass<UUserDefinedEnumGenerator>()
	{
		return UUserDefinedEnumGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedEnumGenerator(Z_Construct_UClass_UUserDefinedEnumGenerator, &UUserDefinedEnumGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UUserDefinedEnumGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedEnumGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
