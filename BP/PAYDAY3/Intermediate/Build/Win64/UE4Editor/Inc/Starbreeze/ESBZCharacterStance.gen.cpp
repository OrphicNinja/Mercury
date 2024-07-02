// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCharacterStance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCharacterStance() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCharacterStance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCharacterStance"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterStance>()
	{
		return ESBZCharacterStance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCharacterStance(ESBZCharacterStance_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCharacterStance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterStance_Hash() { return 3492717726U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCharacterStance"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterStance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCharacterStance::Neutral", (int64)ESBZCharacterStance::Neutral },
				{ "ESBZCharacterStance::Suspicious", (int64)ESBZCharacterStance::Suspicious },
				{ "ESBZCharacterStance::Investigate", (int64)ESBZCharacterStance::Investigate },
				{ "ESBZCharacterStance::Stealth", (int64)ESBZCharacterStance::Stealth },
				{ "ESBZCharacterStance::Combat", (int64)ESBZCharacterStance::Combat },
				{ "ESBZCharacterStance::Panic", (int64)ESBZCharacterStance::Panic },
				{ "ESBZCharacterStance::Hostage", (int64)ESBZCharacterStance::Hostage },
				{ "ESBZCharacterStance::HumanShieldInstigator", (int64)ESBZCharacterStance::HumanShieldInstigator },
				{ "ESBZCharacterStance::HumanShieldVictim", (int64)ESBZCharacterStance::HumanShieldVictim },
				{ "ESBZCharacterStance::DownedDefeated", (int64)ESBZCharacterStance::DownedDefeated },
				{ "ESBZCharacterStance::Impaired", (int64)ESBZCharacterStance::Impaired },
				{ "ESBZCharacterStance::Last", (int64)ESBZCharacterStance::Last },
				{ "ESBZCharacterStance::First", (int64)ESBZCharacterStance::First },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Combat.Name", "ESBZCharacterStance::Combat" },
				{ "DownedDefeated.Name", "ESBZCharacterStance::DownedDefeated" },
				{ "First.Name", "ESBZCharacterStance::First" },
				{ "Hostage.Name", "ESBZCharacterStance::Hostage" },
				{ "HumanShieldInstigator.Name", "ESBZCharacterStance::HumanShieldInstigator" },
				{ "HumanShieldVictim.Name", "ESBZCharacterStance::HumanShieldVictim" },
				{ "Impaired.Name", "ESBZCharacterStance::Impaired" },
				{ "Investigate.Name", "ESBZCharacterStance::Investigate" },
				{ "Last.Name", "ESBZCharacterStance::Last" },
				{ "ModuleRelativePath", "Public/ESBZCharacterStance.h" },
				{ "Neutral.Name", "ESBZCharacterStance::Neutral" },
				{ "Panic.Name", "ESBZCharacterStance::Panic" },
				{ "Stealth.Name", "ESBZCharacterStance::Stealth" },
				{ "Suspicious.Name", "ESBZCharacterStance::Suspicious" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCharacterStance",
				"ESBZCharacterStance",
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
