// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/PhysicalMaterialAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPhysicalMaterialAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPhysicalMaterialAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UPhysicalMaterialAssetSerializer::StaticRegisterNativesUPhysicalMaterialAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterialAssetSerializer_NoRegister()
	{
		return UPhysicalMaterialAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/PhysicalMaterialAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/PhysicalMaterialAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::ClassParams = {
		&UPhysicalMaterialAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterialAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterialAssetSerializer, 951880050);
	template<> ASSETDUMPER_API UClass* StaticClass<UPhysicalMaterialAssetSerializer>()
	{
		return UPhysicalMaterialAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterialAssetSerializer(Z_Construct_UClass_UPhysicalMaterialAssetSerializer, &UPhysicalMaterialAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UPhysicalMaterialAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
