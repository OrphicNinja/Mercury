// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunRangedWeaponAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunRangedWeaponAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunRangedWeaponAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFireRangedWeaponAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryGunRangedWeaponAbility::StaticRegisterNativesUSBZSentryGunRangedWeaponAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_NoRegister()
	{
		return USBZSentryGunRangedWeaponAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZFireRangedWeaponAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryGunRangedWeaponAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunRangedWeaponAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunRangedWeaponAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::ClassParams = {
		&USBZSentryGunRangedWeaponAbility::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunRangedWeaponAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunRangedWeaponAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunRangedWeaponAbility, 2836401729);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunRangedWeaponAbility>()
	{
		return USBZSentryGunRangedWeaponAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunRangedWeaponAbility(Z_Construct_UClass_USBZSentryGunRangedWeaponAbility, &USBZSentryGunRangedWeaponAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunRangedWeaponAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunRangedWeaponAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
