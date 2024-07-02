// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPredefinedBoxNavModifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPredefinedBoxNavModifierComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZPredefinedBoxNavModifierComponent::StaticRegisterNativesUSBZPredefinedBoxNavModifierComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_NoRegister()
	{
		return USBZPredefinedBoxNavModifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavModifierComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "SBZPredefinedBoxNavModifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPredefinedBoxNavModifierComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPredefinedBoxNavModifierComponent" },
		{ "ModuleRelativePath", "Public/SBZPredefinedBoxNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPredefinedBoxNavModifierComponent, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_ForwardOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPredefinedBoxNavModifierComponent" },
		{ "ModuleRelativePath", "Public/SBZPredefinedBoxNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_ForwardOffset = { "ForwardOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPredefinedBoxNavModifierComponent, ForwardOffset), METADATA_PARAMS(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_ForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_ForwardOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::NewProp_ForwardOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPredefinedBoxNavModifierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::ClassParams = {
		&USBZPredefinedBoxNavModifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::PropPointers),
		0,
		0x00A000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPredefinedBoxNavModifierComponent, 3227814619);
	template<> STARBREEZE_API UClass* StaticClass<USBZPredefinedBoxNavModifierComponent>()
	{
		return USBZPredefinedBoxNavModifierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPredefinedBoxNavModifierComponent(Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent, &USBZPredefinedBoxNavModifierComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPredefinedBoxNavModifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPredefinedBoxNavModifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
