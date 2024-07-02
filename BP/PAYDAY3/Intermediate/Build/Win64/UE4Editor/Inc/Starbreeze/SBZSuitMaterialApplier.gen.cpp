// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitMaterialApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitMaterialApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitMaterialApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitMaterialApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitMaterialApplier::StaticRegisterNativesUSBZSuitMaterialApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitMaterialApplier_NoRegister()
	{
		return USBZSuitMaterialApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitMaterialApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitMaterialApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitMaterialApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitMaterialApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitMaterialApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitMaterialApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitMaterialApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitMaterialApplier_Statics::ClassParams = {
		&USBZSuitMaterialApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitMaterialApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitMaterialApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitMaterialApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitMaterialApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitMaterialApplier, 1517355280);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitMaterialApplier>()
	{
		return USBZSuitMaterialApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitMaterialApplier(Z_Construct_UClass_USBZSuitMaterialApplier, &USBZSuitMaterialApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitMaterialApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitMaterialApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
