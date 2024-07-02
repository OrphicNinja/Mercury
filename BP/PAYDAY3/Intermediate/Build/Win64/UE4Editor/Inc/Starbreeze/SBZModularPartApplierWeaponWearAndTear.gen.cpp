// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierWeaponWearAndTear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierWeaponWearAndTear() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartApplierWeaponWearAndTear::StaticRegisterNativesUSBZModularPartApplierWeaponWearAndTear()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_NoRegister()
	{
		return USBZModularPartApplierWeaponWearAndTear::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierWeaponWearAndTear.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponWearAndTear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierWeaponWearAndTear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::ClassParams = {
		&USBZModularPartApplierWeaponWearAndTear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierWeaponWearAndTear, 913406760);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierWeaponWearAndTear>()
	{
		return USBZModularPartApplierWeaponWearAndTear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierWeaponWearAndTear(Z_Construct_UClass_USBZModularPartApplierWeaponWearAndTear, &USBZModularPartApplierWeaponWearAndTear::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierWeaponWearAndTear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierWeaponWearAndTear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
