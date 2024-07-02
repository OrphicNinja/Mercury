// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/UserWidgetAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UUserWidgetAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UUserWidgetAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAssetTypeSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UUserWidgetAssetSerializer::StaticRegisterNativesUUserWidgetAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UUserWidgetAssetSerializer_NoRegister()
	{
		return UUserWidgetAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidgetAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetTypeSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/UserWidgetAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/UserWidgetAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::ClassParams = {
		&UUserWidgetAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidgetAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserWidgetAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserWidgetAssetSerializer, 553126129);
	template<> ASSETDUMPER_API UClass* StaticClass<UUserWidgetAssetSerializer>()
	{
		return UUserWidgetAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserWidgetAssetSerializer(Z_Construct_UClass_UUserWidgetAssetSerializer, &UUserWidgetAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UUserWidgetAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
