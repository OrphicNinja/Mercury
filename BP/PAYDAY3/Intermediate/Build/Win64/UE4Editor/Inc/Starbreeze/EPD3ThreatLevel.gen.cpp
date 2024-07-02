// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3ThreatLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3ThreatLevel() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3ThreatLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3ThreatLevel"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3ThreatLevel>()
	{
		return EPD3ThreatLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3ThreatLevel(EPD3ThreatLevel_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3ThreatLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel_Hash() { return 1041434298U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3ThreatLevel"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3ThreatLevel::None", (int64)EPD3ThreatLevel::None },
				{ "EPD3ThreatLevel::Low", (int64)EPD3ThreatLevel::Low },
				{ "EPD3ThreatLevel::Mid", (int64)EPD3ThreatLevel::Mid },
				{ "EPD3ThreatLevel::High", (int64)EPD3ThreatLevel::High },
				{ "EPD3ThreatLevel::VeryHigh", (int64)EPD3ThreatLevel::VeryHigh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EPD3ThreatLevel::High" },
				{ "Low.Name", "EPD3ThreatLevel::Low" },
				{ "Mid.Name", "EPD3ThreatLevel::Mid" },
				{ "ModuleRelativePath", "Public/EPD3ThreatLevel.h" },
				{ "None.Name", "EPD3ThreatLevel::None" },
				{ "VeryHigh.Name", "EPD3ThreatLevel::VeryHigh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3ThreatLevel",
				"EPD3ThreatLevel",
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
