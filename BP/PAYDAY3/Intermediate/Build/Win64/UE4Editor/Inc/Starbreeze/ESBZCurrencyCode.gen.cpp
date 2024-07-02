// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCurrencyCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCurrencyCode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCurrencyCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCurrencyCode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCurrencyCode>()
	{
		return ESBZCurrencyCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCurrencyCode(ESBZCurrencyCode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCurrencyCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode_Hash() { return 1927941220U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCurrencyCode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCurrencyCode::Cash", (int64)ESBZCurrencyCode::Cash },
				{ "ESBZCurrencyCode::Gold", (int64)ESBZCurrencyCode::Gold },
				{ "ESBZCurrencyCode::Credit", (int64)ESBZCurrencyCode::Credit },
				{ "ESBZCurrencyCode::MAX", (int64)ESBZCurrencyCode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cash.Name", "ESBZCurrencyCode::Cash" },
				{ "Credit.Name", "ESBZCurrencyCode::Credit" },
				{ "Gold.Name", "ESBZCurrencyCode::Gold" },
				{ "MAX.Name", "ESBZCurrencyCode::MAX" },
				{ "ModuleRelativePath", "Public/ESBZCurrencyCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCurrencyCode",
				"ESBZCurrencyCode",
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
