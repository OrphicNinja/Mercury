// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryInteractableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryInteractableComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryInteractableComponent::StaticRegisterNativesUSBZSentryInteractableComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryInteractableComponent_NoRegister()
	{
		return USBZSentryInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatInteractionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverheatInteractionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularInteractionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegularInteractionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSentryInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryInteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_OverheatInteractionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZSentryInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_OverheatInteractionTime = { "OverheatInteractionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryInteractableComponent, OverheatInteractionTime), METADATA_PARAMS(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_OverheatInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_OverheatInteractionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_RegularInteractionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZSentryInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_RegularInteractionTime = { "RegularInteractionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSentryInteractableComponent, RegularInteractionTime), METADATA_PARAMS(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_RegularInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_RegularInteractionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSentryInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_OverheatInteractionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSentryInteractableComponent_Statics::NewProp_RegularInteractionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryInteractableComponent_Statics::ClassParams = {
		&USBZSentryInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSentryInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryInteractableComponent, 1771101500);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryInteractableComponent>()
	{
		return USBZSentryInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryInteractableComponent(Z_Construct_UClass_USBZSentryInteractableComponent, &USBZSentryInteractableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
