// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZReactionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZReactionType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReactionType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZReactionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZReactionType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZReactionType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZReactionType>()
	{
		return ESBZReactionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZReactionType(ESBZReactionType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZReactionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZReactionType_Hash() { return 2975551197U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZReactionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZReactionType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZReactionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZReactionType::PlaceMedicBag", (int64)ESBZReactionType::PlaceMedicBag },
				{ "ESBZReactionType::PlaceAmmoBag", (int64)ESBZReactionType::PlaceAmmoBag },
				{ "ESBZReactionType::PlaceArmorBag", (int64)ESBZReactionType::PlaceArmorBag },
				{ "ESBZReactionType::PlaceSentryTurret", (int64)ESBZReactionType::PlaceSentryTurret },
				{ "ESBZReactionType::PlaceMicroCamera", (int64)ESBZReactionType::PlaceMicroCamera },
				{ "ESBZReactionType::PlaceECMJammer", (int64)ESBZReactionType::PlaceECMJammer },
				{ "ESBZReactionType::PlaceSensorTool", (int64)ESBZReactionType::PlaceSensorTool },
				{ "ESBZReactionType::PlaceTripMine", (int64)ESBZReactionType::PlaceTripMine },
				{ "ESBZReactionType::PlayerDowned", (int64)ESBZReactionType::PlayerDowned },
				{ "ESBZReactionType::PlayerRevived", (int64)ESBZReactionType::PlayerRevived },
				{ "ESBZReactionType::PlayerFlashed", (int64)ESBZReactionType::PlayerFlashed },
				{ "ESBZReactionType::PlayerGassed", (int64)ESBZReactionType::PlayerGassed },
				{ "ESBZReactionType::PlayerTased", (int64)ESBZReactionType::PlayerTased },
				{ "ESBZReactionType::PlayerTasedMine", (int64)ESBZReactionType::PlayerTasedMine },
				{ "ESBZReactionType::PlayerTasedBattery", (int64)ESBZReactionType::PlayerTasedBattery },
				{ "ESBZReactionType::SWATSurrenders", (int64)ESBZReactionType::SWATSurrenders },
				{ "ESBZReactionType::HostageTraded", (int64)ESBZReactionType::HostageTraded },
				{ "ESBZReactionType::HumanShield", (int64)ESBZReactionType::HumanShield },
				{ "ESBZReactionType::PlayerCuffedByCloaker", (int64)ESBZReactionType::PlayerCuffedByCloaker },
				{ "ESBZReactionType::PlayerUsingOverkillWeapon", (int64)ESBZReactionType::PlayerUsingOverkillWeapon },
				{ "ESBZReactionType::ECMJammerActive", (int64)ESBZReactionType::ECMJammerActive },
				{ "ESBZReactionType::HeisterChainsIdle", (int64)ESBZReactionType::HeisterChainsIdle },
				{ "ESBZReactionType::HeisterDallasIdle", (int64)ESBZReactionType::HeisterDallasIdle },
				{ "ESBZReactionType::HeisterHoxtonIdle", (int64)ESBZReactionType::HeisterHoxtonIdle },
				{ "ESBZReactionType::HeisterJoyIdle", (int64)ESBZReactionType::HeisterJoyIdle },
				{ "ESBZReactionType::HeisterPearlIdle", (int64)ESBZReactionType::HeisterPearlIdle },
				{ "ESBZReactionType::HeisterWolfIdle", (int64)ESBZReactionType::HeisterWolfIdle },
				{ "ESBZReactionType::HeisterUnkownIdle", (int64)ESBZReactionType::HeisterUnkownIdle },
				{ "ESBZReactionType::MAX", (int64)ESBZReactionType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECMJammerActive.Name", "ESBZReactionType::ECMJammerActive" },
				{ "HeisterChainsIdle.Name", "ESBZReactionType::HeisterChainsIdle" },
				{ "HeisterDallasIdle.Name", "ESBZReactionType::HeisterDallasIdle" },
				{ "HeisterHoxtonIdle.Name", "ESBZReactionType::HeisterHoxtonIdle" },
				{ "HeisterJoyIdle.Name", "ESBZReactionType::HeisterJoyIdle" },
				{ "HeisterPearlIdle.Name", "ESBZReactionType::HeisterPearlIdle" },
				{ "HeisterUnkownIdle.Name", "ESBZReactionType::HeisterUnkownIdle" },
				{ "HeisterWolfIdle.Name", "ESBZReactionType::HeisterWolfIdle" },
				{ "HostageTraded.Name", "ESBZReactionType::HostageTraded" },
				{ "HumanShield.Name", "ESBZReactionType::HumanShield" },
				{ "MAX.Name", "ESBZReactionType::MAX" },
				{ "ModuleRelativePath", "Public/ESBZReactionType.h" },
				{ "PlaceAmmoBag.Name", "ESBZReactionType::PlaceAmmoBag" },
				{ "PlaceArmorBag.Name", "ESBZReactionType::PlaceArmorBag" },
				{ "PlaceECMJammer.Name", "ESBZReactionType::PlaceECMJammer" },
				{ "PlaceMedicBag.Name", "ESBZReactionType::PlaceMedicBag" },
				{ "PlaceMicroCamera.Name", "ESBZReactionType::PlaceMicroCamera" },
				{ "PlaceSensorTool.Name", "ESBZReactionType::PlaceSensorTool" },
				{ "PlaceSentryTurret.Name", "ESBZReactionType::PlaceSentryTurret" },
				{ "PlaceTripMine.Name", "ESBZReactionType::PlaceTripMine" },
				{ "PlayerCuffedByCloaker.Name", "ESBZReactionType::PlayerCuffedByCloaker" },
				{ "PlayerDowned.Name", "ESBZReactionType::PlayerDowned" },
				{ "PlayerFlashed.Name", "ESBZReactionType::PlayerFlashed" },
				{ "PlayerGassed.Name", "ESBZReactionType::PlayerGassed" },
				{ "PlayerRevived.Name", "ESBZReactionType::PlayerRevived" },
				{ "PlayerTased.Name", "ESBZReactionType::PlayerTased" },
				{ "PlayerTasedBattery.Name", "ESBZReactionType::PlayerTasedBattery" },
				{ "PlayerTasedMine.Name", "ESBZReactionType::PlayerTasedMine" },
				{ "PlayerUsingOverkillWeapon.Name", "ESBZReactionType::PlayerUsingOverkillWeapon" },
				{ "SWATSurrenders.Name", "ESBZReactionType::SWATSurrenders" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZReactionType",
				"ESBZReactionType",
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
