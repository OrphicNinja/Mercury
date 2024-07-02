// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRappellingRopeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRappellingRopeComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRappellingRopeComponent::StaticRegisterNativesUSBZRappellingRopeComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZRappellingRopeComponent_NoRegister()
	{
		return USBZRappellingRopeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZRappellingRopeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRappellingRopeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "SBZRappellingRopeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRappellingRopeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRappellingRopeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRappellingRopeComponent_Statics::ClassParams = {
		&USBZRappellingRopeComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRappellingRopeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRappellingRopeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRappellingRopeComponent, 3562131668);
	template<> STARBREEZE_API UClass* StaticClass<USBZRappellingRopeComponent>()
	{
		return USBZRappellingRopeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRappellingRopeComponent(Z_Construct_UClass_USBZRappellingRopeComponent, &USBZRappellingRopeComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRappellingRopeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRappellingRopeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
