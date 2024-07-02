// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/AnimBlueprintGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAnimBlueprintGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAnimBlueprintGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UBlueprintGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UAnimBlueprintGenerator::StaticRegisterNativesUAnimBlueprintGenerator()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprintGenerator_NoRegister()
	{
		return UAnimBlueprintGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/AnimBlueprintGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/AnimBlueprintGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintGenerator_Statics::ClassParams = {
		&UAnimBlueprintGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBlueprintGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBlueprintGenerator, 1343725216);
	template<> ASSETGENERATOR_API UClass* StaticClass<UAnimBlueprintGenerator>()
	{
		return UAnimBlueprintGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprintGenerator(Z_Construct_UClass_UAnimBlueprintGenerator, &UAnimBlueprintGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UAnimBlueprintGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
