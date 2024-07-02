// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetGeneration/AssetGeneratorCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGeneratorCommandlet() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorCommandlet_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UAssetGeneratorCommandlet::StaticRegisterNativesUAssetGeneratorCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UAssetGeneratorCommandlet_NoRegister()
	{
		return UAssetGeneratorCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGeneratorCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetGeneration/AssetGeneratorCommandlet.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetGeneration/AssetGeneratorCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGeneratorCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::ClassParams = {
		&UAssetGeneratorCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGeneratorCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetGeneratorCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetGeneratorCommandlet, 1696292342);
	template<> ASSETGENERATOR_API UClass* StaticClass<UAssetGeneratorCommandlet>()
	{
		return UAssetGeneratorCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetGeneratorCommandlet(Z_Construct_UClass_UAssetGeneratorCommandlet, &UAssetGeneratorCommandlet::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UAssetGeneratorCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGeneratorCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
