// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNegotiationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNegotiationSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNegotiationSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNegotiationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings();
// End Cross Module References
	void USBZNegotiationSettings::StaticRegisterNativesUSBZNegotiationSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZNegotiationSettings_NoRegister()
	{
		return USBZNegotiationSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZNegotiationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultySettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifficultySettingsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNegotiationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNegotiationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNegotiationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNegotiationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNegotiationSettings_Statics::NewProp_DifficultySettingsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNegotiationSettings" },
		{ "ModuleRelativePath", "Public/SBZNegotiationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNegotiationSettings_Statics::NewProp_DifficultySettingsArray = { "DifficultySettingsArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DifficultySettingsArray, USBZNegotiationSettings), STRUCT_OFFSET(USBZNegotiationSettings, DifficultySettingsArray), Z_Construct_UScriptStruct_FSBZNegotiationDifficultySettings, METADATA_PARAMS(Z_Construct_UClass_USBZNegotiationSettings_Statics::NewProp_DifficultySettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNegotiationSettings_Statics::NewProp_DifficultySettingsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNegotiationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNegotiationSettings_Statics::NewProp_DifficultySettingsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNegotiationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNegotiationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNegotiationSettings_Statics::ClassParams = {
		&USBZNegotiationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZNegotiationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNegotiationSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNegotiationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNegotiationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNegotiationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNegotiationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNegotiationSettings, 3758925724);
	template<> STARBREEZE_API UClass* StaticClass<USBZNegotiationSettings>()
	{
		return USBZNegotiationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNegotiationSettings(Z_Construct_UClass_USBZNegotiationSettings, &USBZNegotiationSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNegotiationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNegotiationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
