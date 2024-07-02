// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableCarriedBagComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableCarriedBagComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableCarriedBagComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableCarriedBagComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractableCarriedBagComponent::StaticRegisterNativesUSBZInteractableCarriedBagComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractableCarriedBagComponent_NoRegister()
	{
		return USBZInteractableCarriedBagComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZInteractableCarriedBagComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableCarriedBagComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractableCarriedBagComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::ClassParams = {
		&USBZInteractableCarriedBagComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractableCarriedBagComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractableCarriedBagComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractableCarriedBagComponent, 4246436553);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractableCarriedBagComponent>()
	{
		return USBZInteractableCarriedBagComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractableCarriedBagComponent(Z_Construct_UClass_USBZInteractableCarriedBagComponent, &USBZInteractableCarriedBagComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractableCarriedBagComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractableCarriedBagComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
