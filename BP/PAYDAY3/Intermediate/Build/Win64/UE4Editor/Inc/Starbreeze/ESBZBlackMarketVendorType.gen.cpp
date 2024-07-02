// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZBlackMarketVendorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZBlackMarketVendorType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZBlackMarketVendorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZBlackMarketVendorType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZBlackMarketVendorType>()
	{
		return ESBZBlackMarketVendorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZBlackMarketVendorType(ESBZBlackMarketVendorType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZBlackMarketVendorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType_Hash() { return 3654747363U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZBlackMarketVendorType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZBlackMarketVendorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZBlackMarketVendorType::Featured", (int64)ESBZBlackMarketVendorType::Featured },
				{ "ESBZBlackMarketVendorType::Combat", (int64)ESBZBlackMarketVendorType::Combat },
				{ "ESBZBlackMarketVendorType::Character", (int64)ESBZBlackMarketVendorType::Character },
				{ "ESBZBlackMarketVendorType::Tailor", (int64)ESBZBlackMarketVendorType::Tailor },
				{ "ESBZBlackMarketVendorType::Gold", (int64)ESBZBlackMarketVendorType::Gold },
				{ "ESBZBlackMarketVendorType::None", (int64)ESBZBlackMarketVendorType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Character.Name", "ESBZBlackMarketVendorType::Character" },
				{ "Combat.Name", "ESBZBlackMarketVendorType::Combat" },
				{ "Featured.Name", "ESBZBlackMarketVendorType::Featured" },
				{ "Gold.Name", "ESBZBlackMarketVendorType::Gold" },
				{ "ModuleRelativePath", "Public/ESBZBlackMarketVendorType.h" },
				{ "None.Name", "ESBZBlackMarketVendorType::None" },
				{ "Tailor.Name", "ESBZBlackMarketVendorType::Tailor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZBlackMarketVendorType",
				"ESBZBlackMarketVendorType",
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
