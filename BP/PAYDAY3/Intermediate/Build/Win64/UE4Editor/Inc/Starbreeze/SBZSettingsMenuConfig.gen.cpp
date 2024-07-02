// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo();
// End Cross Module References
	void USBZSettingsMenuConfig::StaticRegisterNativesUSBZSettingsMenuConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZSettingsMenuConfig_NoRegister()
	{
		return USBZSettingsMenuConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsMenuConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingsCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettingsCategories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsMenuConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsMenuConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories_Inner = { "SettingsCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSettingsMenuCategoryInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuConfig" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories = { "SettingsCategories", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsMenuConfig, SettingsCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsMenuConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsMenuConfig_Statics::NewProp_SettingsCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsMenuConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsMenuConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsMenuConfig_Statics::ClassParams = {
		&USBZSettingsMenuConfig::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSettingsMenuConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsMenuConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsMenuConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsMenuConfig, 648333903);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsMenuConfig>()
	{
		return USBZSettingsMenuConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsMenuConfig(Z_Construct_UClass_USBZSettingsMenuConfig, &USBZSettingsMenuConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsMenuConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsMenuConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
