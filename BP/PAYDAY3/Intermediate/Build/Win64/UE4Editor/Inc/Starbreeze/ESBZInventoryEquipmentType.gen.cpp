// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZInventoryEquipmentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZInventoryEquipmentType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZInventoryEquipmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZInventoryEquipmentType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZInventoryEquipmentType>()
	{
		return ESBZInventoryEquipmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZInventoryEquipmentType(ESBZInventoryEquipmentType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZInventoryEquipmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType_Hash() { return 3601420798U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZInventoryEquipmentType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZInventoryEquipmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZInventoryEquipmentType::PrimaryWeapon", (int64)ESBZInventoryEquipmentType::PrimaryWeapon },
				{ "ESBZInventoryEquipmentType::SecondaryWeapon", (int64)ESBZInventoryEquipmentType::SecondaryWeapon },
				{ "ESBZInventoryEquipmentType::OverkillWeapon", (int64)ESBZInventoryEquipmentType::OverkillWeapon },
				{ "ESBZInventoryEquipmentType::Armor", (int64)ESBZInventoryEquipmentType::Armor },
				{ "ESBZInventoryEquipmentType::Placeable", (int64)ESBZInventoryEquipmentType::Placeable },
				{ "ESBZInventoryEquipmentType::Throwable", (int64)ESBZInventoryEquipmentType::Throwable },
				{ "ESBZInventoryEquipmentType::Tools", (int64)ESBZInventoryEquipmentType::Tools },
				{ "ESBZInventoryEquipmentType::Skills", (int64)ESBZInventoryEquipmentType::Skills },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Armor.Name", "ESBZInventoryEquipmentType::Armor" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZInventoryEquipmentType.h" },
				{ "OverkillWeapon.Name", "ESBZInventoryEquipmentType::OverkillWeapon" },
				{ "Placeable.Name", "ESBZInventoryEquipmentType::Placeable" },
				{ "PrimaryWeapon.Name", "ESBZInventoryEquipmentType::PrimaryWeapon" },
				{ "SecondaryWeapon.Name", "ESBZInventoryEquipmentType::SecondaryWeapon" },
				{ "Skills.Name", "ESBZInventoryEquipmentType::Skills" },
				{ "Throwable.Name", "ESBZInventoryEquipmentType::Throwable" },
				{ "Tools.Name", "ESBZInventoryEquipmentType::Tools" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZInventoryEquipmentType",
				"ESBZInventoryEquipmentType",
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
