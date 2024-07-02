// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticTextureSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAcousticTextureSetComponent::StaticRegisterNativesUAkAcousticTextureSetComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister()
	{
		return UAkAcousticTextureSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAcousticTextureSetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticTextureSetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureSetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams = {
		&UAkAcousticTextureSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAcousticTextureSetComponent, 2122468765);
	template<> AKAUDIO_API UClass* StaticClass<UAkAcousticTextureSetComponent>()
	{
		return UAkAcousticTextureSetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAcousticTextureSetComponent(Z_Construct_UClass_UAkAcousticTextureSetComponent, &UAkAcousticTextureSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAcousticTextureSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTextureSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
