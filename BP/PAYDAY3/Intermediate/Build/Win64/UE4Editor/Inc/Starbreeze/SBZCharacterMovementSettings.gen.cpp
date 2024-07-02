// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterMovementSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterMovementSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterMovementSetting();
// End Cross Module References
	void USBZCharacterMovementSettings::StaticRegisterNativesUSBZCharacterMovementSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterMovementSettings_NoRegister()
	{
		return USBZCharacterMovementSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterMovementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSetting;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterMovementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterMovementSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_DefaultSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSettings" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_DefaultSetting = { "DefaultSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementSettings, DefaultSetting), Z_Construct_UScriptStruct_FSBZCharacterMovementSetting, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_DefaultSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_DefaultSetting_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCharacterMovementSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementSettings" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementSettings, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterMovementSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_DefaultSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterMovementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterMovementSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterMovementSettings_Statics::ClassParams = {
		&USBZCharacterMovementSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterMovementSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterMovementSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterMovementSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterMovementSettings, 190857376);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterMovementSettings>()
	{
		return USBZCharacterMovementSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterMovementSettings(Z_Construct_UClass_USBZCharacterMovementSettings, &USBZCharacterMovementSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterMovementSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterMovementSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
