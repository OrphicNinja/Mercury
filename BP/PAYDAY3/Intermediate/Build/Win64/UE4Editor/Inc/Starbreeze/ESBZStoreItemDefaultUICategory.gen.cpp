// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZStoreItemDefaultUICategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZStoreItemDefaultUICategory() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZStoreItemDefaultUICategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZStoreItemDefaultUICategory"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZStoreItemDefaultUICategory>()
	{
		return ESBZStoreItemDefaultUICategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZStoreItemDefaultUICategory(ESBZStoreItemDefaultUICategory_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZStoreItemDefaultUICategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory_Hash() { return 2673177539U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZStoreItemDefaultUICategory"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZStoreItemDefaultUICategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZStoreItemDefaultUICategory::None", (int64)ESBZStoreItemDefaultUICategory::None },
				{ "ESBZStoreItemDefaultUICategory::PayDayCredits", (int64)ESBZStoreItemDefaultUICategory::PayDayCredits },
				{ "ESBZStoreItemDefaultUICategory::Bundle", (int64)ESBZStoreItemDefaultUICategory::Bundle },
				{ "ESBZStoreItemDefaultUICategory::PremiumPresetWeapon", (int64)ESBZStoreItemDefaultUICategory::PremiumPresetWeapon },
				{ "ESBZStoreItemDefaultUICategory::PremiumMask", (int64)ESBZStoreItemDefaultUICategory::PremiumMask },
				{ "ESBZStoreItemDefaultUICategory::PremiumSuit", (int64)ESBZStoreItemDefaultUICategory::PremiumSuit },
				{ "ESBZStoreItemDefaultUICategory::Weapon", (int64)ESBZStoreItemDefaultUICategory::Weapon },
				{ "ESBZStoreItemDefaultUICategory::PresetWeapon", (int64)ESBZStoreItemDefaultUICategory::PresetWeapon },
				{ "ESBZStoreItemDefaultUICategory::WeaponCharm", (int64)ESBZStoreItemDefaultUICategory::WeaponCharm },
				{ "ESBZStoreItemDefaultUICategory::WeaponPattern", (int64)ESBZStoreItemDefaultUICategory::WeaponPattern },
				{ "ESBZStoreItemDefaultUICategory::WeaponMaterial", (int64)ESBZStoreItemDefaultUICategory::WeaponMaterial },
				{ "ESBZStoreItemDefaultUICategory::WeaponSticker", (int64)ESBZStoreItemDefaultUICategory::WeaponSticker },
				{ "ESBZStoreItemDefaultUICategory::WeaponSlot", (int64)ESBZStoreItemDefaultUICategory::WeaponSlot },
				{ "ESBZStoreItemDefaultUICategory::SprayPaintCans", (int64)ESBZStoreItemDefaultUICategory::SprayPaintCans },
				{ "ESBZStoreItemDefaultUICategory::PreplanningAsset", (int64)ESBZStoreItemDefaultUICategory::PreplanningAsset },
				{ "ESBZStoreItemDefaultUICategory::GloveInventorySlot", (int64)ESBZStoreItemDefaultUICategory::GloveInventorySlot },
				{ "ESBZStoreItemDefaultUICategory::Glove", (int64)ESBZStoreItemDefaultUICategory::Glove },
				{ "ESBZStoreItemDefaultUICategory::Watch", (int64)ESBZStoreItemDefaultUICategory::Watch },
				{ "ESBZStoreItemDefaultUICategory::Suit", (int64)ESBZStoreItemDefaultUICategory::Suit },
				{ "ESBZStoreItemDefaultUICategory::SuitInventorySlot", (int64)ESBZStoreItemDefaultUICategory::SuitInventorySlot },
				{ "ESBZStoreItemDefaultUICategory::SuitBase", (int64)ESBZStoreItemDefaultUICategory::SuitBase },
				{ "ESBZStoreItemDefaultUICategory::SuitMaterial", (int64)ESBZStoreItemDefaultUICategory::SuitMaterial },
				{ "ESBZStoreItemDefaultUICategory::SuitPattern", (int64)ESBZStoreItemDefaultUICategory::SuitPattern },
				{ "ESBZStoreItemDefaultUICategory::MaskPreset", (int64)ESBZStoreItemDefaultUICategory::MaskPreset },
				{ "ESBZStoreItemDefaultUICategory::MaskPreconfig", (int64)ESBZStoreItemDefaultUICategory::MaskPreconfig },
				{ "ESBZStoreItemDefaultUICategory::MaskInventorySlot", (int64)ESBZStoreItemDefaultUICategory::MaskInventorySlot },
				{ "ESBZStoreItemDefaultUICategory::MaskMould", (int64)ESBZStoreItemDefaultUICategory::MaskMould },
				{ "ESBZStoreItemDefaultUICategory::MaskPattern", (int64)ESBZStoreItemDefaultUICategory::MaskPattern },
				{ "ESBZStoreItemDefaultUICategory::MaskVFX", (int64)ESBZStoreItemDefaultUICategory::MaskVFX },
				{ "ESBZStoreItemDefaultUICategory::LoadoutSlot", (int64)ESBZStoreItemDefaultUICategory::LoadoutSlot },
				{ "ESBZStoreItemDefaultUICategory::Coin", (int64)ESBZStoreItemDefaultUICategory::Coin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bundle.Name", "ESBZStoreItemDefaultUICategory::Bundle" },
				{ "Coin.Name", "ESBZStoreItemDefaultUICategory::Coin" },
				{ "Glove.Name", "ESBZStoreItemDefaultUICategory::Glove" },
				{ "GloveInventorySlot.Name", "ESBZStoreItemDefaultUICategory::GloveInventorySlot" },
				{ "LoadoutSlot.Name", "ESBZStoreItemDefaultUICategory::LoadoutSlot" },
				{ "MaskInventorySlot.Name", "ESBZStoreItemDefaultUICategory::MaskInventorySlot" },
				{ "MaskMould.Name", "ESBZStoreItemDefaultUICategory::MaskMould" },
				{ "MaskPattern.Name", "ESBZStoreItemDefaultUICategory::MaskPattern" },
				{ "MaskPreconfig.Name", "ESBZStoreItemDefaultUICategory::MaskPreconfig" },
				{ "MaskPreset.Name", "ESBZStoreItemDefaultUICategory::MaskPreset" },
				{ "MaskVFX.Name", "ESBZStoreItemDefaultUICategory::MaskVFX" },
				{ "ModuleRelativePath", "Public/ESBZStoreItemDefaultUICategory.h" },
				{ "None.Name", "ESBZStoreItemDefaultUICategory::None" },
				{ "PayDayCredits.Name", "ESBZStoreItemDefaultUICategory::PayDayCredits" },
				{ "PremiumMask.Name", "ESBZStoreItemDefaultUICategory::PremiumMask" },
				{ "PremiumPresetWeapon.Name", "ESBZStoreItemDefaultUICategory::PremiumPresetWeapon" },
				{ "PremiumSuit.Name", "ESBZStoreItemDefaultUICategory::PremiumSuit" },
				{ "PreplanningAsset.Name", "ESBZStoreItemDefaultUICategory::PreplanningAsset" },
				{ "PresetWeapon.Name", "ESBZStoreItemDefaultUICategory::PresetWeapon" },
				{ "SprayPaintCans.Name", "ESBZStoreItemDefaultUICategory::SprayPaintCans" },
				{ "Suit.Name", "ESBZStoreItemDefaultUICategory::Suit" },
				{ "SuitBase.Name", "ESBZStoreItemDefaultUICategory::SuitBase" },
				{ "SuitInventorySlot.Name", "ESBZStoreItemDefaultUICategory::SuitInventorySlot" },
				{ "SuitMaterial.Name", "ESBZStoreItemDefaultUICategory::SuitMaterial" },
				{ "SuitPattern.Name", "ESBZStoreItemDefaultUICategory::SuitPattern" },
				{ "Watch.Name", "ESBZStoreItemDefaultUICategory::Watch" },
				{ "Weapon.Name", "ESBZStoreItemDefaultUICategory::Weapon" },
				{ "WeaponCharm.Name", "ESBZStoreItemDefaultUICategory::WeaponCharm" },
				{ "WeaponMaterial.Name", "ESBZStoreItemDefaultUICategory::WeaponMaterial" },
				{ "WeaponPattern.Name", "ESBZStoreItemDefaultUICategory::WeaponPattern" },
				{ "WeaponSlot.Name", "ESBZStoreItemDefaultUICategory::WeaponSlot" },
				{ "WeaponSticker.Name", "ESBZStoreItemDefaultUICategory::WeaponSticker" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZStoreItemDefaultUICategory",
				"ESBZStoreItemDefaultUICategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
