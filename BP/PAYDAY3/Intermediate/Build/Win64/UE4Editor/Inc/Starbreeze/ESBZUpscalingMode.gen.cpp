// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZUpscalingMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZUpscalingMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZUpscalingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZUpscalingMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZUpscalingMode>()
	{
		return ESBZUpscalingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZUpscalingMode(ESBZUpscalingMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZUpscalingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode_Hash() { return 4290574741U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZUpscalingMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZUpscalingMode::None", (int64)ESBZUpscalingMode::None },
				{ "ESBZUpscalingMode::Auto", (int64)ESBZUpscalingMode::Auto },
				{ "ESBZUpscalingMode::UltraQualityPlus", (int64)ESBZUpscalingMode::UltraQualityPlus },
				{ "ESBZUpscalingMode::UltraQuality", (int64)ESBZUpscalingMode::UltraQuality },
				{ "ESBZUpscalingMode::Quality", (int64)ESBZUpscalingMode::Quality },
				{ "ESBZUpscalingMode::Balanced", (int64)ESBZUpscalingMode::Balanced },
				{ "ESBZUpscalingMode::Performance", (int64)ESBZUpscalingMode::Performance },
				{ "ESBZUpscalingMode::UltraPerformance", (int64)ESBZUpscalingMode::UltraPerformance },
				{ "ESBZUpscalingMode::MAX", (int64)ESBZUpscalingMode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "ESBZUpscalingMode::Auto" },
				{ "Balanced.Name", "ESBZUpscalingMode::Balanced" },
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZUpscalingMode::MAX" },
				{ "ModuleRelativePath", "Public/ESBZUpscalingMode.h" },
				{ "None.Name", "ESBZUpscalingMode::None" },
				{ "Performance.Name", "ESBZUpscalingMode::Performance" },
				{ "Quality.Name", "ESBZUpscalingMode::Quality" },
				{ "UltraPerformance.Name", "ESBZUpscalingMode::UltraPerformance" },
				{ "UltraQuality.Name", "ESBZUpscalingMode::UltraQuality" },
				{ "UltraQualityPlus.Name", "ESBZUpscalingMode::UltraQualityPlus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZUpscalingMode",
				"ESBZUpscalingMode",
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
