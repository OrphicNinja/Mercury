// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierWeaponPatternBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierWeaponPatternBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartApplierWeaponPatternBase::StaticRegisterNativesUSBZModularPartApplierWeaponPatternBase()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_NoRegister()
	{
		return USBZModularPartApplierWeaponPatternBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplierWeaponCosmetics,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierWeaponPatternBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierWeaponPatternBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierWeaponPatternBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::ClassParams = {
		&USBZModularPartApplierWeaponPatternBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierWeaponPatternBase, 1567285383);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierWeaponPatternBase>()
	{
		return USBZModularPartApplierWeaponPatternBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierWeaponPatternBase(Z_Construct_UClass_USBZModularPartApplierWeaponPatternBase, &USBZModularPartApplierWeaponPatternBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierWeaponPatternBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierWeaponPatternBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
