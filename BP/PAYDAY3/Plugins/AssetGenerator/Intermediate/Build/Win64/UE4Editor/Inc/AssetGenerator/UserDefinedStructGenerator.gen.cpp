// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/UserDefinedStructGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStructGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UUserDefinedStructGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UUserDefinedStructGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UUserDefinedStructGenerator::StaticRegisterNativesUUserDefinedStructGenerator()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedStructGenerator_NoRegister()
	{
		return UUserDefinedStructGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedStructGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedStructGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/UserDefinedStructGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/UserDefinedStructGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedStructGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStructGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStructGenerator_Statics::ClassParams = {
		&UUserDefinedStructGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedStructGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedStructGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedStructGenerator, 1141471521);
	template<> ASSETGENERATOR_API UClass* StaticClass<UUserDefinedStructGenerator>()
	{
		return UUserDefinedStructGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedStructGenerator(Z_Construct_UClass_UUserDefinedStructGenerator, &UUserDefinedStructGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UUserDefinedStructGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStructGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
