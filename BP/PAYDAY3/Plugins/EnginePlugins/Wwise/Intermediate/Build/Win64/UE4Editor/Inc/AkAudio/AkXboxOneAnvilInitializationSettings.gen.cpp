// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXboxOneAnvilInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOneAnvilInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneGDKInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkXboxOneAnvilInitializationSettings::StaticRegisterNativesUAkXboxOneAnvilInitializationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_NoRegister()
	{
		return UAkXboxOneAnvilInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkXboxOneGDKInitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkXboxOneAnvilInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkXboxOneAnvilInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXboxOneAnvilInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::ClassParams = {
		&UAkXboxOneAnvilInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkXboxOneAnvilInitializationSettings, 315491682);
	template<> AKAUDIO_API UClass* StaticClass<UAkXboxOneAnvilInitializationSettings>()
	{
		return UAkXboxOneAnvilInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkXboxOneAnvilInitializationSettings(Z_Construct_UClass_UAkXboxOneAnvilInitializationSettings, &UAkXboxOneAnvilInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkXboxOneAnvilInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXboxOneAnvilInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
