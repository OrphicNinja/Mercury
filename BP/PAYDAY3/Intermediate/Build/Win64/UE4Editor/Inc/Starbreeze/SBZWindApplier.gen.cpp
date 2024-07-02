// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindApplier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	void USBZWindApplier::StaticRegisterNativesUSBZWindApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZWindApplier_NoRegister()
	{
		return USBZWindApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZWindApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWindApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWindApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindApplier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindApplier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindApplier" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindApplier, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWindApplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindApplier_Statics::NewProp_Components,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWindApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWindApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWindApplier_Statics::ClassParams = {
		&USBZWindApplier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWindApplier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindApplier_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWindApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWindApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWindApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWindApplier, 2125098054);
	template<> STARBREEZE_API UClass* StaticClass<USBZWindApplier>()
	{
		return USBZWindApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWindApplier(Z_Construct_UClass_USBZWindApplier, &USBZWindApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWindApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWindApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
