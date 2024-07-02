// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPopupType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPopupType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPopupType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPopupType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPopupType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPopupType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPopupType>()
	{
		return ESBZPopupType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPopupType(ESBZPopupType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPopupType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPopupType_Hash() { return 2104490801U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPopupType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPopupType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPopupType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPopupType::None", (int64)ESBZPopupType::None },
				{ "ESBZPopupType::FirstTime", (int64)ESBZPopupType::FirstTime },
				{ "ESBZPopupType::PhotoSensitivity", (int64)ESBZPopupType::PhotoSensitivity },
				{ "ESBZPopupType::GameSense", (int64)ESBZPopupType::GameSense },
				{ "ESBZPopupType::Telemetry", (int64)ESBZPopupType::Telemetry },
				{ "ESBZPopupType::Crossplay", (int64)ESBZPopupType::Crossplay },
				{ "ESBZPopupType::Tutorial", (int64)ESBZPopupType::Tutorial },
				{ "ESBZPopupType::Skills", (int64)ESBZPopupType::Skills },
				{ "ESBZPopupType::Vendors", (int64)ESBZPopupType::Vendors },
				{ "ESBZPopupType::Challenges", (int64)ESBZPopupType::Challenges },
				{ "ESBZPopupType::WeaponMods", (int64)ESBZPopupType::WeaponMods },
				{ "ESBZPopupType::WeaponCustomization", (int64)ESBZPopupType::WeaponCustomization },
				{ "ESBZPopupType::OverkillWeapon", (int64)ESBZPopupType::OverkillWeapon },
				{ "ESBZPopupType::HeistSelection", (int64)ESBZPopupType::HeistSelection },
				{ "ESBZPopupType::CharacterSelection", (int64)ESBZPopupType::CharacterSelection },
				{ "ESBZPopupType::MaskInventory", (int64)ESBZPopupType::MaskInventory },
				{ "ESBZPopupType::MaskCustomization", (int64)ESBZPopupType::MaskCustomization },
				{ "ESBZPopupType::SuitInventory", (int64)ESBZPopupType::SuitInventory },
				{ "ESBZPopupType::GloveInventory", (int64)ESBZPopupType::GloveInventory },
				{ "ESBZPopupType::LoadoutMenu", (int64)ESBZPopupType::LoadoutMenu },
				{ "ESBZPopupType::SoloMode", (int64)ESBZPopupType::SoloMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Challenges.Name", "ESBZPopupType::Challenges" },
				{ "CharacterSelection.Name", "ESBZPopupType::CharacterSelection" },
				{ "Crossplay.Name", "ESBZPopupType::Crossplay" },
				{ "FirstTime.Name", "ESBZPopupType::FirstTime" },
				{ "GameSense.Name", "ESBZPopupType::GameSense" },
				{ "GloveInventory.Name", "ESBZPopupType::GloveInventory" },
				{ "HeistSelection.Name", "ESBZPopupType::HeistSelection" },
				{ "LoadoutMenu.Name", "ESBZPopupType::LoadoutMenu" },
				{ "MaskCustomization.Name", "ESBZPopupType::MaskCustomization" },
				{ "MaskInventory.Name", "ESBZPopupType::MaskInventory" },
				{ "ModuleRelativePath", "Public/ESBZPopupType.h" },
				{ "None.Name", "ESBZPopupType::None" },
				{ "OverkillWeapon.Name", "ESBZPopupType::OverkillWeapon" },
				{ "PhotoSensitivity.Name", "ESBZPopupType::PhotoSensitivity" },
				{ "Skills.Name", "ESBZPopupType::Skills" },
				{ "SoloMode.Name", "ESBZPopupType::SoloMode" },
				{ "SuitInventory.Name", "ESBZPopupType::SuitInventory" },
				{ "Telemetry.Name", "ESBZPopupType::Telemetry" },
				{ "Tutorial.Name", "ESBZPopupType::Tutorial" },
				{ "Vendors.Name", "ESBZPopupType::Vendors" },
				{ "WeaponCustomization.Name", "ESBZPopupType::WeaponCustomization" },
				{ "WeaponMods.Name", "ESBZPopupType::WeaponMods" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPopupType",
				"ESBZPopupType",
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
