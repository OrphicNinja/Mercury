// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStoreItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStoreItemData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStoreItemData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStoreItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitBaseStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWatchStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSprayCanStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPresetStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPatternStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoinStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemBundleStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVendorPermissionStoreItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem();
// End Cross Module References
class UScriptStruct* FSBZPlayerStoreItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerStoreItemData"), sizeof(FSBZPlayerStoreItemData), Get_Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerStoreItemData>()
{
	return FSBZPlayerStoreItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerStoreItemData(FSBZPlayerStoreItemData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerStoreItemData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStoreItemData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStoreItemData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerStoreItemData>(FName(TEXT("SBZPlayerStoreItemData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStoreItemData;
	struct Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeaponMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeaponMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrimaryWeaponMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeaponMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeaponMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SecondaryWeaponMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GloveMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPresetMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPresetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SuitPresetMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitBaseMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitBaseMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitBaseMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SuitBaseMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WatchMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WatchMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WatchMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssetMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PreplanningAssetMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryInventorySlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryInventorySlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryInventorySlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrimaryInventorySlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryInventorySlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryInventorySlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInventorySlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SecondaryInventorySlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskInventorySlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskInventorySlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskInventorySlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskInventorySlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitInventorySlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitInventorySlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitInventorySlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SuitInventorySlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveInventorySlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveInventorySlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveInventorySlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GloveInventorySlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeaponPresetMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeaponPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponPresetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrimaryWeaponPresetMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeaponPresetMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeaponPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponPresetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SecondaryWeaponPresetMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutSlotMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutSlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadoutSlotMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SprayCanMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SprayCanMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SprayCanMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponCharmMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponCharmMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCharmMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponCharmMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPatternMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPatternMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPatternMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponPatternMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStickerMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponStickerMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStickerMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponStickerMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskMouldMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskMouldMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMouldMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskMouldMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPresetMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPresetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskPresetMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPreconfigMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPreconfigMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPreconfigMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskPreconfigMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPatternMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPatternMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPatternMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskPatternMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskVFXMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskVFXMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskVFXMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaskVFXMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitMaterialMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitMaterialMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitMaterialMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SuitMaterialMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPatternMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPatternMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPatternMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SuitPatternMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoinMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoinMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CoinMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBundleMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBundleMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBundleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemBundleMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HeistMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VendorPermissionMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VendorPermissionMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorPermissionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VendorPermissionMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCharacterMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCharacterMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerCharacterMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerStoreItemData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_ValueProp = { "PrimaryWeaponMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_Key_KeyProp = { "PrimaryWeaponMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap = { "PrimaryWeaponMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, PrimaryWeaponMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_ValueProp = { "SecondaryWeaponMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_Key_KeyProp = { "SecondaryWeaponMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap = { "SecondaryWeaponMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SecondaryWeaponMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_ValueProp = { "GloveMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZGloveStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_Key_KeyProp = { "GloveMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap = { "GloveMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, GloveMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_ValueProp = { "SuitPresetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_Key_KeyProp = { "SuitPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap = { "SuitPresetMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SuitPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_ValueProp = { "SuitBaseMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSuitBaseStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_Key_KeyProp = { "SuitBaseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap = { "SuitBaseMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SuitBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_ValueProp = { "WatchMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWatchStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_Key_KeyProp = { "WatchMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap = { "WatchMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, WatchMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_ValueProp = { "PreplanningAssetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_Key_KeyProp = { "PreplanningAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap = { "PreplanningAssetMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, PreplanningAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_ValueProp = { "PrimaryInventorySlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_Key_KeyProp = { "PrimaryInventorySlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap = { "PrimaryInventorySlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, PrimaryInventorySlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_ValueProp = { "SecondaryInventorySlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_Key_KeyProp = { "SecondaryInventorySlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap = { "SecondaryInventorySlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SecondaryInventorySlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_ValueProp = { "MaskInventorySlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_Key_KeyProp = { "MaskInventorySlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap = { "MaskInventorySlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskInventorySlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_ValueProp = { "SuitInventorySlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_Key_KeyProp = { "SuitInventorySlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap = { "SuitInventorySlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SuitInventorySlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_ValueProp = { "GloveInventorySlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_Key_KeyProp = { "GloveInventorySlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap = { "GloveInventorySlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, GloveInventorySlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_ValueProp = { "PrimaryWeaponPresetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_Key_KeyProp = { "PrimaryWeaponPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap = { "PrimaryWeaponPresetMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, PrimaryWeaponPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_ValueProp = { "SecondaryWeaponPresetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_Key_KeyProp = { "SecondaryWeaponPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap = { "SecondaryWeaponPresetMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SecondaryWeaponPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_ValueProp = { "LoadoutSlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_Key_KeyProp = { "LoadoutSlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap = { "LoadoutSlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, LoadoutSlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_ValueProp = { "SprayCanMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSprayCanStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_Key_KeyProp = { "SprayCanMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap = { "SprayCanMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SprayCanMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_ValueProp = { "WeaponCharmMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_Key_KeyProp = { "WeaponCharmMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap = { "WeaponCharmMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, WeaponCharmMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_ValueProp = { "WeaponPatternMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPatternStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_Key_KeyProp = { "WeaponPatternMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap = { "WeaponPatternMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, WeaponPatternMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_ValueProp = { "WeaponStickerMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_Key_KeyProp = { "WeaponStickerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap = { "WeaponStickerMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, WeaponStickerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_ValueProp = { "MaskMouldMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_Key_KeyProp = { "MaskMouldMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap = { "MaskMouldMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskMouldMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_ValueProp = { "MaskPresetMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskPresetStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_Key_KeyProp = { "MaskPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap = { "MaskPresetMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_ValueProp = { "MaskPreconfigMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_Key_KeyProp = { "MaskPreconfigMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap = { "MaskPreconfigMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskPreconfigMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_ValueProp = { "MaskPatternMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_Key_KeyProp = { "MaskPatternMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap = { "MaskPatternMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskPatternMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_ValueProp = { "MaskVFXMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_Key_KeyProp = { "MaskVFXMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap = { "MaskVFXMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, MaskVFXMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_ValueProp = { "SuitMaterialMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_Key_KeyProp = { "SuitMaterialMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap = { "SuitMaterialMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SuitMaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_ValueProp = { "SuitPatternMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSuitPatternStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_Key_KeyProp = { "SuitPatternMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap = { "SuitPatternMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, SuitPatternMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_ValueProp = { "CoinMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZCoinStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_Key_KeyProp = { "CoinMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap = { "CoinMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, CoinMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_ValueProp = { "ItemBundleMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZItemBundleStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_Key_KeyProp = { "ItemBundleMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap = { "ItemBundleMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, ItemBundleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_ValueProp = { "HeistMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHeistStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_Key_KeyProp = { "HeistMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap = { "HeistMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, HeistMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_ValueProp = { "VendorPermissionMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZVendorPermissionStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_Key_KeyProp = { "VendorPermissionMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap = { "VendorPermissionMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, VendorPermissionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_ValueProp = { "PlayerCharacterMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_Key_KeyProp = { "PlayerCharacterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStoreItemData" },
		{ "ModuleRelativePath", "Public/SBZPlayerStoreItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap = { "PlayerCharacterMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStoreItemData, PlayerCharacterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPresetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitBaseMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WatchMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PreplanningAssetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryInventorySlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryInventorySlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskInventorySlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitInventorySlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_GloveInventorySlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PrimaryWeaponPresetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SecondaryWeaponPresetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_LoadoutSlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SprayCanMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponCharmMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponPatternMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_WeaponStickerMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskMouldMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPresetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPreconfigMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskPatternMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_MaskVFXMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitMaterialMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_SuitPatternMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_CoinMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_ItemBundleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_HeistMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_VendorPermissionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::NewProp_PlayerCharacterMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerStoreItemData",
		sizeof(FSBZPlayerStoreItemData),
		alignof(FSBZPlayerStoreItemData),
		Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStoreItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerStoreItemData"), sizeof(FSBZPlayerStoreItemData), Get_Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStoreItemData_Hash() { return 507522262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
