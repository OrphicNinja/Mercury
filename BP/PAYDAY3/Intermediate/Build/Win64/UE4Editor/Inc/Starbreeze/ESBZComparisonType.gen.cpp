// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZComparisonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZComparisonType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZComparisonType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZComparisonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZComparisonType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZComparisonType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZComparisonType>()
	{
		return ESBZComparisonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZComparisonType(ESBZComparisonType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZComparisonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZComparisonType_Hash() { return 2347054668U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZComparisonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZComparisonType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZComparisonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZComparisonType::EQUAL", (int64)ESBZComparisonType::EQUAL },
				{ "ESBZComparisonType::SMALLER", (int64)ESBZComparisonType::SMALLER },
				{ "ESBZComparisonType::SMALLEREQUAL", (int64)ESBZComparisonType::SMALLEREQUAL },
				{ "ESBZComparisonType::LARGER", (int64)ESBZComparisonType::LARGER },
				{ "ESBZComparisonType::LARGEREQUAL", (int64)ESBZComparisonType::LARGEREQUAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EQUAL.Name", "ESBZComparisonType::EQUAL" },
				{ "LARGER.Name", "ESBZComparisonType::LARGER" },
				{ "LARGEREQUAL.Name", "ESBZComparisonType::LARGEREQUAL" },
				{ "ModuleRelativePath", "Public/ESBZComparisonType.h" },
				{ "SMALLER.Name", "ESBZComparisonType::SMALLER" },
				{ "SMALLEREQUAL.Name", "ESBZComparisonType::SMALLEREQUAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZComparisonType",
				"ESBZComparisonType",
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
