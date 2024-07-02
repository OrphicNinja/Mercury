// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningModifierSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningModifierSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningModifierSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningModifierSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData();
// End Cross Module References
	void USBZPreplanningModifierSettings::StaticRegisterNativesUSBZPreplanningModifierSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZPreplanningModifierSettings_NoRegister()
	{
		return USBZPreplanningModifierSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPreplanningModifierSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPreplanningModifierSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningModifierSettings" },
		{ "ModuleRelativePath", "Public/SBZPreplanningModifierSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPreplanningModifierSettings, Settings), Z_Construct_UScriptStruct_FSBZPreplanningModifierSettingsData, METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPreplanningModifierSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::ClassParams = {
		&USBZPreplanningModifierSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPreplanningModifierSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPreplanningModifierSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPreplanningModifierSettings, 915439745);
	template<> STARBREEZE_API UClass* StaticClass<USBZPreplanningModifierSettings>()
	{
		return USBZPreplanningModifierSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPreplanningModifierSettings(Z_Construct_UClass_USBZPreplanningModifierSettings, &USBZPreplanningModifierSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPreplanningModifierSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPreplanningModifierSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
