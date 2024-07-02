// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGateNavLinkAgilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGateNavLinkAgilityComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkAgilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkAgilityComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGateNavLinkAgilityComponent::StaticRegisterNativesUSBZGateNavLinkAgilityComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZGateNavLinkAgilityComponent_NoRegister()
	{
		return USBZGateNavLinkAgilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZNavLinkAgilityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZGateNavLinkAgilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGateNavLinkAgilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGateNavLinkAgilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::ClassParams = {
		&USBZGateNavLinkAgilityComponent::StaticClass,
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
		0x04A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGateNavLinkAgilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGateNavLinkAgilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGateNavLinkAgilityComponent, 1164605996);
	template<> STARBREEZE_API UClass* StaticClass<USBZGateNavLinkAgilityComponent>()
	{
		return USBZGateNavLinkAgilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGateNavLinkAgilityComponent(Z_Construct_UClass_USBZGateNavLinkAgilityComponent, &USBZGateNavLinkAgilityComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGateNavLinkAgilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGateNavLinkAgilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
