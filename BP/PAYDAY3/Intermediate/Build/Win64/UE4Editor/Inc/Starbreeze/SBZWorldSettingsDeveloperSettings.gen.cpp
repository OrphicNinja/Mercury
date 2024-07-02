// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldSettingsDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldSettingsDeveloperSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldSettingsDeveloperSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSurfaceTypesConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSettings_NoRegister();
// End Cross Module References
	void USBZWorldSettingsDeveloperSettings::StaticRegisterNativesUSBZWorldSettingsDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_NoRegister()
	{
		return USBZWorldSettingsDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftSurfaceTypesConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSurfaceTypesConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLifeActionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLifeActionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldSettingsDeveloperSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldSettingsDeveloperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_SoftSurfaceTypesConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldSettingsDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SBZWorldSettingsDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_SoftSurfaceTypesConfig = { "SoftSurfaceTypesConfig", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldSettingsDeveloperSettings, SoftSurfaceTypesConfig), Z_Construct_UClass_USBZSurfaceTypesConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_SoftSurfaceTypesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_SoftSurfaceTypesConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_MaterialParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldSettingsDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SBZWorldSettingsDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_MaterialParameterCollection = { "MaterialParameterCollection", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldSettingsDeveloperSettings, MaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_MaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_MaterialParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_NiagaraParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldSettingsDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SBZWorldSettingsDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_NiagaraParameterCollection = { "NiagaraParameterCollection", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldSettingsDeveloperSettings, NiagaraParameterCollection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_NiagaraParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_NiagaraParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_DefaultLifeActionSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldSettingsDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SBZWorldSettingsDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_DefaultLifeActionSettings = { "DefaultLifeActionSettings", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldSettingsDeveloperSettings, DefaultLifeActionSettings), Z_Construct_UClass_USBZLifeActionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_DefaultLifeActionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_DefaultLifeActionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_SoftSurfaceTypesConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_MaterialParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_NiagaraParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::NewProp_DefaultLifeActionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldSettingsDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::ClassParams = {
		&USBZWorldSettingsDeveloperSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldSettingsDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldSettingsDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldSettingsDeveloperSettings, 97982237);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldSettingsDeveloperSettings>()
	{
		return USBZWorldSettingsDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldSettingsDeveloperSettings(Z_Construct_UClass_USBZWorldSettingsDeveloperSettings, &USBZWorldSettingsDeveloperSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldSettingsDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldSettingsDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
