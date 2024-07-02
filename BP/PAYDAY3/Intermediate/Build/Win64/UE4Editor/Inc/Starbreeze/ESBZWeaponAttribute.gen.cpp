// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZWeaponAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZWeaponAttribute() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZWeaponAttribute_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZWeaponAttribute"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZWeaponAttribute>()
	{
		return ESBZWeaponAttribute_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZWeaponAttribute(ESBZWeaponAttribute_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZWeaponAttribute"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute_Hash() { return 1510395341U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZWeaponAttribute"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZWeaponAttribute::NONE", (int64)ESBZWeaponAttribute::NONE },
				{ "ESBZWeaponAttribute::VerticalRecoil", (int64)ESBZWeaponAttribute::VerticalRecoil },
				{ "ESBZWeaponAttribute::HorizontalRecoil", (int64)ESBZWeaponAttribute::HorizontalRecoil },
				{ "ESBZWeaponAttribute::InitialRecoil", (int64)ESBZWeaponAttribute::InitialRecoil },
				{ "ESBZWeaponAttribute::OverallReloadPlayRate", (int64)ESBZWeaponAttribute::OverallReloadPlayRate },
				{ "ESBZWeaponAttribute::EquipPlayRate", (int64)ESBZWeaponAttribute::EquipPlayRate },
				{ "ESBZWeaponAttribute::UnequipPlayRate", (int64)ESBZWeaponAttribute::UnequipPlayRate },
				{ "ESBZWeaponAttribute::SprintExitPlayRate", (int64)ESBZWeaponAttribute::SprintExitPlayRate },
				{ "ESBZWeaponAttribute::DamageDistance", (int64)ESBZWeaponAttribute::DamageDistance },
				{ "ESBZWeaponAttribute::CriticalDamageMultiplierDistance", (int64)ESBZWeaponAttribute::CriticalDamageMultiplierDistance },
				{ "ESBZWeaponAttribute::TargetingTransitionTime", (int64)ESBZWeaponAttribute::TargetingTransitionTime },
				{ "ESBZWeaponAttribute::ArmorPenetration", (int64)ESBZWeaponAttribute::ArmorPenetration },
				{ "ESBZWeaponAttribute::HipfireSpread", (int64)ESBZWeaponAttribute::HipfireSpread },
				{ "ESBZWeaponAttribute::TargetingSpread", (int64)ESBZWeaponAttribute::TargetingSpread },
				{ "ESBZWeaponAttribute::SpreadIncrement", (int64)ESBZWeaponAttribute::SpreadIncrement },
				{ "ESBZWeaponAttribute::VerticalSpreadRadius", (int64)ESBZWeaponAttribute::VerticalSpreadRadius },
				{ "ESBZWeaponAttribute::HorizontalSpreadRadius", (int64)ESBZWeaponAttribute::HorizontalSpreadRadius },
				{ "ESBZWeaponAttribute::VerticalGunkick", (int64)ESBZWeaponAttribute::VerticalGunkick },
				{ "ESBZWeaponAttribute::HorizontalGunkick", (int64)ESBZWeaponAttribute::HorizontalGunkick },
				{ "ESBZWeaponAttribute::ScreenShakeAmplitude", (int64)ESBZWeaponAttribute::ScreenShakeAmplitude },
				{ "ESBZWeaponAttribute::OverallPelletDeviation", (int64)ESBZWeaponAttribute::OverallPelletDeviation },
				{ "ESBZWeaponAttribute::ViewKickRecoverySpeed", (int64)ESBZWeaponAttribute::ViewKickRecoverySpeed },
				{ "ESBZWeaponAttribute::ViewKickRecoveryDelay", (int64)ESBZWeaponAttribute::ViewKickRecoveryDelay },
				{ "ESBZWeaponAttribute::GunKickBackDistance", (int64)ESBZWeaponAttribute::GunKickBackDistance },
				{ "ESBZWeaponAttribute::HurtBuildup", (int64)ESBZWeaponAttribute::HurtBuildup },
				{ "ESBZWeaponAttribute::CriticalHurtBuildup", (int64)ESBZWeaponAttribute::CriticalHurtBuildup },
				{ "ESBZWeaponAttribute::HurtBuildupMultiplier", (int64)ESBZWeaponAttribute::HurtBuildupMultiplier },
				{ "ESBZWeaponAttribute::EndCycleReloadPlayRate", (int64)ESBZWeaponAttribute::EndCycleReloadPlayRate },
				{ "ESBZWeaponAttribute::OverallDamage", (int64)ESBZWeaponAttribute::OverallDamage },
				{ "ESBZWeaponAttribute::CriticalDamage", (int64)ESBZWeaponAttribute::CriticalDamage },
				{ "ESBZWeaponAttribute::LoadoutWeight", (int64)ESBZWeaponAttribute::LoadoutWeight },
				{ "ESBZWeaponAttribute::OverallRecoil", (int64)ESBZWeaponAttribute::OverallRecoil },
				{ "ESBZWeaponAttribute::OverallSpread", (int64)ESBZWeaponAttribute::OverallSpread },
				{ "ESBZWeaponAttribute::OverallGunkick", (int64)ESBZWeaponAttribute::OverallGunkick },
				{ "ESBZWeaponAttribute::OverallSwapSpeed", (int64)ESBZWeaponAttribute::OverallSwapSpeed },
				{ "ESBZWeaponAttribute::OverallSpreadRadius", (int64)ESBZWeaponAttribute::OverallSpreadRadius },
				{ "ESBZWeaponAttribute::OverallHurtBuildup", (int64)ESBZWeaponAttribute::OverallHurtBuildup },
				{ "ESBZWeaponAttribute::MAX", (int64)ESBZWeaponAttribute::MAX },
				{ "ESBZWeaponAttribute::ATTRIBUTE_START", (int64)ESBZWeaponAttribute::ATTRIBUTE_START },
				{ "ESBZWeaponAttribute::PARENT_START", (int64)ESBZWeaponAttribute::PARENT_START },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmorPenetration.Name", "ESBZWeaponAttribute::ArmorPenetration" },
				{ "ATTRIBUTE_START.Name", "ESBZWeaponAttribute::ATTRIBUTE_START" },
				{ "BlueprintType", "true" },
				{ "CriticalDamage.Name", "ESBZWeaponAttribute::CriticalDamage" },
				{ "CriticalDamageMultiplierDistance.Name", "ESBZWeaponAttribute::CriticalDamageMultiplierDistance" },
				{ "CriticalHurtBuildup.Name", "ESBZWeaponAttribute::CriticalHurtBuildup" },
				{ "DamageDistance.Name", "ESBZWeaponAttribute::DamageDistance" },
				{ "EndCycleReloadPlayRate.Name", "ESBZWeaponAttribute::EndCycleReloadPlayRate" },
				{ "EquipPlayRate.Name", "ESBZWeaponAttribute::EquipPlayRate" },
				{ "GunKickBackDistance.Name", "ESBZWeaponAttribute::GunKickBackDistance" },
				{ "HipfireSpread.Name", "ESBZWeaponAttribute::HipfireSpread" },
				{ "HorizontalGunkick.Name", "ESBZWeaponAttribute::HorizontalGunkick" },
				{ "HorizontalRecoil.Name", "ESBZWeaponAttribute::HorizontalRecoil" },
				{ "HorizontalSpreadRadius.Name", "ESBZWeaponAttribute::HorizontalSpreadRadius" },
				{ "HurtBuildup.Name", "ESBZWeaponAttribute::HurtBuildup" },
				{ "HurtBuildupMultiplier.Name", "ESBZWeaponAttribute::HurtBuildupMultiplier" },
				{ "InitialRecoil.Name", "ESBZWeaponAttribute::InitialRecoil" },
				{ "LoadoutWeight.Name", "ESBZWeaponAttribute::LoadoutWeight" },
				{ "MAX.Name", "ESBZWeaponAttribute::MAX" },
				{ "ModuleRelativePath", "Public/ESBZWeaponAttribute.h" },
				{ "NONE.Name", "ESBZWeaponAttribute::NONE" },
				{ "OverallDamage.Name", "ESBZWeaponAttribute::OverallDamage" },
				{ "OverallGunkick.Name", "ESBZWeaponAttribute::OverallGunkick" },
				{ "OverallHurtBuildup.Name", "ESBZWeaponAttribute::OverallHurtBuildup" },
				{ "OverallPelletDeviation.Name", "ESBZWeaponAttribute::OverallPelletDeviation" },
				{ "OverallRecoil.Name", "ESBZWeaponAttribute::OverallRecoil" },
				{ "OverallReloadPlayRate.Name", "ESBZWeaponAttribute::OverallReloadPlayRate" },
				{ "OverallSpread.Name", "ESBZWeaponAttribute::OverallSpread" },
				{ "OverallSpreadRadius.Name", "ESBZWeaponAttribute::OverallSpreadRadius" },
				{ "OverallSwapSpeed.Name", "ESBZWeaponAttribute::OverallSwapSpeed" },
				{ "PARENT_START.Name", "ESBZWeaponAttribute::PARENT_START" },
				{ "ScreenShakeAmplitude.Name", "ESBZWeaponAttribute::ScreenShakeAmplitude" },
				{ "SpreadIncrement.Name", "ESBZWeaponAttribute::SpreadIncrement" },
				{ "SprintExitPlayRate.Name", "ESBZWeaponAttribute::SprintExitPlayRate" },
				{ "TargetingSpread.Name", "ESBZWeaponAttribute::TargetingSpread" },
				{ "TargetingTransitionTime.Name", "ESBZWeaponAttribute::TargetingTransitionTime" },
				{ "UnequipPlayRate.Name", "ESBZWeaponAttribute::UnequipPlayRate" },
				{ "VerticalGunkick.Name", "ESBZWeaponAttribute::VerticalGunkick" },
				{ "VerticalRecoil.Name", "ESBZWeaponAttribute::VerticalRecoil" },
				{ "VerticalSpreadRadius.Name", "ESBZWeaponAttribute::VerticalSpreadRadius" },
				{ "ViewKickRecoveryDelay.Name", "ESBZWeaponAttribute::ViewKickRecoveryDelay" },
				{ "ViewKickRecoverySpeed.Name", "ESBZWeaponAttribute::ViewKickRecoverySpeed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZWeaponAttribute",
				"ESBZWeaponAttribute",
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
