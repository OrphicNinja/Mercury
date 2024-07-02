// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSuitPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSuitPart() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitPart();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSuitPart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSuitPart, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSuitPart"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSuitPart>()
	{
		return ESBZSuitPart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSuitPart(ESBZSuitPart_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSuitPart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSuitPart_Hash() { return 4202633901U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitPart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSuitPart"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSuitPart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSuitPart::SUIT_PART_LOWER", (int64)ESBZSuitPart::SUIT_PART_LOWER },
				{ "ESBZSuitPart::SUIT_PART_UPPER", (int64)ESBZSuitPart::SUIT_PART_UPPER },
				{ "ESBZSuitPart::SUIT_PART_OUTER", (int64)ESBZSuitPart::SUIT_PART_OUTER },
				{ "ESBZSuitPart::MAX", (int64)ESBZSuitPart::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZSuitPart::MAX" },
				{ "ModuleRelativePath", "Public/ESBZSuitPart.h" },
				{ "SUIT_PART_LOWER.Name", "ESBZSuitPart::SUIT_PART_LOWER" },
				{ "SUIT_PART_OUTER.Name", "ESBZSuitPart::SUIT_PART_OUTER" },
				{ "SUIT_PART_UPPER.Name", "ESBZSuitPart::SUIT_PART_UPPER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSuitPart",
				"ESBZSuitPart",
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
