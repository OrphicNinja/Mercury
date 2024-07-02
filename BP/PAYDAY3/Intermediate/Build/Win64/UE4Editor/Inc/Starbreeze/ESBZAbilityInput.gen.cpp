// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAbilityInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAbilityInput() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAbilityInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAbilityInput, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAbilityInput"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAbilityInput>()
	{
		return ESBZAbilityInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAbilityInput(ESBZAbilityInput_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAbilityInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAbilityInput_Hash() { return 1211440165U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAbilityInput"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAbilityInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAbilityInput::None", (int64)ESBZAbilityInput::None },
				{ "ESBZAbilityInput::Jump", (int64)ESBZAbilityInput::Jump },
				{ "ESBZAbilityInput::Slide", (int64)ESBZAbilityInput::Slide },
				{ "ESBZAbilityInput::Crouch", (int64)ESBZAbilityInput::Crouch },
				{ "ESBZAbilityInput::Run", (int64)ESBZAbilityInput::Run },
				{ "ESBZAbilityInput::Targeting", (int64)ESBZAbilityInput::Targeting },
				{ "ESBZAbilityInput::Fire", (int64)ESBZAbilityInput::Fire },
				{ "ESBZAbilityInput::EquipPrimaryWeapon", (int64)ESBZAbilityInput::EquipPrimaryWeapon },
				{ "ESBZAbilityInput::EquipSecondaryWeapon", (int64)ESBZAbilityInput::EquipSecondaryWeapon },
				{ "ESBZAbilityInput::Interact", (int64)ESBZAbilityInput::Interact },
				{ "ESBZAbilityInput::Reload", (int64)ESBZAbilityInput::Reload },
				{ "ESBZAbilityInput::EquipNextWeapon", (int64)ESBZAbilityInput::EquipNextWeapon },
				{ "ESBZAbilityInput::EquipPreviousWeapon", (int64)ESBZAbilityInput::EquipPreviousWeapon },
				{ "ESBZAbilityInput::ThrowItem", (int64)ESBZAbilityInput::ThrowItem },
				{ "ESBZAbilityInput::ThrowBag", (int64)ESBZAbilityInput::ThrowBag },
				{ "ESBZAbilityInput::Traverse", (int64)ESBZAbilityInput::Traverse },
				{ "ESBZAbilityInput::Melee", (int64)ESBZAbilityInput::Melee },
				{ "ESBZAbilityInput::MaskOn", (int64)ESBZAbilityInput::MaskOn },
				{ "ESBZAbilityInput::PlaceItem", (int64)ESBZAbilityInput::PlaceItem },
				{ "ESBZAbilityInput::EquipNextGadget", (int64)ESBZAbilityInput::EquipNextGadget },
				{ "ESBZAbilityInput::PrimaryTool", (int64)ESBZAbilityInput::PrimaryTool },
				{ "ESBZAbilityInput::PlaceableTool", (int64)ESBZAbilityInput::PlaceableTool },
				{ "ESBZAbilityInput::ToolSkill", (int64)ESBZAbilityInput::ToolSkill },
				{ "ESBZAbilityInput::Shout", (int64)ESBZAbilityInput::Shout },
				{ "ESBZAbilityInput::ShoveHumanShield", (int64)ESBZAbilityInput::ShoveHumanShield },
				{ "ESBZAbilityInput::Tackle", (int64)ESBZAbilityInput::Tackle },
				{ "ESBZAbilityInput::ToolEquip", (int64)ESBZAbilityInput::ToolEquip },
				{ "ESBZAbilityInput::ToolUnequip", (int64)ESBZAbilityInput::ToolUnequip },
				{ "ESBZAbilityInput::ToolActivate", (int64)ESBZAbilityInput::ToolActivate },
				{ "ESBZAbilityInput::ToolInteractAlt", (int64)ESBZAbilityInput::ToolInteractAlt },
				{ "ESBZAbilityInput::ToolInteract1", (int64)ESBZAbilityInput::ToolInteract1 },
				{ "ESBZAbilityInput::ToolInteract2", (int64)ESBZAbilityInput::ToolInteract2 },
				{ "ESBZAbilityInput::ToolNavUp", (int64)ESBZAbilityInput::ToolNavUp },
				{ "ESBZAbilityInput::ToolNavDown", (int64)ESBZAbilityInput::ToolNavDown },
				{ "ESBZAbilityInput::ToolNavLeft", (int64)ESBZAbilityInput::ToolNavLeft },
				{ "ESBZAbilityInput::ToolNavRight", (int64)ESBZAbilityInput::ToolNavRight },
				{ "ESBZAbilityInput::RequestOverkillWeapon", (int64)ESBZAbilityInput::RequestOverkillWeapon },
				{ "ESBZAbilityInput::AnticipateExplosion", (int64)ESBZAbilityInput::AnticipateExplosion },
				{ "ESBZAbilityInput::MAX", (int64)ESBZAbilityInput::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnticipateExplosion.Name", "ESBZAbilityInput::AnticipateExplosion" },
				{ "BlueprintType", "true" },
				{ "Crouch.Name", "ESBZAbilityInput::Crouch" },
				{ "EquipNextGadget.Name", "ESBZAbilityInput::EquipNextGadget" },
				{ "EquipNextWeapon.Name", "ESBZAbilityInput::EquipNextWeapon" },
				{ "EquipPreviousWeapon.Name", "ESBZAbilityInput::EquipPreviousWeapon" },
				{ "EquipPrimaryWeapon.Name", "ESBZAbilityInput::EquipPrimaryWeapon" },
				{ "EquipSecondaryWeapon.Name", "ESBZAbilityInput::EquipSecondaryWeapon" },
				{ "Fire.Name", "ESBZAbilityInput::Fire" },
				{ "Interact.Name", "ESBZAbilityInput::Interact" },
				{ "Jump.Name", "ESBZAbilityInput::Jump" },
				{ "MaskOn.Name", "ESBZAbilityInput::MaskOn" },
				{ "MAX.Name", "ESBZAbilityInput::MAX" },
				{ "Melee.Name", "ESBZAbilityInput::Melee" },
				{ "ModuleRelativePath", "Public/ESBZAbilityInput.h" },
				{ "None.Name", "ESBZAbilityInput::None" },
				{ "PlaceableTool.Name", "ESBZAbilityInput::PlaceableTool" },
				{ "PlaceItem.Name", "ESBZAbilityInput::PlaceItem" },
				{ "PrimaryTool.Name", "ESBZAbilityInput::PrimaryTool" },
				{ "Reload.Name", "ESBZAbilityInput::Reload" },
				{ "RequestOverkillWeapon.Name", "ESBZAbilityInput::RequestOverkillWeapon" },
				{ "Run.Name", "ESBZAbilityInput::Run" },
				{ "Shout.Name", "ESBZAbilityInput::Shout" },
				{ "ShoveHumanShield.Name", "ESBZAbilityInput::ShoveHumanShield" },
				{ "Slide.Name", "ESBZAbilityInput::Slide" },
				{ "Tackle.Name", "ESBZAbilityInput::Tackle" },
				{ "Targeting.Name", "ESBZAbilityInput::Targeting" },
				{ "ThrowBag.Name", "ESBZAbilityInput::ThrowBag" },
				{ "ThrowItem.Name", "ESBZAbilityInput::ThrowItem" },
				{ "ToolActivate.Name", "ESBZAbilityInput::ToolActivate" },
				{ "ToolEquip.Name", "ESBZAbilityInput::ToolEquip" },
				{ "ToolInteract1.Name", "ESBZAbilityInput::ToolInteract1" },
				{ "ToolInteract2.Name", "ESBZAbilityInput::ToolInteract2" },
				{ "ToolInteractAlt.Name", "ESBZAbilityInput::ToolInteractAlt" },
				{ "ToolNavDown.Name", "ESBZAbilityInput::ToolNavDown" },
				{ "ToolNavLeft.Name", "ESBZAbilityInput::ToolNavLeft" },
				{ "ToolNavRight.Name", "ESBZAbilityInput::ToolNavRight" },
				{ "ToolNavUp.Name", "ESBZAbilityInput::ToolNavUp" },
				{ "ToolSkill.Name", "ESBZAbilityInput::ToolSkill" },
				{ "ToolUnequip.Name", "ESBZAbilityInput::ToolUnequip" },
				{ "Traverse.Name", "ESBZAbilityInput::Traverse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAbilityInput",
				"ESBZAbilityInput",
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
