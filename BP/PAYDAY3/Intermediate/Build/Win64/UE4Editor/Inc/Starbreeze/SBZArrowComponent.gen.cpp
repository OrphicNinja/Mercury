// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArrowComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArrowComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZArrowComponent::StaticRegisterNativesUSBZArrowComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZArrowComponent_NoRegister()
	{
		return USBZArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SBZArrowComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArrowComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArrowComponent" },
		{ "ModuleRelativePath", "Public/SBZArrowComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArrowComponent, From), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArrowComponent" },
		{ "ModuleRelativePath", "Public/SBZArrowComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZArrowComponent, To), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZArrowComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZArrowComponent_Statics::NewProp_To,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZArrowComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZArrowComponent_Statics::ClassParams = {
		&USBZArrowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZArrowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZArrowComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZArrowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZArrowComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZArrowComponent, 949450851);
	template<> STARBREEZE_API UClass* StaticClass<USBZArrowComponent>()
	{
		return USBZArrowComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZArrowComponent(Z_Construct_UClass_USBZArrowComponent, &USBZArrowComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
