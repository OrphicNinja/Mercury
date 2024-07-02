// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUISettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUISettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUISettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUISettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents();
// End Cross Module References
	void USBZUISettings::StaticRegisterNativesUSBZUISettings()
	{
	}
	UClass* Z_Construct_UClass_USBZUISettings_NoRegister()
	{
		return USBZUISettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorsMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ColorsMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FontMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FontMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSoundEvents;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowActionInputKeyboardMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShowActionInputKeyboardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowActionInputKeyboardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ShowActionInputKeyboardMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShowActionInputGamepadMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShowActionInputGamepadMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowActionInputGamepadMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ShowActionInputGamepadMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServersStatusMessageURL_Development_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServersStatusMessageURL_Development;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServersStatusMessageURL_Live_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServersStatusMessageURL_Live;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUISettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_ValueProp = { "ColorsMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_Key_KeyProp = { "ColorsMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap = { "ColorsMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, ColorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_ValueProp = { "FontMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_Key_KeyProp = { "FontMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap = { "FontMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, FontMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_DefaultSoundEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_DefaultSoundEvents = { "DefaultSoundEvents", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, DefaultSoundEvents), Z_Construct_UScriptStruct_FSBZUIDefaultSoundEvents, METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_DefaultSoundEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_DefaultSoundEvents_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_ValueProp = { "ShowActionInputKeyboardMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_Key_KeyProp = { "ShowActionInputKeyboardMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap = { "ShowActionInputKeyboardMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, ShowActionInputKeyboardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_ValueProp = { "ShowActionInputGamepadMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_Key_KeyProp = { "ShowActionInputGamepadMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap = { "ShowActionInputGamepadMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, ShowActionInputGamepadMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Development_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Development = { "ServersStatusMessageURL_Development", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, ServersStatusMessageURL_Development), METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Development_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Development_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Live_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUISettings" },
		{ "ModuleRelativePath", "Public/SBZUISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Live = { "ServersStatusMessageURL_Live", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUISettings, ServersStatusMessageURL_Live), METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Live_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Live_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUISettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ColorsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_FontMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_DefaultSoundEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputKeyboardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ShowActionInputGamepadMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Development,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUISettings_Statics::NewProp_ServersStatusMessageURL_Live,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUISettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUISettings_Statics::ClassParams = {
		&USBZUISettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZUISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUISettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUISettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUISettings, 152660262);
	template<> STARBREEZE_API UClass* StaticClass<USBZUISettings>()
	{
		return USBZUISettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUISettings(Z_Construct_UClass_USBZUISettings, &USBZUISettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUISettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUISettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
