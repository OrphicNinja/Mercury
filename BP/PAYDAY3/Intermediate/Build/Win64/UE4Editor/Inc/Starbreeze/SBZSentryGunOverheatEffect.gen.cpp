// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGunOverheatEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGunOverheatEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunOverheatEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunOverheatEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryGunOverheatEffect::StaticRegisterNativesUSBZSentryGunOverheatEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryGunOverheatEffect_NoRegister()
	{
		return USBZSentryGunOverheatEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryGunOverheatEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGunOverheatEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryGunOverheatEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::ClassParams = {
		&USBZSentryGunOverheatEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryGunOverheatEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryGunOverheatEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryGunOverheatEffect, 3347501439);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryGunOverheatEffect>()
	{
		return USBZSentryGunOverheatEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryGunOverheatEffect(Z_Construct_UClass_USBZSentryGunOverheatEffect, &USBZSentryGunOverheatEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryGunOverheatEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryGunOverheatEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
