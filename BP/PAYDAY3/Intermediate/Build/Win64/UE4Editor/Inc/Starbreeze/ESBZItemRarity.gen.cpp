// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZItemRarity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZItemRarity() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemRarity();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZItemRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZItemRarity, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZItemRarity"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemRarity>()
	{
		return ESBZItemRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZItemRarity(ESBZItemRarity_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZItemRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZItemRarity_Hash() { return 2146988014U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZItemRarity"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZItemRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZItemRarity::NoRarity", (int64)ESBZItemRarity::NoRarity },
				{ "ESBZItemRarity::Common", (int64)ESBZItemRarity::Common },
				{ "ESBZItemRarity::Uncommon", (int64)ESBZItemRarity::Uncommon },
				{ "ESBZItemRarity::Rare", (int64)ESBZItemRarity::Rare },
				{ "ESBZItemRarity::Mythic", (int64)ESBZItemRarity::Mythic },
				{ "ESBZItemRarity::Epic", (int64)ESBZItemRarity::Epic },
				{ "ESBZItemRarity::Legendary", (int64)ESBZItemRarity::Legendary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Common.Name", "ESBZItemRarity::Common" },
				{ "Epic.Name", "ESBZItemRarity::Epic" },
				{ "Legendary.Name", "ESBZItemRarity::Legendary" },
				{ "ModuleRelativePath", "Public/ESBZItemRarity.h" },
				{ "Mythic.Name", "ESBZItemRarity::Mythic" },
				{ "NoRarity.Name", "ESBZItemRarity::NoRarity" },
				{ "Rare.Name", "ESBZItemRarity::Rare" },
				{ "Uncommon.Name", "ESBZItemRarity::Uncommon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZItemRarity",
				"ESBZItemRarity",
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
