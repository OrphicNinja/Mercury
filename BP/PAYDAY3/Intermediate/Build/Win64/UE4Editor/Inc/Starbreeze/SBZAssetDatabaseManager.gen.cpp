// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssetDatabaseManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssetDatabaseManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDataContainer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVendorData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPayDayCreditData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManagerInterface_NoRegister();
// End Cross Module References
	void USBZAssetDatabaseManager::StaticRegisterNativesUSBZAssetDatabaseManager()
	{
	}
	UClass* Z_Construct_UClass_USBZAssetDatabaseManager_NoRegister()
	{
		return USBZAssetDatabaseManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssetDatabaseManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetItemSkuMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetItemSkuMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetItemSkuMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AssetItemSkuMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetItemIdMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetItemIdMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetItemIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AssetItemIdMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillLines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreplanningAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vendors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vendors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vendors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizableMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizableMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizableSuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizableSuit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPrimaryWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPrimaryWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPrimaryWeapons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSecondaryWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSecondaryWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllSecondaryWeapons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllOverkillWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllOverkillWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllOverkillWeapons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWeaponCharms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWeaponCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWeaponCharms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWeaponStickers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWeaponStickers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWeaponStickers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPlayerCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayerCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPlayerCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPayDayCredits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPayDayCredits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPayDayCredits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssetDatabaseManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAssetDatabaseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_ValueProp = { "AssetItemSkuMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZItemDataContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_Key_KeyProp = { "AssetItemSkuMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap = { "AssetItemSkuMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AssetItemSkuMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_ValueProp = { "AssetItemIdMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZItemDataContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_Key_KeyProp = { "AssetItemIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap = { "AssetItemIdMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AssetItemIdMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines_Inner = { "SkillLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines = { "SkillLines", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, SkillLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets_Inner = { "PreplanningAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets = { "PreplanningAssets", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, PreplanningAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors_Inner = { "Vendors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZVendorData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors = { "Vendors", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, Vendors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableMask = { "CustomizableMask", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, CustomizableMask), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableSuit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableSuit = { "CustomizableSuit", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, CustomizableSuit), Z_Construct_UClass_USBZSuitData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableSuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableSuit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons_Inner = { "AllPrimaryWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons = { "AllPrimaryWeapons", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllPrimaryWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons_Inner = { "AllSecondaryWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons = { "AllSecondaryWeapons", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllSecondaryWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons_Inner = { "AllOverkillWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons = { "AllOverkillWeapons", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllOverkillWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms_Inner = { "AllWeaponCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponCharmData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms = { "AllWeaponCharms", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllWeaponCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers_Inner = { "AllWeaponStickers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponStickerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers = { "AllWeaponStickers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllWeaponStickers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters_Inner = { "AllPlayerCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters = { "AllPlayerCharacters", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllPlayerCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits_Inner = { "AllPayDayCredits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPayDayCreditData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssetDatabaseManager" },
		{ "ModuleRelativePath", "Public/SBZAssetDatabaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits = { "AllPayDayCredits", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssetDatabaseManager, AllPayDayCredits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAssetDatabaseManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemSkuMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AssetItemIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_SkillLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_PreplanningAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_Vendors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_CustomizableSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPrimaryWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllSecondaryWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllOverkillWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllWeaponStickers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPlayerCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssetDatabaseManager_Statics::NewProp_AllPayDayCredits,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAssetDatabaseManagerInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAssetDatabaseManager, ISBZAssetDatabaseManagerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssetDatabaseManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAssetDatabaseManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssetDatabaseManager_Statics::ClassParams = {
		&USBZAssetDatabaseManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAssetDatabaseManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssetDatabaseManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssetDatabaseManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssetDatabaseManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssetDatabaseManager, 941190189);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssetDatabaseManager>()
	{
		return USBZAssetDatabaseManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssetDatabaseManager(Z_Construct_UClass_USBZAssetDatabaseManager, &USBZAssetDatabaseManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssetDatabaseManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssetDatabaseManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
