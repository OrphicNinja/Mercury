// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/AssetTypes/AnimationBlueprintAssetSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlueprintAssetSerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAnimationBlueprintAssetSerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UAnimationBlueprintAssetSerializer();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UBlueprintAssetSerializer();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
// End Cross Module References
	void UAnimationBlueprintAssetSerializer::StaticRegisterNativesUAnimationBlueprintAssetSerializer()
	{
	}
	UClass* Z_Construct_UClass_UAnimationBlueprintAssetSerializer_NoRegister()
	{
		return UAnimationBlueprintAssetSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAssetSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/AssetTypes/AnimationBlueprintAssetSerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/AssetTypes/AnimationBlueprintAssetSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlueprintAssetSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::ClassParams = {
		&UAnimationBlueprintAssetSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlueprintAssetSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationBlueprintAssetSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationBlueprintAssetSerializer, 1778628299);
	template<> ASSETDUMPER_API UClass* StaticClass<UAnimationBlueprintAssetSerializer>()
	{
		return UAnimationBlueprintAssetSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationBlueprintAssetSerializer(Z_Construct_UClass_UAnimationBlueprintAssetSerializer, &UAnimationBlueprintAssetSerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UAnimationBlueprintAssetSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlueprintAssetSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
