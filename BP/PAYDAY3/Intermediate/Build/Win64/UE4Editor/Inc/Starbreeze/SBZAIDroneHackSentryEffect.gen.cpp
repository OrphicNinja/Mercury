// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDroneHackSentryEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDroneHackSentryEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneHackSentryEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneHackSentryEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIDroneHackSentryEffect::StaticRegisterNativesUSBZAIDroneHackSentryEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDroneHackSentryEffect_NoRegister()
	{
		return USBZAIDroneHackSentryEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIDroneHackSentryEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDroneHackSentryEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDroneHackSentryEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::ClassParams = {
		&USBZAIDroneHackSentryEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDroneHackSentryEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDroneHackSentryEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDroneHackSentryEffect, 2317037444);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDroneHackSentryEffect>()
	{
		return USBZAIDroneHackSentryEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDroneHackSentryEffect(Z_Construct_UClass_USBZAIDroneHackSentryEffect, &USBZAIDroneHackSentryEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDroneHackSentryEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDroneHackSentryEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
