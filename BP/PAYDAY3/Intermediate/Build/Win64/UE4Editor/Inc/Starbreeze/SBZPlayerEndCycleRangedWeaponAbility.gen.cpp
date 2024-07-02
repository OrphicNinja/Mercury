// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerEndCycleRangedWeaponAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerEndCycleRangedWeaponAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerReloadRangedWeaponAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerEndCycleRangedWeaponAbility::StaticRegisterNativesUSBZPlayerEndCycleRangedWeaponAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_NoRegister()
	{
		return USBZPlayerEndCycleRangedWeaponAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerReloadRangedWeaponAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerEndCycleRangedWeaponAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndCycleRangedWeaponAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerEndCycleRangedWeaponAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::ClassParams = {
		&USBZPlayerEndCycleRangedWeaponAbility::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerEndCycleRangedWeaponAbility, 180490786);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerEndCycleRangedWeaponAbility>()
	{
		return USBZPlayerEndCycleRangedWeaponAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerEndCycleRangedWeaponAbility(Z_Construct_UClass_USBZPlayerEndCycleRangedWeaponAbility, &USBZPlayerEndCycleRangedWeaponAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerEndCycleRangedWeaponAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerEndCycleRangedWeaponAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
