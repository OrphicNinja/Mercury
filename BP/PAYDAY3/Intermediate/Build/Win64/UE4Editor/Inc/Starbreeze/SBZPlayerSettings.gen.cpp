// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookInputSettings();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyPropertyModeData();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	void USBZPlayerSettings::StaticRegisterNativesUSBZPlayerSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerSettings_NoRegister()
	{
		return USBZPlayerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookInput;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyPropertyModeMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyPropertyModeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyPropertyModeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KeyPropertyModeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_LookInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSettings" },
		{ "ModuleRelativePath", "Public/SBZPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_LookInput = { "LookInput", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerSettings, LookInput), Z_Construct_UScriptStruct_FSBZLookInputSettings, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_LookInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_LookInput_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_ValueProp = { "KeyPropertyModeMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZKeyPropertyModeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_Key_KeyProp = { "KeyPropertyModeMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSettings" },
		{ "ModuleRelativePath", "Public/SBZPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap = { "KeyPropertyModeMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerSettings, KeyPropertyModeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_RepeatDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSettings" },
		{ "ModuleRelativePath", "Public/SBZPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_RepeatDelay = { "RepeatDelay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerSettings, RepeatDelay), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_RepeatDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_RepeatDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_LookInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_KeyPropertyModeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerSettings_Statics::NewProp_RepeatDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerSettings_Statics::ClassParams = {
		&USBZPlayerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerSettings, 68705921);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerSettings>()
	{
		return USBZPlayerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerSettings(Z_Construct_UClass_USBZPlayerSettings, &USBZPlayerSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
