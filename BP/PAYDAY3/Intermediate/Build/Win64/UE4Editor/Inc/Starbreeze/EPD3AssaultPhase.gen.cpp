// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3AssaultPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3AssaultPhase() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3AssaultPhase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3AssaultPhase_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3AssaultPhase, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3AssaultPhase"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3AssaultPhase>()
	{
		return EPD3AssaultPhase_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3AssaultPhase(EPD3AssaultPhase_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3AssaultPhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3AssaultPhase_Hash() { return 2320017862U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3AssaultPhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3AssaultPhase"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3AssaultPhase_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3AssaultPhase::Disabled", (int64)EPD3AssaultPhase::Disabled },
				{ "EPD3AssaultPhase::Anticipation", (int64)EPD3AssaultPhase::Anticipation },
				{ "EPD3AssaultPhase::Build", (int64)EPD3AssaultPhase::Build },
				{ "EPD3AssaultPhase::Sustain", (int64)EPD3AssaultPhase::Sustain },
				{ "EPD3AssaultPhase::Fade", (int64)EPD3AssaultPhase::Fade },
				{ "EPD3AssaultPhase::Regroup", (int64)EPD3AssaultPhase::Regroup },
				{ "EPD3AssaultPhase::Wait", (int64)EPD3AssaultPhase::Wait },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Anticipation.Name", "EPD3AssaultPhase::Anticipation" },
				{ "BlueprintType", "true" },
				{ "Build.Name", "EPD3AssaultPhase::Build" },
				{ "Disabled.Name", "EPD3AssaultPhase::Disabled" },
				{ "Fade.Name", "EPD3AssaultPhase::Fade" },
				{ "ModuleRelativePath", "Public/EPD3AssaultPhase.h" },
				{ "Regroup.Name", "EPD3AssaultPhase::Regroup" },
				{ "Sustain.Name", "EPD3AssaultPhase::Sustain" },
				{ "Wait.Name", "EPD3AssaultPhase::Wait" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3AssaultPhase",
				"EPD3AssaultPhase",
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
