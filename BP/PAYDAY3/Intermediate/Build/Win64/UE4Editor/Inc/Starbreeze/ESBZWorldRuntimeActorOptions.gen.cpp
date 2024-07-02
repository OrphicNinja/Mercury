// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZWorldRuntimeActorOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZWorldRuntimeActorOptions() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWorldRuntimeActorOptions();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZWorldRuntimeActorOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZWorldRuntimeActorOptions, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZWorldRuntimeActorOptions"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZWorldRuntimeActorOptions>()
	{
		return ESBZWorldRuntimeActorOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZWorldRuntimeActorOptions(ESBZWorldRuntimeActorOptions_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZWorldRuntimeActorOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZWorldRuntimeActorOptions_Hash() { return 2006335958U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZWorldRuntimeActorOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZWorldRuntimeActorOptions"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZWorldRuntimeActorOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZWorldRuntimeActorOptions::AllPlayerCharacters", (int64)ESBZWorldRuntimeActorOptions::AllPlayerCharacters },
				{ "ESBZWorldRuntimeActorOptions::AllAlivePlayerCharacters", (int64)ESBZWorldRuntimeActorOptions::AllAlivePlayerCharacters },
				{ "ESBZWorldRuntimeActorOptions::AllAliveAICharacters", (int64)ESBZWorldRuntimeActorOptions::AllAliveAICharacters },
				{ "ESBZWorldRuntimeActorOptions::AllDespawnVolumes", (int64)ESBZWorldRuntimeActorOptions::AllDespawnVolumes },
				{ "ESBZWorldRuntimeActorOptions::AllDefensePoints", (int64)ESBZWorldRuntimeActorOptions::AllDefensePoints },
				{ "ESBZWorldRuntimeActorOptions::AllRoomVolumes", (int64)ESBZWorldRuntimeActorOptions::AllRoomVolumes },
				{ "ESBZWorldRuntimeActorOptions::AllEscortPoints", (int64)ESBZWorldRuntimeActorOptions::AllEscortPoints },
				{ "ESBZWorldRuntimeActorOptions::AllBagDropPoints", (int64)ESBZWorldRuntimeActorOptions::AllBagDropPoints },
				{ "ESBZWorldRuntimeActorOptions::AllAIObjectives", (int64)ESBZWorldRuntimeActorOptions::AllAIObjectives },
				{ "ESBZWorldRuntimeActorOptions::AllVantagePoints", (int64)ESBZWorldRuntimeActorOptions::AllVantagePoints },
				{ "ESBZWorldRuntimeActorOptions::AllSabotageTargets", (int64)ESBZWorldRuntimeActorOptions::AllSabotageTargets },
				{ "ESBZWorldRuntimeActorOptions::AllSecurityCameras", (int64)ESBZWorldRuntimeActorOptions::AllSecurityCameras },
				{ "ESBZWorldRuntimeActorOptions::AllProtectPoints", (int64)ESBZWorldRuntimeActorOptions::AllProtectPoints },
				{ "ESBZWorldRuntimeActorOptions::AllArmedGrenades", (int64)ESBZWorldRuntimeActorOptions::AllArmedGrenades },
				{ "ESBZWorldRuntimeActorOptions::AllHostages", (int64)ESBZWorldRuntimeActorOptions::AllHostages },
				{ "ESBZWorldRuntimeActorOptions::AllTowerHideLifeActions", (int64)ESBZWorldRuntimeActorOptions::AllTowerHideLifeActions },
				{ "ESBZWorldRuntimeActorOptions::AllAliveAICrewCharacters", (int64)ESBZWorldRuntimeActorOptions::AllAliveAICrewCharacters },
				{ "ESBZWorldRuntimeActorOptions::MAX", (int64)ESBZWorldRuntimeActorOptions::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllAIObjectives.Name", "ESBZWorldRuntimeActorOptions::AllAIObjectives" },
				{ "AllAliveAICharacters.Name", "ESBZWorldRuntimeActorOptions::AllAliveAICharacters" },
				{ "AllAliveAICrewCharacters.Name", "ESBZWorldRuntimeActorOptions::AllAliveAICrewCharacters" },
				{ "AllAlivePlayerCharacters.Name", "ESBZWorldRuntimeActorOptions::AllAlivePlayerCharacters" },
				{ "AllArmedGrenades.Name", "ESBZWorldRuntimeActorOptions::AllArmedGrenades" },
				{ "AllBagDropPoints.Name", "ESBZWorldRuntimeActorOptions::AllBagDropPoints" },
				{ "AllDefensePoints.Name", "ESBZWorldRuntimeActorOptions::AllDefensePoints" },
				{ "AllDespawnVolumes.Name", "ESBZWorldRuntimeActorOptions::AllDespawnVolumes" },
				{ "AllEscortPoints.Name", "ESBZWorldRuntimeActorOptions::AllEscortPoints" },
				{ "AllHostages.Name", "ESBZWorldRuntimeActorOptions::AllHostages" },
				{ "AllPlayerCharacters.Name", "ESBZWorldRuntimeActorOptions::AllPlayerCharacters" },
				{ "AllProtectPoints.Name", "ESBZWorldRuntimeActorOptions::AllProtectPoints" },
				{ "AllRoomVolumes.Name", "ESBZWorldRuntimeActorOptions::AllRoomVolumes" },
				{ "AllSabotageTargets.Name", "ESBZWorldRuntimeActorOptions::AllSabotageTargets" },
				{ "AllSecurityCameras.Name", "ESBZWorldRuntimeActorOptions::AllSecurityCameras" },
				{ "AllTowerHideLifeActions.Name", "ESBZWorldRuntimeActorOptions::AllTowerHideLifeActions" },
				{ "AllVantagePoints.Name", "ESBZWorldRuntimeActorOptions::AllVantagePoints" },
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZWorldRuntimeActorOptions::MAX" },
				{ "ModuleRelativePath", "Public/ESBZWorldRuntimeActorOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZWorldRuntimeActorOptions",
				"ESBZWorldRuntimeActorOptions",
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
