// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierWeaponCosmetics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierWeaponCosmetics() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartApplierWeaponCosmetics::StaticRegisterNativesUSBZModularPartApplierWeaponCosmetics()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_NoRegister()
	{
		return USBZModularPartApplierWeaponCosmetics::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierWeaponCosmetics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponCosmetics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierWeaponCosmetics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::ClassParams = {
		&USBZModularPartApplierWeaponCosmetics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierWeaponCosmetics, 4175270278);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierWeaponCosmetics>()
	{
		return USBZModularPartApplierWeaponCosmetics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierWeaponCosmetics(Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics, &USBZModularPartApplierWeaponCosmetics::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierWeaponCosmetics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierWeaponCosmetics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
