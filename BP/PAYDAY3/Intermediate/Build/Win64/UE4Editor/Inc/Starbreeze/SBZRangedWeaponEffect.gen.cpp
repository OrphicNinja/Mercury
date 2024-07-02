// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRangedWeaponEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRangedWeaponEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRangedWeaponEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRangedWeaponEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRangedWeaponEffect::StaticRegisterNativesUSBZRangedWeaponEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZRangedWeaponEffect_NoRegister()
	{
		return USBZRangedWeaponEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZRangedWeaponEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRangedWeaponEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRangedWeaponEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRangedWeaponEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRangedWeaponEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRangedWeaponEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRangedWeaponEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRangedWeaponEffect_Statics::ClassParams = {
		&USBZRangedWeaponEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZRangedWeaponEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRangedWeaponEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRangedWeaponEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRangedWeaponEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRangedWeaponEffect, 3979636477);
	template<> STARBREEZE_API UClass* StaticClass<USBZRangedWeaponEffect>()
	{
		return USBZRangedWeaponEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRangedWeaponEffect(Z_Construct_UClass_USBZRangedWeaponEffect, &USBZRangedWeaponEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRangedWeaponEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRangedWeaponEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
