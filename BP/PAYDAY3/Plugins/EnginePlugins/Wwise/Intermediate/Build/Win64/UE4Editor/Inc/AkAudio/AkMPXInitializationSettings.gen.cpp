// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMPXInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMPXInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMPXInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMPXInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMPXInitializationSettings::StaticRegisterNativesUAkMPXInitializationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkMPXInitializationSettings_NoRegister()
	{
		return UAkMPXInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkMPXInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMPXInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkXSXInitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMPXInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMPXInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMPXInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMPXInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMPXInitializationSettings_Statics::ClassParams = {
		&UAkMPXInitializationSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMPXInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMPXInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMPXInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMPXInitializationSettings, 1026381181);
	template<> AKAUDIO_API UClass* StaticClass<UAkMPXInitializationSettings>()
	{
		return UAkMPXInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMPXInitializationSettings(Z_Construct_UClass_UAkMPXInitializationSettings, &UAkMPXInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMPXInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMPXInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
