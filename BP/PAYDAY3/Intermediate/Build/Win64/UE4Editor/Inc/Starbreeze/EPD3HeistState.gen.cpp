// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3HeistState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3HeistState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3HeistState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3HeistState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3HeistState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3HeistState>()
	{
		return EPD3HeistState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3HeistState(EPD3HeistState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3HeistState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3HeistState_Hash() { return 2767864993U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3HeistState"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3HeistState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3HeistState::Stealth", (int64)EPD3HeistState::Stealth },
				{ "EPD3HeistState::Search", (int64)EPD3HeistState::Search },
				{ "EPD3HeistState::Alarm", (int64)EPD3HeistState::Alarm },
				{ "EPD3HeistState::FirstResponse", (int64)EPD3HeistState::FirstResponse },
				{ "EPD3HeistState::Negotiation", (int64)EPD3HeistState::Negotiation },
				{ "EPD3HeistState::Anticipation", (int64)EPD3HeistState::Anticipation },
				{ "EPD3HeistState::Assault", (int64)EPD3HeistState::Assault },
				{ "EPD3HeistState::Control", (int64)EPD3HeistState::Control },
				{ "EPD3HeistState::PointOfNoReturn", (int64)EPD3HeistState::PointOfNoReturn },
				{ "EPD3HeistState::MAX", (int64)EPD3HeistState::MAX },
				{ "EPD3HeistState::STEALTH_MAX", (int64)EPD3HeistState::STEALTH_MAX },
				{ "EPD3HeistState::PAGER_MAX", (int64)EPD3HeistState::PAGER_MAX },
				{ "EPD3HeistState::CARRY_MAX", (int64)EPD3HeistState::CARRY_MAX },
				{ "EPD3HeistState::CASING_MAX", (int64)EPD3HeistState::CASING_MAX },
				{ "EPD3HeistState::NO_CUFFED_TIMER_MAX", (int64)EPD3HeistState::NO_CUFFED_TIMER_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alarm.Name", "EPD3HeistState::Alarm" },
				{ "Anticipation.Name", "EPD3HeistState::Anticipation" },
				{ "Assault.Name", "EPD3HeistState::Assault" },
				{ "BlueprintType", "true" },
				{ "CARRY_MAX.Hidden", "" },
				{ "CARRY_MAX.Name", "EPD3HeistState::CARRY_MAX" },
				{ "CASING_MAX.Hidden", "" },
				{ "CASING_MAX.Name", "EPD3HeistState::CASING_MAX" },
				{ "Control.Name", "EPD3HeistState::Control" },
				{ "FirstResponse.Name", "EPD3HeistState::FirstResponse" },
				{ "MAX.Name", "EPD3HeistState::MAX" },
				{ "ModuleRelativePath", "Public/EPD3HeistState.h" },
				{ "Negotiation.Name", "EPD3HeistState::Negotiation" },
				{ "NO_CUFFED_TIMER_MAX.Hidden", "" },
				{ "NO_CUFFED_TIMER_MAX.Name", "EPD3HeistState::NO_CUFFED_TIMER_MAX" },
				{ "PAGER_MAX.Hidden", "" },
				{ "PAGER_MAX.Name", "EPD3HeistState::PAGER_MAX" },
				{ "PointOfNoReturn.Name", "EPD3HeistState::PointOfNoReturn" },
				{ "Search.Name", "EPD3HeistState::Search" },
				{ "Stealth.Name", "EPD3HeistState::Stealth" },
				{ "STEALTH_MAX.Hidden", "" },
				{ "STEALTH_MAX.Name", "EPD3HeistState::STEALTH_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3HeistState",
				"EPD3HeistState",
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
