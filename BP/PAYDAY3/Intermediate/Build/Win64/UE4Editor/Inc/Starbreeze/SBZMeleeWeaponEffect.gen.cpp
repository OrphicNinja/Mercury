// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeWeaponEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeWeaponEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeWeaponEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeWeaponEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMeleeWeaponEffect::StaticRegisterNativesUSBZMeleeWeaponEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZMeleeWeaponEffect_NoRegister()
	{
		return USBZMeleeWeaponEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeWeaponEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeleeWeaponEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeWeaponEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeWeaponEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::ClassParams = {
		&USBZMeleeWeaponEffect::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeWeaponEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeWeaponEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeWeaponEffect, 3932787468);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeWeaponEffect>()
	{
		return USBZMeleeWeaponEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeWeaponEffect(Z_Construct_UClass_USBZMeleeWeaponEffect, &USBZMeleeWeaponEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeWeaponEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeWeaponEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
