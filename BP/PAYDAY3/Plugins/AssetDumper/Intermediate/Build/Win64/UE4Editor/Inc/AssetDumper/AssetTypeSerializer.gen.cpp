// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetDumping/AssetTypeSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTypeSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UAssetTypeSerializer::StaticRegisterNativesUAssetTypeSerializer()
	{
	}
	UClass* Z_Construct_UClass_UAssetTypeSerializer_NoRegister()
	{
		return UAssetTypeSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTypeSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTypeSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTypeSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetDumping/AssetTypeSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetDumping/AssetTypeSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTypeSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTypeSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetTypeSerializer_Statics::ClassParams = {
		&UAssetTypeSerializer::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetTypeSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTypeSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTypeSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetTypeSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetTypeSerializer, 4249486335);
	template<> ASSETDUMPER_API UClass* StaticClass<UAssetTypeSerializer>()
	{
		return UAssetTypeSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetTypeSerializer(Z_Construct_UClass_UAssetTypeSerializer, &UAssetTypeSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UAssetTypeSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTypeSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
