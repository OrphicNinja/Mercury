// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSessionSettingsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSessionSettingsManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSettingsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionSettingsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionSettings_NoRegister();
// End Cross Module References
	void USBZOnlineSessionSettingsManager::StaticRegisterNativesUSBZOnlineSessionSettingsManager()
	{
	}
	UClass* Z_Construct_UClass_USBZOnlineSessionSettingsManager_NoRegister()
	{
		return USBZOnlineSessionSettingsManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartySessionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameSessionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSessionSettingsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSettingsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_PartySessionSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSettingsManager" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSettingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_PartySessionSettings = { "PartySessionSettings", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSettingsManager, PartySessionSettings), Z_Construct_UClass_USBZSessionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_PartySessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_PartySessionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_GameSessionSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionSettingsManager" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionSettingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_GameSessionSettings = { "GameSessionSettings", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionSettingsManager, GameSessionSettings), Z_Construct_UClass_USBZSessionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_GameSessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_GameSessionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_PartySessionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::NewProp_GameSessionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSessionSettingsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::ClassParams = {
		&USBZOnlineSessionSettingsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSessionSettingsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSessionSettingsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSessionSettingsManager, 205718286);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSessionSettingsManager>()
	{
		return USBZOnlineSessionSettingsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSessionSettingsManager(Z_Construct_UClass_USBZOnlineSessionSettingsManager, &USBZOnlineSessionSettingsManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSessionSettingsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSessionSettingsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
