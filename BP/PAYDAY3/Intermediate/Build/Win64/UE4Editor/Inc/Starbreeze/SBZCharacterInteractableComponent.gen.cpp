// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterInteractableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterInteractableComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCharacterInteractableComponent::StaticRegisterNativesUSBZCharacterInteractableComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterInteractableComponent_NoRegister()
	{
		return USBZCharacterInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCharacterInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterInteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::ClassParams = {
		&USBZCharacterInteractableComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterInteractableComponent, 3673493633);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterInteractableComponent>()
	{
		return USBZCharacterInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterInteractableComponent(Z_Construct_UClass_USBZCharacterInteractableComponent, &USBZCharacterInteractableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
