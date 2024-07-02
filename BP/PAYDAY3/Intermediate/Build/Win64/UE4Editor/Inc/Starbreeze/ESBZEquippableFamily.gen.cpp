// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZEquippableFamily.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZEquippableFamily() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZEquippableFamily_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZEquippableFamily"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZEquippableFamily>()
	{
		return ESBZEquippableFamily_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZEquippableFamily(ESBZEquippableFamily_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZEquippableFamily"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily_Hash() { return 4006254985U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZEquippableFamily"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZEquippableFamily::HandsFree", (int64)ESBZEquippableFamily::HandsFree },
				{ "ESBZEquippableFamily::HandGun1H", (int64)ESBZEquippableFamily::HandGun1H },
				{ "ESBZEquippableFamily::HandGun2H", (int64)ESBZEquippableFamily::HandGun2H },
				{ "ESBZEquippableFamily::RiflePistolGrip", (int64)ESBZEquippableFamily::RiflePistolGrip },
				{ "ESBZEquippableFamily::RifleStraightGrip", (int64)ESBZEquippableFamily::RifleStraightGrip },
				{ "ESBZEquippableFamily::Melee1H", (int64)ESBZEquippableFamily::Melee1H },
				{ "ESBZEquippableFamily::Melee2H", (int64)ESBZEquippableFamily::Melee2H },
				{ "ESBZEquippableFamily::DualWield", (int64)ESBZEquippableFamily::DualWield },
				{ "ESBZEquippableFamily::HandheldItem", (int64)ESBZEquippableFamily::HandheldItem },
				{ "ESBZEquippableFamily::Last", (int64)ESBZEquippableFamily::Last },
				{ "ESBZEquippableFamily::First", (int64)ESBZEquippableFamily::First },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DualWield.Name", "ESBZEquippableFamily::DualWield" },
				{ "First.Name", "ESBZEquippableFamily::First" },
				{ "HandGun1H.Name", "ESBZEquippableFamily::HandGun1H" },
				{ "HandGun2H.Name", "ESBZEquippableFamily::HandGun2H" },
				{ "HandheldItem.Name", "ESBZEquippableFamily::HandheldItem" },
				{ "HandsFree.Name", "ESBZEquippableFamily::HandsFree" },
				{ "Last.Name", "ESBZEquippableFamily::Last" },
				{ "Melee1H.Name", "ESBZEquippableFamily::Melee1H" },
				{ "Melee2H.Name", "ESBZEquippableFamily::Melee2H" },
				{ "ModuleRelativePath", "Public/ESBZEquippableFamily.h" },
				{ "RiflePistolGrip.Name", "ESBZEquippableFamily::RiflePistolGrip" },
				{ "RifleStraightGrip.Name", "ESBZEquippableFamily::RifleStraightGrip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZEquippableFamily",
				"ESBZEquippableFamily",
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
