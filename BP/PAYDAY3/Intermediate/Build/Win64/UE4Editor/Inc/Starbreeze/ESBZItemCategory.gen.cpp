// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZItemCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZItemCategory() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCategory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZItemCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZItemCategory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZItemCategory"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemCategory>()
	{
		return ESBZItemCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZItemCategory(ESBZItemCategory_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZItemCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZItemCategory_Hash() { return 3402289020U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZItemCategory"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZItemCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZItemCategory::PrimaryWeapon", (int64)ESBZItemCategory::PrimaryWeapon },
				{ "ESBZItemCategory::SecondaryWeapon", (int64)ESBZItemCategory::SecondaryWeapon },
				{ "ESBZItemCategory::OverkillWeapon", (int64)ESBZItemCategory::OverkillWeapon },
				{ "ESBZItemCategory::Throwable", (int64)ESBZItemCategory::Throwable },
				{ "ESBZItemCategory::Mask", (int64)ESBZItemCategory::Mask },
				{ "ESBZItemCategory::Tool", (int64)ESBZItemCategory::Tool },
				{ "ESBZItemCategory::Placeable", (int64)ESBZItemCategory::Placeable },
				{ "ESBZItemCategory::SkillLine", (int64)ESBZItemCategory::SkillLine },
				{ "ESBZItemCategory::PreplanningAsset", (int64)ESBZItemCategory::PreplanningAsset },
				{ "ESBZItemCategory::PrimaryWeaponSlot", (int64)ESBZItemCategory::PrimaryWeaponSlot },
				{ "ESBZItemCategory::SecondaryWeaponSlot", (int64)ESBZItemCategory::SecondaryWeaponSlot },
				{ "ESBZItemCategory::Armor", (int64)ESBZItemCategory::Armor },
				{ "ESBZItemCategory::PrimaryWeaponPreset", (int64)ESBZItemCategory::PrimaryWeaponPreset },
				{ "ESBZItemCategory::SecondaryWeaponPreset", (int64)ESBZItemCategory::SecondaryWeaponPreset },
				{ "ESBZItemCategory::LoadoutSlot", (int64)ESBZItemCategory::LoadoutSlot },
				{ "ESBZItemCategory::PlayerCharacter", (int64)ESBZItemCategory::PlayerCharacter },
				{ "ESBZItemCategory::MaskInventorySlot", (int64)ESBZItemCategory::MaskInventorySlot },
				{ "ESBZItemCategory::SuitInventorySlot", (int64)ESBZItemCategory::SuitInventorySlot },
				{ "ESBZItemCategory::GloveInventorySlot", (int64)ESBZItemCategory::GloveInventorySlot },
				{ "ESBZItemCategory::SprayCan", (int64)ESBZItemCategory::SprayCan },
				{ "ESBZItemCategory::WeaponCharm", (int64)ESBZItemCategory::WeaponCharm },
				{ "ESBZItemCategory::WeaponPattern", (int64)ESBZItemCategory::WeaponPattern },
				{ "ESBZItemCategory::WeaponSticker", (int64)ESBZItemCategory::WeaponSticker },
				{ "ESBZItemCategory::WeaponWearAndTear", (int64)ESBZItemCategory::WeaponWearAndTear },
				{ "ESBZItemCategory::SuitPreset", (int64)ESBZItemCategory::SuitPreset },
				{ "ESBZItemCategory::SuitMaterial", (int64)ESBZItemCategory::SuitMaterial },
				{ "ESBZItemCategory::SuitPattern", (int64)ESBZItemCategory::SuitPattern },
				{ "ESBZItemCategory::Watch", (int64)ESBZItemCategory::Watch },
				{ "ESBZItemCategory::Glove", (int64)ESBZItemCategory::Glove },
				{ "ESBZItemCategory::Suit", (int64)ESBZItemCategory::Suit },
				{ "ESBZItemCategory::SuitBase", (int64)ESBZItemCategory::SuitBase },
				{ "ESBZItemCategory::MaskMould", (int64)ESBZItemCategory::MaskMould },
				{ "ESBZItemCategory::MaskPreset", (int64)ESBZItemCategory::MaskPreset },
				{ "ESBZItemCategory::MaskPreconfig", (int64)ESBZItemCategory::MaskPreconfig },
				{ "ESBZItemCategory::MaskPattern", (int64)ESBZItemCategory::MaskPattern },
				{ "ESBZItemCategory::MaskMaterial", (int64)ESBZItemCategory::MaskMaterial },
				{ "ESBZItemCategory::MaskVFX", (int64)ESBZItemCategory::MaskVFX },
				{ "ESBZItemCategory::Coin", (int64)ESBZItemCategory::Coin },
				{ "ESBZItemCategory::ItemBundle", (int64)ESBZItemCategory::ItemBundle },
				{ "ESBZItemCategory::PayDayCredits", (int64)ESBZItemCategory::PayDayCredits },
				{ "ESBZItemCategory::Heist", (int64)ESBZItemCategory::Heist },
				{ "ESBZItemCategory::VendorPermission", (int64)ESBZItemCategory::VendorPermission },
				{ "ESBZItemCategory::WeaponPartAttachment", (int64)ESBZItemCategory::WeaponPartAttachment },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Armor.Name", "ESBZItemCategory::Armor" },
				{ "BlueprintType", "true" },
				{ "Coin.Name", "ESBZItemCategory::Coin" },
				{ "Glove.Name", "ESBZItemCategory::Glove" },
				{ "GloveInventorySlot.Name", "ESBZItemCategory::GloveInventorySlot" },
				{ "Heist.Name", "ESBZItemCategory::Heist" },
				{ "ItemBundle.Name", "ESBZItemCategory::ItemBundle" },
				{ "LoadoutSlot.Name", "ESBZItemCategory::LoadoutSlot" },
				{ "Mask.Name", "ESBZItemCategory::Mask" },
				{ "MaskInventorySlot.Name", "ESBZItemCategory::MaskInventorySlot" },
				{ "MaskMaterial.Name", "ESBZItemCategory::MaskMaterial" },
				{ "MaskMould.Name", "ESBZItemCategory::MaskMould" },
				{ "MaskPattern.Name", "ESBZItemCategory::MaskPattern" },
				{ "MaskPreconfig.Name", "ESBZItemCategory::MaskPreconfig" },
				{ "MaskPreset.Name", "ESBZItemCategory::MaskPreset" },
				{ "MaskVFX.Name", "ESBZItemCategory::MaskVFX" },
				{ "ModuleRelativePath", "Public/ESBZItemCategory.h" },
				{ "OverkillWeapon.Name", "ESBZItemCategory::OverkillWeapon" },
				{ "PayDayCredits.Name", "ESBZItemCategory::PayDayCredits" },
				{ "Placeable.Name", "ESBZItemCategory::Placeable" },
				{ "PlayerCharacter.Name", "ESBZItemCategory::PlayerCharacter" },
				{ "PreplanningAsset.Name", "ESBZItemCategory::PreplanningAsset" },
				{ "PrimaryWeapon.Name", "ESBZItemCategory::PrimaryWeapon" },
				{ "PrimaryWeaponPreset.Name", "ESBZItemCategory::PrimaryWeaponPreset" },
				{ "PrimaryWeaponSlot.Name", "ESBZItemCategory::PrimaryWeaponSlot" },
				{ "SecondaryWeapon.Name", "ESBZItemCategory::SecondaryWeapon" },
				{ "SecondaryWeaponPreset.Name", "ESBZItemCategory::SecondaryWeaponPreset" },
				{ "SecondaryWeaponSlot.Name", "ESBZItemCategory::SecondaryWeaponSlot" },
				{ "SkillLine.Name", "ESBZItemCategory::SkillLine" },
				{ "SprayCan.Name", "ESBZItemCategory::SprayCan" },
				{ "Suit.Name", "ESBZItemCategory::Suit" },
				{ "SuitBase.Name", "ESBZItemCategory::SuitBase" },
				{ "SuitInventorySlot.Name", "ESBZItemCategory::SuitInventorySlot" },
				{ "SuitMaterial.Name", "ESBZItemCategory::SuitMaterial" },
				{ "SuitPattern.Name", "ESBZItemCategory::SuitPattern" },
				{ "SuitPreset.Name", "ESBZItemCategory::SuitPreset" },
				{ "Throwable.Name", "ESBZItemCategory::Throwable" },
				{ "Tool.Name", "ESBZItemCategory::Tool" },
				{ "VendorPermission.Name", "ESBZItemCategory::VendorPermission" },
				{ "Watch.Name", "ESBZItemCategory::Watch" },
				{ "WeaponCharm.Name", "ESBZItemCategory::WeaponCharm" },
				{ "WeaponPartAttachment.Name", "ESBZItemCategory::WeaponPartAttachment" },
				{ "WeaponPattern.Name", "ESBZItemCategory::WeaponPattern" },
				{ "WeaponSticker.Name", "ESBZItemCategory::WeaponSticker" },
				{ "WeaponWearAndTear.Name", "ESBZItemCategory::WeaponWearAndTear" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZItemCategory",
				"ESBZItemCategory",
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
