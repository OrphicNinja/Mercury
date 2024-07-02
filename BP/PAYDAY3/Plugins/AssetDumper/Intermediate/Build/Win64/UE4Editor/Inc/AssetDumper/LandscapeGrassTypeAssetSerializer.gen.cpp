// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/LandscapeGrassTypeAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassTypeAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void ULandscapeGrassTypeAssetSerializer::StaticRegisterNativesULandscapeGrassTypeAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_NoRegister()
	{
		return ULandscapeGrassTypeAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/LandscapeGrassTypeAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/LandscapeGrassTypeAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassTypeAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::ClassParams = {
		&ULandscapeGrassTypeAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeGrassTypeAssetSerializer, 909828099);
	template<> ASSETDUMPER_API UClass* StaticClass<ULandscapeGrassTypeAssetSerializer>()
	{
		return ULandscapeGrassTypeAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeGrassTypeAssetSerializer(Z_Construct_UClass_ULandscapeGrassTypeAssetSerializer, &ULandscapeGrassTypeAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("ULandscapeGrassTypeAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassTypeAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
