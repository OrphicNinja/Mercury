// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierWeaponDecal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierWeaponDecal() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponDecal_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponDecal();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartApplierWeaponDecal::StaticRegisterNativesUSBZModularPartApplierWeaponDecal()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponDecal_NoRegister()
	{
		return USBZModularPartApplierWeaponDecal::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierWeaponDecal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponDecal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierWeaponDecal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::ClassParams = {
		&USBZModularPartApplierWeaponDecal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponDecal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierWeaponDecal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierWeaponDecal, 1988739725);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierWeaponDecal>()
	{
		return USBZModularPartApplierWeaponDecal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierWeaponDecal(Z_Construct_UClass_USBZModularPartApplierWeaponDecal, &USBZModularPartApplierWeaponDecal::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierWeaponDecal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierWeaponDecal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
