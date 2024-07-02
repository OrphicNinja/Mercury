// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/AssetGeneration/AssetGeneratorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGeneratorSettings() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorSettings_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UAssetGeneratorSettings::StaticRegisterNativesUAssetGeneratorSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetGeneratorSettings_NoRegister()
	{
		return UAssetGeneratorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGeneratorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagesToForceNoMipMaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToForceNoMipMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToForceNoMipMaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGeneratorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Generator Settings" },
		{ "IncludePath", "AssetGeneration/AssetGeneratorSettings.h" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps_Inner = { "PackagesToForceNoMipMaps", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps_MetaData[] = {
		{ "Category", "Texture Generator" },
		{ "Comment", "/** List of full package names to force no mip maps generation policy for */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorSettings.h" },
		{ "ToolTip", "List of full package names to force no mip maps generation policy for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps = { "PackagesToForceNoMipMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetGeneratorSettings, PackagesToForceNoMipMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetGeneratorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorSettings_Statics::NewProp_PackagesToForceNoMipMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGeneratorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGeneratorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetGeneratorSettings_Statics::ClassParams = {
		&UAssetGeneratorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetGeneratorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGeneratorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetGeneratorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetGeneratorSettings, 2481950916);
	template<> ASSETGENERATOR_API UClass* StaticClass<UAssetGeneratorSettings>()
	{
		return UAssetGeneratorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetGeneratorSettings(Z_Construct_UClass_UAssetGeneratorSettings, &UAssetGeneratorSettings::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UAssetGeneratorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGeneratorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
