// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDeveloperSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDeveloperSettings::StaticRegisterNativesUSBZDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZDeveloperSettings_NoRegister()
	{
		return USBZDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDeveloperSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDeveloperSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDeveloperSettings_Statics::ClassParams = {
		&USBZDeveloperSettings::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A3u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDeveloperSettings, 1353644343);
	template<> STARBREEZE_API UClass* StaticClass<USBZDeveloperSettings>()
	{
		return USBZDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDeveloperSettings(Z_Construct_UClass_USBZDeveloperSettings, &USBZDeveloperSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
