// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICloakerMeleeEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICloakerMeleeEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerMeleeEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerMeleeEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAICloakerMeleeEffect::StaticRegisterNativesUSBZAICloakerMeleeEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZAICloakerMeleeEffect_NoRegister()
	{
		return USBZAICloakerMeleeEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICloakerMeleeEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICloakerMeleeEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICloakerMeleeEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::ClassParams = {
		&USBZAICloakerMeleeEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICloakerMeleeEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICloakerMeleeEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICloakerMeleeEffect, 2561119934);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICloakerMeleeEffect>()
	{
		return USBZAICloakerMeleeEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICloakerMeleeEffect(Z_Construct_UClass_USBZAICloakerMeleeEffect, &USBZAICloakerMeleeEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICloakerMeleeEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICloakerMeleeEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
