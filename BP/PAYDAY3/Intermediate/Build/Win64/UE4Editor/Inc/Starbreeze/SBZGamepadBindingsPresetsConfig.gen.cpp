// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGamepadBindingsPresetsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGamepadBindingsPresetsConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsPresetsConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset();
// End Cross Module References
	void USBZGamepadBindingsPresetsConfig::StaticRegisterNativesUSBZGamepadBindingsPresetsConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_NoRegister()
	{
		return USBZGamepadBindingsPresetsConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamepadBindingsPresets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadBindingsPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GamepadBindingsPresets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGamepadBindingsPresetsConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPresetsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets_Inner = { "GamepadBindingsPresets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGamepadBindingsPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingsPresetsConfig" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsPresetsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets = { "GamepadBindingsPresets", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGamepadBindingsPresetsConfig, GamepadBindingsPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::NewProp_GamepadBindingsPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGamepadBindingsPresetsConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::ClassParams = {
		&USBZGamepadBindingsPresetsConfig::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGamepadBindingsPresetsConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGamepadBindingsPresetsConfig, 2932545940);
	template<> STARBREEZE_API UClass* StaticClass<USBZGamepadBindingsPresetsConfig>()
	{
		return USBZGamepadBindingsPresetsConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGamepadBindingsPresetsConfig(Z_Construct_UClass_USBZGamepadBindingsPresetsConfig, &USBZGamepadBindingsPresetsConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGamepadBindingsPresetsConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGamepadBindingsPresetsConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
