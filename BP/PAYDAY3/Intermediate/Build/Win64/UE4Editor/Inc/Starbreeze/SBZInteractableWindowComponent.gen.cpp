// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableWindowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableWindowComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableWindowComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableWindowComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractableWindowComponent::StaticRegisterNativesUSBZInteractableWindowComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractableWindowComponent_NoRegister()
	{
		return USBZInteractableWindowComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractableWindowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractableWindowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableWindowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZInteractableWindowComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableWindowComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractableWindowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractableWindowComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractableWindowComponent_Statics::ClassParams = {
		&USBZInteractableWindowComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractableWindowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableWindowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractableWindowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractableWindowComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractableWindowComponent, 3779075159);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractableWindowComponent>()
	{
		return USBZInteractableWindowComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractableWindowComponent(Z_Construct_UClass_USBZInteractableWindowComponent, &USBZInteractableWindowComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractableWindowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractableWindowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
