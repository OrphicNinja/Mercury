// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSuitBaseCPDBits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSuitBaseCPDBits() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitBaseCPDBits();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSuitBaseCPDBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSuitBaseCPDBits, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSuitBaseCPDBits"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSuitBaseCPDBits>()
	{
		return ESBZSuitBaseCPDBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSuitBaseCPDBits(ESBZSuitBaseCPDBits_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSuitBaseCPDBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSuitBaseCPDBits_Hash() { return 3607550655U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSuitBaseCPDBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSuitBaseCPDBits"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSuitBaseCPDBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSuitBaseCPDBits::NONE", (int64)ESBZSuitBaseCPDBits::NONE },
				{ "ESBZSuitBaseCPDBits::BIT0", (int64)ESBZSuitBaseCPDBits::BIT0 },
				{ "ESBZSuitBaseCPDBits::BIT1", (int64)ESBZSuitBaseCPDBits::BIT1 },
				{ "ESBZSuitBaseCPDBits::BIT2", (int64)ESBZSuitBaseCPDBits::BIT2 },
				{ "ESBZSuitBaseCPDBits::BIT3", (int64)ESBZSuitBaseCPDBits::BIT3 },
				{ "ESBZSuitBaseCPDBits::BIT4", (int64)ESBZSuitBaseCPDBits::BIT4 },
				{ "ESBZSuitBaseCPDBits::BIT5", (int64)ESBZSuitBaseCPDBits::BIT5 },
				{ "ESBZSuitBaseCPDBits::BIT6", (int64)ESBZSuitBaseCPDBits::BIT6 },
				{ "ESBZSuitBaseCPDBits::BIT7", (int64)ESBZSuitBaseCPDBits::BIT7 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BIT0.Name", "ESBZSuitBaseCPDBits::BIT0" },
				{ "BIT1.Name", "ESBZSuitBaseCPDBits::BIT1" },
				{ "BIT2.Name", "ESBZSuitBaseCPDBits::BIT2" },
				{ "BIT3.Name", "ESBZSuitBaseCPDBits::BIT3" },
				{ "BIT4.Name", "ESBZSuitBaseCPDBits::BIT4" },
				{ "BIT5.Name", "ESBZSuitBaseCPDBits::BIT5" },
				{ "BIT6.Name", "ESBZSuitBaseCPDBits::BIT6" },
				{ "BIT7.Name", "ESBZSuitBaseCPDBits::BIT7" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZSuitBaseCPDBits.h" },
				{ "NONE.Name", "ESBZSuitBaseCPDBits::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSuitBaseCPDBits",
				"ESBZSuitBaseCPDBits",
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
