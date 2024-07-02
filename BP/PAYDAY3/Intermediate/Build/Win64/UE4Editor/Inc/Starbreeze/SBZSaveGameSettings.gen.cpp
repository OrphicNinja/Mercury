// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSaveGameSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSaveGameSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveGameSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveGameSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister();
// End Cross Module References
	void USBZSaveGameSettings::StaticRegisterNativesUSBZSaveGameSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZSaveGameSettings_NoRegister()
	{
		return USBZSaveGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZSaveGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProgressionSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultProgressionSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProgressionSaveChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultProgressionSaveChallenges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSaveGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGameSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSaveGameSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSaveGameSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveGameSettings" },
		{ "ModuleRelativePath", "Public/SBZSaveGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveGame = { "DefaultProgressionSaveGame", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveGameSettings, DefaultProgressionSaveGame), Z_Construct_UClass_USBZProgressionSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveGameSettings" },
		{ "ModuleRelativePath", "Public/SBZSaveGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveChallenges = { "DefaultProgressionSaveChallenges", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveGameSettings, DefaultProgressionSaveChallenges), Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSaveGameSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveGameSettings_Statics::NewProp_DefaultProgressionSaveChallenges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSaveGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSaveGameSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSaveGameSettings_Statics::ClassParams = {
		&USBZSaveGameSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSaveGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGameSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSaveGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSaveGameSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSaveGameSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSaveGameSettings, 2725271176);
	template<> STARBREEZE_API UClass* StaticClass<USBZSaveGameSettings>()
	{
		return USBZSaveGameSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSaveGameSettings(Z_Construct_UClass_USBZSaveGameSettings, &USBZSaveGameSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSaveGameSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSaveGameSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
