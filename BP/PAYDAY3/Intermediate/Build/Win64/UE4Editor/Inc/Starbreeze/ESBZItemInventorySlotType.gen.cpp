// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZItemInventorySlotType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZItemInventorySlotType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZItemInventorySlotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZItemInventorySlotType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemInventorySlotType>()
	{
		return ESBZItemInventorySlotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZItemInventorySlotType(ESBZItemInventorySlotType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZItemInventorySlotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType_Hash() { return 2202885450U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZItemInventorySlotType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZItemInventorySlotType::PremiumPreset", (int64)ESBZItemInventorySlotType::PremiumPreset },
				{ "ESBZItemInventorySlotType::Preset", (int64)ESBZItemInventorySlotType::Preset },
				{ "ESBZItemInventorySlotType::Configurable", (int64)ESBZItemInventorySlotType::Configurable },
				{ "ESBZItemInventorySlotType::Preconfig", (int64)ESBZItemInventorySlotType::Preconfig },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Configurable.Name", "ESBZItemInventorySlotType::Configurable" },
				{ "ModuleRelativePath", "Public/ESBZItemInventorySlotType.h" },
				{ "Preconfig.Name", "ESBZItemInventorySlotType::Preconfig" },
				{ "PremiumPreset.Name", "ESBZItemInventorySlotType::PremiumPreset" },
				{ "Preset.Name", "ESBZItemInventorySlotType::Preset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZItemInventorySlotType",
				"ESBZItemInventorySlotType",
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
