// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssetManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssetManagerSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetManagerSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetManagerSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetLookupData_NoRegister();
// End Cross Module References
	void USBZAssetManagerSettings::StaticRegisterNativesUSBZAssetManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZAssetManagerSettings_NoRegister()
	{
		return USBZAssetManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssetManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalMaterialPathArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialPathArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterialPathArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftAssetLookupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftAssetLookupData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssetManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAssetManagerSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray_Inner = { "PhysicalMaterialPathArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZAssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray = { "PhysicalMaterialPathArray", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetManagerSettings, PhysicalMaterialPathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_SoftAssetLookupData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZAssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_SoftAssetLookupData = { "SoftAssetLookupData", nullptr, (EPropertyFlags)0x0044000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetManagerSettings, SoftAssetLookupData), Z_Construct_UClass_USBZAssetLookupData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_SoftAssetLookupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_SoftAssetLookupData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAssetManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_PhysicalMaterialPathArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetManagerSettings_Statics::NewProp_SoftAssetLookupData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssetManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAssetManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssetManagerSettings_Statics::ClassParams = {
		&USBZAssetManagerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAssetManagerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManagerSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssetManagerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssetManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssetManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssetManagerSettings, 3212790858);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssetManagerSettings>()
	{
		return USBZAssetManagerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssetManagerSettings(Z_Construct_UClass_USBZAssetManagerSettings, &USBZAssetManagerSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssetManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssetManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
