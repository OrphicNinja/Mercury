// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCharmApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCharmApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWeaponCharmApplier::StaticRegisterNativesUSBZWeaponCharmApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponCharmApplier_NoRegister()
	{
		return USBZWeaponCharmApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponCharmApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponCharmApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponCharmApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponCharmApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponCharmApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponCharmApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponCharmApplier_Statics::ClassParams = {
		&USBZWeaponCharmApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponCharmApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponCharmApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponCharmApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponCharmApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponCharmApplier, 3300885515);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponCharmApplier>()
	{
		return USBZWeaponCharmApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponCharmApplier(Z_Construct_UClass_USBZWeaponCharmApplier, &USBZWeaponCharmApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponCharmApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponCharmApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
