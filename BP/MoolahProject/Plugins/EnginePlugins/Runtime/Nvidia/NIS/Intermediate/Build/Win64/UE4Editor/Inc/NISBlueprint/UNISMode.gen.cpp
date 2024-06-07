// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NISBlueprint/Public/UNISMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNISMode() {}
// Cross Module References
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode();
	UPackage* Z_Construct_UPackage__Script_NISBlueprint();
// End Cross Module References
	static UEnum* UNISMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode, Z_Construct_UPackage__Script_NISBlueprint(), TEXT("UNISMode"));
		}
		return Singleton;
	}
	template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISMode>()
	{
		return UNISMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UNISMode(UNISMode_StaticEnum, TEXT("/Script/NISBlueprint"), TEXT("UNISMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NISBlueprint_UNISMode_Hash() { return 3830972355U; }
	UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NISBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UNISMode"), 0, Get_Z_Construct_UEnum_NISBlueprint_UNISMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UNISMode::Off", (int64)UNISMode::Off },
				{ "UNISMode::UltraQuality", (int64)UNISMode::UltraQuality },
				{ "UNISMode::Quality", (int64)UNISMode::Quality },
				{ "UNISMode::Balanced", (int64)UNISMode::Balanced },
				{ "UNISMode::Performance", (int64)UNISMode::Performance },
				{ "UNISMode::Custom", (int64)UNISMode::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.Name", "UNISMode::Balanced" },
				{ "BlueprintType", "true" },
				{ "Custom.Name", "UNISMode::Custom" },
				{ "ModuleRelativePath", "Public/UNISMode.h" },
				{ "Off.Name", "UNISMode::Off" },
				{ "Performance.Name", "UNISMode::Performance" },
				{ "Quality.Name", "UNISMode::Quality" },
				{ "UltraQuality.Name", "UNISMode::UltraQuality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NISBlueprint,
				nullptr,
				"UNISMode",
				"UNISMode",
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
