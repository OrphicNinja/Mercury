// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPostProcessSettingsPresetDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPostProcessSettingsPresetDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	void USBZPostProcessSettingsPresetDataAsset::StaticRegisterNativesUSBZPostProcessSettingsPresetDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_NoRegister()
	{
		return USBZPostProcessSettingsPresetDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics
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
	UObject* (*const Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPostProcessSettingsPresetDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPostProcessSettingsPresetDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPostProcessSettingsPresetDataAsset" },
		{ "ModuleRelativePath", "Public/SBZPostProcessSettingsPresetDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPostProcessSettingsPresetDataAsset, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPostProcessSettingsPresetDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::ClassParams = {
		&USBZPostProcessSettingsPresetDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPostProcessSettingsPresetDataAsset, 962790830);
	template<> STARBREEZE_API UClass* StaticClass<USBZPostProcessSettingsPresetDataAsset>()
	{
		return USBZPostProcessSettingsPresetDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPostProcessSettingsPresetDataAsset(Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset, &USBZPostProcessSettingsPresetDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPostProcessSettingsPresetDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPostProcessSettingsPresetDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
