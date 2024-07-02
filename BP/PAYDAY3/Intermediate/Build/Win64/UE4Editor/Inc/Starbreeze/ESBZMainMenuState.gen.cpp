// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMainMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMainMenuState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMainMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMainMenuState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMainMenuState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMainMenuState>()
	{
		return ESBZMainMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMainMenuState(ESBZMainMenuState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMainMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMainMenuState_Hash() { return 410334420U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMainMenuState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMainMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMainMenuState::MainScreen", (int64)ESBZMainMenuState::MainScreen },
				{ "ESBZMainMenuState::PrePlanning", (int64)ESBZMainMenuState::PrePlanning },
				{ "ESBZMainMenuState::Loadout", (int64)ESBZMainMenuState::Loadout },
				{ "ESBZMainMenuState::BlackMarket", (int64)ESBZMainMenuState::BlackMarket },
				{ "ESBZMainMenuState::MatchMaking", (int64)ESBZMainMenuState::MatchMaking },
				{ "ESBZMainMenuState::Options", (int64)ESBZMainMenuState::Options },
				{ "ESBZMainMenuState::SuitVisualization", (int64)ESBZMainMenuState::SuitVisualization },
				{ "ESBZMainMenuState::GlovesVisualization", (int64)ESBZMainMenuState::GlovesVisualization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlackMarket.Name", "ESBZMainMenuState::BlackMarket" },
				{ "BlueprintType", "true" },
				{ "GlovesVisualization.Name", "ESBZMainMenuState::GlovesVisualization" },
				{ "Loadout.Name", "ESBZMainMenuState::Loadout" },
				{ "MainScreen.Name", "ESBZMainMenuState::MainScreen" },
				{ "MatchMaking.Name", "ESBZMainMenuState::MatchMaking" },
				{ "ModuleRelativePath", "Public/ESBZMainMenuState.h" },
				{ "Options.Name", "ESBZMainMenuState::Options" },
				{ "PrePlanning.Name", "ESBZMainMenuState::PrePlanning" },
				{ "SuitVisualization.Name", "ESBZMainMenuState::SuitVisualization" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMainMenuState",
				"ESBZMainMenuState",
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
