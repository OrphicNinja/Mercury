// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPersistentWorldDamageSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPersistentWorldDamageSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPersistentWorldDamageSettings::StaticRegisterNativesUSBZPersistentWorldDamageSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZPersistentWorldDamageSettings_NoRegister()
	{
		return USBZPersistentWorldDamageSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadialDamageMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPersistentWorldDamageSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageSettings" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageSettings, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageSettings" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageSettings, Health), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_RadialDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageSettings" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_RadialDamageMultiplier = { "RadialDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageSettings, RadialDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_RadialDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_RadialDamageMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::NewProp_RadialDamageMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPersistentWorldDamageSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::ClassParams = {
		&USBZPersistentWorldDamageSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPersistentWorldDamageSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPersistentWorldDamageSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPersistentWorldDamageSettings, 318033244);
	template<> STARBREEZE_API UClass* StaticClass<USBZPersistentWorldDamageSettings>()
	{
		return USBZPersistentWorldDamageSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPersistentWorldDamageSettings(Z_Construct_UClass_USBZPersistentWorldDamageSettings, &USBZPersistentWorldDamageSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPersistentWorldDamageSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPersistentWorldDamageSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
