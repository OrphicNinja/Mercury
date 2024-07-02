// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpecialAIComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpecialAIComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSpecialAIComponent::StaticRegisterNativesUSBZSpecialAIComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSpecialAIComponent_NoRegister()
	{
		return USBZSpecialAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpecialAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpecialAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpecialAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSpecialAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpecialAIComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpecialAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpecialAIComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpecialAIComponent_Statics::ClassParams = {
		&USBZSpecialAIComponent::StaticClass,
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
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpecialAIComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpecialAIComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpecialAIComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpecialAIComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpecialAIComponent, 2741535071);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpecialAIComponent>()
	{
		return USBZSpecialAIComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpecialAIComponent(Z_Construct_UClass_USBZSpecialAIComponent, &USBZSpecialAIComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpecialAIComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpecialAIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
