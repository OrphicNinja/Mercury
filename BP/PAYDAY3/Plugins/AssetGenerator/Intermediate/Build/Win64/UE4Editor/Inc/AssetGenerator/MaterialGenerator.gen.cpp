// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/Toolkit/AssetTypeGenerator/MaterialGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGenerator() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMaterialGenerator_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UMaterialGenerator();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetTypeGenerator();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry();
// End Cross Module References
	void UMaterialGenerator::StaticRegisterNativesUMaterialGenerator()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGenerator_NoRegister()
	{
		return UMaterialGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypeGenerator/MaterialGenerator.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MaterialGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGenerator_Statics::NewProp_RuntimeEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypeGenerator/MaterialGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialGenerator_Statics::NewProp_RuntimeEntries = { "RuntimeEntries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RuntimeEntries, UMaterialGenerator), STRUCT_OFFSET(UMaterialGenerator, RuntimeEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(Z_Construct_UClass_UMaterialGenerator_Statics::NewProp_RuntimeEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGenerator_Statics::NewProp_RuntimeEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGenerator_Statics::NewProp_RuntimeEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGenerator_Statics::ClassParams = {
		&UMaterialGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGenerator_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGenerator, 1913617576);
	template<> ASSETGENERATOR_API UClass* StaticClass<UMaterialGenerator>()
	{
		return UMaterialGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGenerator(Z_Construct_UClass_UMaterialGenerator, &UMaterialGenerator::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UMaterialGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
