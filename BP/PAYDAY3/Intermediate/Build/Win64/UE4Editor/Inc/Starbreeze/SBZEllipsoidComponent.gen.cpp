// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEllipsoidComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEllipsoidComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEllipsoidComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEllipsoidComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEllipsoidComponent::StaticRegisterNativesUSBZEllipsoidComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZEllipsoidComponent_NoRegister()
	{
		return USBZEllipsoidComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZEllipsoidComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEllipsoidComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEllipsoidComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SBZEllipsoidComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEllipsoidComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEllipsoidComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEllipsoidComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEllipsoidComponent_Statics::ClassParams = {
		&USBZEllipsoidComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEllipsoidComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEllipsoidComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEllipsoidComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEllipsoidComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEllipsoidComponent, 1301031861);
	template<> STARBREEZE_API UClass* StaticClass<USBZEllipsoidComponent>()
	{
		return USBZEllipsoidComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEllipsoidComponent(Z_Construct_UClass_USBZEllipsoidComponent, &USBZEllipsoidComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEllipsoidComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEllipsoidComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
