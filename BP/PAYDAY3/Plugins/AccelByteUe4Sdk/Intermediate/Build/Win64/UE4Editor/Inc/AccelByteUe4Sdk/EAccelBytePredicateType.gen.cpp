// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePredicateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePredicateType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePredicateType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePredicateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePredicateType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePredicateType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePredicateType>()
	{
		return EAccelBytePredicateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePredicateType(EAccelBytePredicateType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePredicateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePredicateType_Hash() { return 3717190922U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePredicateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePredicateType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePredicateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePredicateType::EntitlementPredicate", (int64)EAccelBytePredicateType::EntitlementPredicate },
				{ "EAccelBytePredicateType::SeasonPassPredicate", (int64)EAccelBytePredicateType::SeasonPassPredicate },
				{ "EAccelBytePredicateType::SeasonTierPredicate", (int64)EAccelBytePredicateType::SeasonTierPredicate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EntitlementPredicate.Name", "EAccelBytePredicateType::EntitlementPredicate" },
				{ "ModuleRelativePath", "Public/EAccelBytePredicateType.h" },
				{ "SeasonPassPredicate.Name", "EAccelBytePredicateType::SeasonPassPredicate" },
				{ "SeasonTierPredicate.Name", "EAccelBytePredicateType::SeasonTierPredicate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePredicateType",
				"EAccelBytePredicateType",
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
