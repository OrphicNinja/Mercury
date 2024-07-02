// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPlaceableChargeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPlaceableChargeType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPlaceableChargeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPlaceableChargeType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlaceableChargeType>()
	{
		return ESBZPlaceableChargeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPlaceableChargeType(ESBZPlaceableChargeType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPlaceableChargeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeType_Hash() { return 2881948636U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPlaceableChargeType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPlaceableChargeType::None", (int64)ESBZPlaceableChargeType::None },
				{ "ESBZPlaceableChargeType::Ammo", (int64)ESBZPlaceableChargeType::Ammo },
				{ "ESBZPlaceableChargeType::Armor", (int64)ESBZPlaceableChargeType::Armor },
				{ "ESBZPlaceableChargeType::Health", (int64)ESBZPlaceableChargeType::Health },
				{ "ESBZPlaceableChargeType::Sentry", (int64)ESBZPlaceableChargeType::Sentry },
				{ "ESBZPlaceableChargeType::MAX", (int64)ESBZPlaceableChargeType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ammo.Name", "ESBZPlaceableChargeType::Ammo" },
				{ "Armor.Name", "ESBZPlaceableChargeType::Armor" },
				{ "BlueprintType", "true" },
				{ "Health.Name", "ESBZPlaceableChargeType::Health" },
				{ "MAX.Name", "ESBZPlaceableChargeType::MAX" },
				{ "ModuleRelativePath", "Public/ESBZPlaceableChargeType.h" },
				{ "None.Name", "ESBZPlaceableChargeType::None" },
				{ "Sentry.Name", "ESBZPlaceableChargeType::Sentry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPlaceableChargeType",
				"ESBZPlaceableChargeType",
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
