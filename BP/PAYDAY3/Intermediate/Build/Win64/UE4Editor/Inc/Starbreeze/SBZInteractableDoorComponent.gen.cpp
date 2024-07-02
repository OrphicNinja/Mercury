// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableDoorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableDoorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableDoorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableDoorComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractableDoorComponent::StaticRegisterNativesUSBZInteractableDoorComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractableDoorComponent_NoRegister()
	{
		return USBZInteractableDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractableDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractableDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractableDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZInteractableDoorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableDoorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractableDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractableDoorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractableDoorComponent_Statics::ClassParams = {
		&USBZInteractableDoorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractableDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractableDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractableDoorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractableDoorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractableDoorComponent, 3084261825);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractableDoorComponent>()
	{
		return USBZInteractableDoorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractableDoorComponent(Z_Construct_UClass_USBZInteractableDoorComponent, &USBZInteractableDoorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractableDoorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractableDoorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
