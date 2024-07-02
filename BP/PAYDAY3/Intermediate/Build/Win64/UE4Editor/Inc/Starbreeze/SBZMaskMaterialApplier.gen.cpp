// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskMaterialApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskMaterialApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskMaterialApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskMaterialApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskMaterialApplier::StaticRegisterNativesUSBZMaskMaterialApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskMaterialApplier_NoRegister()
	{
		return USBZMaskMaterialApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskMaterialApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskMaterialApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskMaterialApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskMaterialApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskMaterialApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskMaterialApplier_Statics::ClassParams = {
		&USBZMaskMaterialApplier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskMaterialApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskMaterialApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskMaterialApplier, 812127443);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskMaterialApplier>()
	{
		return USBZMaskMaterialApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskMaterialApplier(Z_Construct_UClass_USBZMaskMaterialApplier, &USBZMaskMaterialApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskMaterialApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskMaterialApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
