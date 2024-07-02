// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/MaterialParameterCollectionAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UMaterialParameterCollectionAssetSerializer::StaticRegisterNativesUMaterialParameterCollectionAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_NoRegister()
	{
		return UMaterialParameterCollectionAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/MaterialParameterCollectionAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/MaterialParameterCollectionAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollectionAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::ClassParams = {
		&UMaterialParameterCollectionAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialParameterCollectionAssetSerializer, 3447173898);
	template<> ASSETDUMPER_API UClass* StaticClass<UMaterialParameterCollectionAssetSerializer>()
	{
		return UMaterialParameterCollectionAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollectionAssetSerializer(Z_Construct_UClass_UMaterialParameterCollectionAssetSerializer, &UMaterialParameterCollectionAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UMaterialParameterCollectionAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
