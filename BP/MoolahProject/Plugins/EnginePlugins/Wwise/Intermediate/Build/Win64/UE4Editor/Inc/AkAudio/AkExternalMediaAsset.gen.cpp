// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkExternalMediaAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkExternalMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkExternalMediaAsset::StaticRegisterNativesUAkExternalMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkExternalMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkExternalMediaAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkExternalMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkExternalMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams = {
		&UAkExternalMediaAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkExternalMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkExternalMediaAsset, 4262397526);
	template<> AKAUDIO_API UClass* StaticClass<UAkExternalMediaAsset>()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkExternalMediaAsset(Z_Construct_UClass_UAkExternalMediaAsset, &UAkExternalMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkExternalMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalMediaAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
