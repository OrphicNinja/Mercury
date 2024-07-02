// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmmoSpecialistHighGrainCrewEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmmoSpecialistHighGrainCrewEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAmmoSpecialistHighGrainCrewEffect::StaticRegisterNativesUSBZAmmoSpecialistHighGrainCrewEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_NoRegister()
	{
		return USBZAmmoSpecialistHighGrainCrewEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAmmoSpecialistHighGrainCrewEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmmoSpecialistHighGrainCrewEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAmmoSpecialistHighGrainCrewEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::ClassParams = {
		&USBZAmmoSpecialistHighGrainCrewEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAmmoSpecialistHighGrainCrewEffect, 3991559788);
	template<> STARBREEZE_API UClass* StaticClass<USBZAmmoSpecialistHighGrainCrewEffect>()
	{
		return USBZAmmoSpecialistHighGrainCrewEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAmmoSpecialistHighGrainCrewEffect(Z_Construct_UClass_USBZAmmoSpecialistHighGrainCrewEffect, &USBZAmmoSpecialistHighGrainCrewEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAmmoSpecialistHighGrainCrewEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAmmoSpecialistHighGrainCrewEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
