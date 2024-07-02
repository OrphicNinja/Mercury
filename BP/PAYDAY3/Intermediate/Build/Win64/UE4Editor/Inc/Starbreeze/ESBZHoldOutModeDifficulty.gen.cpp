// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHoldOutModeDifficulty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHoldOutModeDifficulty() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHoldOutModeDifficulty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHoldOutModeDifficulty"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHoldOutModeDifficulty>()
	{
		return ESBZHoldOutModeDifficulty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHoldOutModeDifficulty(ESBZHoldOutModeDifficulty_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHoldOutModeDifficulty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty_Hash() { return 3707413878U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHoldOutModeDifficulty"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHoldOutModeDifficulty::Normal", (int64)ESBZHoldOutModeDifficulty::Normal },
				{ "ESBZHoldOutModeDifficulty::Hard", (int64)ESBZHoldOutModeDifficulty::Hard },
				{ "ESBZHoldOutModeDifficulty::VeryHard", (int64)ESBZHoldOutModeDifficulty::VeryHard },
				{ "ESBZHoldOutModeDifficulty::Overkill", (int64)ESBZHoldOutModeDifficulty::Overkill },
				{ "ESBZHoldOutModeDifficulty::OverkillPlus", (int64)ESBZHoldOutModeDifficulty::OverkillPlus },
				{ "ESBZHoldOutModeDifficulty::OverkillPlusPlus", (int64)ESBZHoldOutModeDifficulty::OverkillPlusPlus },
				{ "ESBZHoldOutModeDifficulty::MAX", (int64)ESBZHoldOutModeDifficulty::MAX },
				{ "ESBZHoldOutModeDifficulty::Default", (int64)ESBZHoldOutModeDifficulty::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZHoldOutModeDifficulty::Default" },
				{ "Hard.Name", "ESBZHoldOutModeDifficulty::Hard" },
				{ "MAX.Name", "ESBZHoldOutModeDifficulty::MAX" },
				{ "ModuleRelativePath", "Public/ESBZHoldOutModeDifficulty.h" },
				{ "Normal.Name", "ESBZHoldOutModeDifficulty::Normal" },
				{ "Overkill.Name", "ESBZHoldOutModeDifficulty::Overkill" },
				{ "OverkillPlus.Name", "ESBZHoldOutModeDifficulty::OverkillPlus" },
				{ "OverkillPlusPlus.Name", "ESBZHoldOutModeDifficulty::OverkillPlusPlus" },
				{ "VeryHard.Name", "ESBZHoldOutModeDifficulty::VeryHard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHoldOutModeDifficulty",
				"ESBZHoldOutModeDifficulty",
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
