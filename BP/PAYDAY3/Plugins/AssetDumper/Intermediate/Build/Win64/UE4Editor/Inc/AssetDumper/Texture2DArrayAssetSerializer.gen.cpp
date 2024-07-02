// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/Texture2DArrayAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArrayAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UTexture2DArrayAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UTexture2DArrayAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UTexture2DArrayAssetSerializer::StaticRegisterNativesUTexture2DArrayAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UTexture2DArrayAssetSerializer_NoRegister()
	{
		return UTexture2DArrayAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/Texture2DArrayAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/Texture2DArrayAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArrayAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::ClassParams = {
		&UTexture2DArrayAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArrayAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2DArrayAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2DArrayAssetSerializer, 3077232527);
	template<> ASSETDUMPER_API UClass* StaticClass<UTexture2DArrayAssetSerializer>()
	{
		return UTexture2DArrayAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2DArrayAssetSerializer(Z_Construct_UClass_UTexture2DArrayAssetSerializer, &UTexture2DArrayAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UTexture2DArrayAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArrayAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
