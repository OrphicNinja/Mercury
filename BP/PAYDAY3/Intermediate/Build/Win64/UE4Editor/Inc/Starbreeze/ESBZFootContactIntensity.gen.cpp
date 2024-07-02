// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFootContactIntensity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFootContactIntensity() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFootContactIntensity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFootContactIntensity"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFootContactIntensity>()
	{
		return ESBZFootContactIntensity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFootContactIntensity(ESBZFootContactIntensity_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFootContactIntensity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity_Hash() { return 1324869908U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFootContactIntensity"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFootContactIntensity::Medium", (int64)ESBZFootContactIntensity::Medium },
				{ "ESBZFootContactIntensity::Low", (int64)ESBZFootContactIntensity::Low },
				{ "ESBZFootContactIntensity::High", (int64)ESBZFootContactIntensity::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "ESBZFootContactIntensity::High" },
				{ "Low.Name", "ESBZFootContactIntensity::Low" },
				{ "Medium.Name", "ESBZFootContactIntensity::Medium" },
				{ "ModuleRelativePath", "Public/ESBZFootContactIntensity.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFootContactIntensity",
				"ESBZFootContactIntensity",
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
