// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLocalizedMediaAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLocalizedMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkLocalizedMediaAsset::StaticRegisterNativesUAkLocalizedMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkLocalizedMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLocalizedMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams = {
		&UAkLocalizedMediaAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLocalizedMediaAsset, 1462993510);
	template<> AKAUDIO_API UClass* StaticClass<UAkLocalizedMediaAsset>()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLocalizedMediaAsset(Z_Construct_UClass_UAkLocalizedMediaAsset, &UAkLocalizedMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLocalizedMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLocalizedMediaAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
