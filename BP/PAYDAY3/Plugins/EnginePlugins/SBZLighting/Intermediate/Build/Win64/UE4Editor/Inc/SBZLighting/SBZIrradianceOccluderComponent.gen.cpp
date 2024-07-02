// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZLighting/Public/SBZIrradianceOccluderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZIrradianceOccluderComponent() {}
// Cross Module References
	SBZLIGHTING_API UClass* Z_Construct_UClass_USBZIrradianceOccluderComponent_NoRegister();
	SBZLIGHTING_API UClass* Z_Construct_UClass_USBZIrradianceOccluderComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SBZLighting();
// End Cross Module References
	void USBZIrradianceOccluderComponent::StaticRegisterNativesUSBZIrradianceOccluderComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZIrradianceOccluderComponent_NoRegister()
	{
		return USBZIrradianceOccluderComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZLighting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZIrradianceOccluderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZIrradianceOccluderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZIrradianceOccluderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::ClassParams = {
		&USBZIrradianceOccluderComponent::StaticClass,
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
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZIrradianceOccluderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZIrradianceOccluderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZIrradianceOccluderComponent, 2874559213);
	template<> SBZLIGHTING_API UClass* StaticClass<USBZIrradianceOccluderComponent>()
	{
		return USBZIrradianceOccluderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZIrradianceOccluderComponent(Z_Construct_UClass_USBZIrradianceOccluderComponent, &USBZIrradianceOccluderComponent::StaticClass, TEXT("/Script/SBZLighting"), TEXT("USBZIrradianceOccluderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZIrradianceOccluderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
