// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGameUserSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGameUserSetting() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameUserSetting();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGameUserSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGameUserSetting, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGameUserSetting"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameUserSetting>()
	{
		return ESBZGameUserSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGameUserSetting(ESBZGameUserSetting_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGameUserSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGameUserSetting_Hash() { return 1311451127U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameUserSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGameUserSetting"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGameUserSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGameUserSetting::GamepadHorizontalSensitivity", (int64)ESBZGameUserSetting::GamepadHorizontalSensitivity },
				{ "ESBZGameUserSetting::GamepadVerticalSensitivity", (int64)ESBZGameUserSetting::GamepadVerticalSensitivity },
				{ "ESBZGameUserSetting::IsChatDisabled", (int64)ESBZGameUserSetting::IsChatDisabled },
				{ "ESBZGameUserSetting::IsCrossplayDisabled", (int64)ESBZGameUserSetting::IsCrossplayDisabled },
				{ "ESBZGameUserSetting::MouseSensitivity", (int64)ESBZGameUserSetting::MouseSensitivity },
				{ "ESBZGameUserSetting::MouseSensitivityMultiplier", (int64)ESBZGameUserSetting::MouseSensitivityMultiplier },
				{ "ESBZGameUserSetting::TargetingSensitivityMultiplier", (int64)ESBZGameUserSetting::TargetingSensitivityMultiplier },
				{ "ESBZGameUserSetting::UseForceFeedback", (int64)ESBZGameUserSetting::UseForceFeedback },
				{ "ESBZGameUserSetting::UseHoldForTabMenu", (int64)ESBZGameUserSetting::UseHoldForTabMenu },
				{ "ESBZGameUserSetting::UseHoldToCrouch", (int64)ESBZGameUserSetting::UseHoldToCrouch },
				{ "ESBZGameUserSetting::UseHoldToRun", (int64)ESBZGameUserSetting::UseHoldToRun },
				{ "ESBZGameUserSetting::UseHoldToTarget", (int64)ESBZGameUserSetting::UseHoldToTarget },
				{ "ESBZGameUserSetting::IsHoldToSlide", (int64)ESBZGameUserSetting::IsHoldToSlide },
				{ "ESBZGameUserSetting::UseInvertedYAxis", (int64)ESBZGameUserSetting::UseInvertedYAxis },
				{ "ESBZGameUserSetting::UseMouseSmoothing", (int64)ESBZGameUserSetting::UseMouseSmoothing },
				{ "ESBZGameUserSetting::UseSwitchWeaponAutomatically", (int64)ESBZGameUserSetting::UseSwitchWeaponAutomatically },
				{ "ESBZGameUserSetting::IsRememberSkipIntroSequence", (int64)ESBZGameUserSetting::IsRememberSkipIntroSequence },
				{ "ESBZGameUserSetting::HeadbobScale", (int64)ESBZGameUserSetting::HeadbobScale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GamepadHorizontalSensitivity.Name", "ESBZGameUserSetting::GamepadHorizontalSensitivity" },
				{ "GamepadVerticalSensitivity.Name", "ESBZGameUserSetting::GamepadVerticalSensitivity" },
				{ "HeadbobScale.Name", "ESBZGameUserSetting::HeadbobScale" },
				{ "IsChatDisabled.Name", "ESBZGameUserSetting::IsChatDisabled" },
				{ "IsCrossplayDisabled.Name", "ESBZGameUserSetting::IsCrossplayDisabled" },
				{ "IsHoldToSlide.Name", "ESBZGameUserSetting::IsHoldToSlide" },
				{ "IsRememberSkipIntroSequence.Name", "ESBZGameUserSetting::IsRememberSkipIntroSequence" },
				{ "ModuleRelativePath", "Public/ESBZGameUserSetting.h" },
				{ "MouseSensitivity.Name", "ESBZGameUserSetting::MouseSensitivity" },
				{ "MouseSensitivityMultiplier.Name", "ESBZGameUserSetting::MouseSensitivityMultiplier" },
				{ "TargetingSensitivityMultiplier.Name", "ESBZGameUserSetting::TargetingSensitivityMultiplier" },
				{ "UseForceFeedback.Name", "ESBZGameUserSetting::UseForceFeedback" },
				{ "UseHoldForTabMenu.Name", "ESBZGameUserSetting::UseHoldForTabMenu" },
				{ "UseHoldToCrouch.Name", "ESBZGameUserSetting::UseHoldToCrouch" },
				{ "UseHoldToRun.Name", "ESBZGameUserSetting::UseHoldToRun" },
				{ "UseHoldToTarget.Name", "ESBZGameUserSetting::UseHoldToTarget" },
				{ "UseInvertedYAxis.Name", "ESBZGameUserSetting::UseInvertedYAxis" },
				{ "UseMouseSmoothing.Name", "ESBZGameUserSetting::UseMouseSmoothing" },
				{ "UseSwitchWeaponAutomatically.Name", "ESBZGameUserSetting::UseSwitchWeaponAutomatically" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGameUserSetting",
				"ESBZGameUserSetting",
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
