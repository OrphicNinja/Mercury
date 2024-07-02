// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/StaticMeshAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UStaticMeshAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UStaticMeshAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UStaticMeshAssetSerializer::StaticRegisterNativesUStaticMeshAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshAssetSerializer_NoRegister()
	{
		return UStaticMeshAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/StaticMeshAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/StaticMeshAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::ClassParams = {
		&UStaticMeshAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshAssetSerializer, 441761404);
	template<> ASSETDUMPER_API UClass* StaticClass<UStaticMeshAssetSerializer>()
	{
		return UStaticMeshAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshAssetSerializer(Z_Construct_UClass_UStaticMeshAssetSerializer, &UStaticMeshAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UStaticMeshAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
