// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnSpawnSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
// End Cross Module References
	void USBZPawnSpawnSettings::StaticRegisterNativesUSBZPawnSpawnSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnSpawnSettings_NoRegister()
	{
		return USBZPawnSpawnSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnSpawnSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSetting;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformSettingMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformSettingMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformSettingMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformSettingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformSettingMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnSpawnSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_DefaultSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_DefaultSetting = { "DefaultSetting", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnSpawnSettings, DefaultSetting), Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings, METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_DefaultSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_DefaultSetting_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_ValueProp = { "PlatformSettingMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_Key_KeyProp = { "PlatformSettingMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap = { "PlatformSettingMap", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnSpawnSettings, PlatformSettingMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPawnSpawnSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_DefaultSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnSpawnSettings_Statics::NewProp_PlatformSettingMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnSpawnSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPawnSpawnSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnSpawnSettings_Statics::ClassParams = {
		&USBZPawnSpawnSettings::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPawnSpawnSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnSpawnSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnSpawnSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnSpawnSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnSpawnSettings, 958035647);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnSpawnSettings>()
	{
		return USBZPawnSpawnSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnSpawnSettings(Z_Construct_UClass_USBZPawnSpawnSettings, &USBZPawnSpawnSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnSpawnSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnSpawnSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
