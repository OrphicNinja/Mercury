// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZWeaponCustomizationSubScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZWeaponCustomizationSubScreen() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponCustomizationSubScreen();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZWeaponCustomizationSubScreen_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZWeaponCustomizationSubScreen, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZWeaponCustomizationSubScreen"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZWeaponCustomizationSubScreen>()
	{
		return ESBZWeaponCustomizationSubScreen_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZWeaponCustomizationSubScreen(ESBZWeaponCustomizationSubScreen_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZWeaponCustomizationSubScreen"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponCustomizationSubScreen_Hash() { return 442607659U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponCustomizationSubScreen()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZWeaponCustomizationSubScreen"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponCustomizationSubScreen_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZWeaponCustomizationSubScreen::WeaponSlot", (int64)ESBZWeaponCustomizationSubScreen::WeaponSlot },
				{ "ESBZWeaponCustomizationSubScreen::WeaponPart", (int64)ESBZWeaponCustomizationSubScreen::WeaponPart },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticSlot", (int64)ESBZWeaponCustomizationSubScreen::CosmeticSlot },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticWearNTear", (int64)ESBZWeaponCustomizationSubScreen::CosmeticWearNTear },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticBaseDesign", (int64)ESBZWeaponCustomizationSubScreen::CosmeticBaseDesign },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticMaterial", (int64)ESBZWeaponCustomizationSubScreen::CosmeticMaterial },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticPattern", (int64)ESBZWeaponCustomizationSubScreen::CosmeticPattern },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticSticker", (int64)ESBZWeaponCustomizationSubScreen::CosmeticSticker },
				{ "ESBZWeaponCustomizationSubScreen::CosmeticCharm", (int64)ESBZWeaponCustomizationSubScreen::CosmeticCharm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CosmeticBaseDesign.Name", "ESBZWeaponCustomizationSubScreen::CosmeticBaseDesign" },
				{ "CosmeticCharm.Name", "ESBZWeaponCustomizationSubScreen::CosmeticCharm" },
				{ "CosmeticMaterial.Name", "ESBZWeaponCustomizationSubScreen::CosmeticMaterial" },
				{ "CosmeticPattern.Name", "ESBZWeaponCustomizationSubScreen::CosmeticPattern" },
				{ "CosmeticSlot.Name", "ESBZWeaponCustomizationSubScreen::CosmeticSlot" },
				{ "CosmeticSticker.Name", "ESBZWeaponCustomizationSubScreen::CosmeticSticker" },
				{ "CosmeticWearNTear.Name", "ESBZWeaponCustomizationSubScreen::CosmeticWearNTear" },
				{ "ModuleRelativePath", "Public/ESBZWeaponCustomizationSubScreen.h" },
				{ "WeaponPart.Name", "ESBZWeaponCustomizationSubScreen::WeaponPart" },
				{ "WeaponSlot.Name", "ESBZWeaponCustomizationSubScreen::WeaponSlot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZWeaponCustomizationSubScreen",
				"ESBZWeaponCustomizationSubScreen",
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
