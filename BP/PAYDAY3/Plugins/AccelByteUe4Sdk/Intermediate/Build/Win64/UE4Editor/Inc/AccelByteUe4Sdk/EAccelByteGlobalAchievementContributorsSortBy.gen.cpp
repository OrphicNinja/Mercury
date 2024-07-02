// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteGlobalAchievementContributorsSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteGlobalAchievementContributorsSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteGlobalAchievementContributorsSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteGlobalAchievementContributorsSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGlobalAchievementContributorsSortBy>()
	{
		return EAccelByteGlobalAchievementContributorsSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteGlobalAchievementContributorsSortBy(EAccelByteGlobalAchievementContributorsSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteGlobalAchievementContributorsSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy_Hash() { return 945332646U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteGlobalAchievementContributorsSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementContributorsSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteGlobalAchievementContributorsSortBy::NONE", (int64)EAccelByteGlobalAchievementContributorsSortBy::NONE },
				{ "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE", (int64)EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE },
				{ "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_ASC", (int64)EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_ASC },
				{ "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_DESC", (int64)EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONTRIBUTED_VALUE.Name", "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE" },
				{ "CONTRIBUTED_VALUE_ASC.Name", "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_ASC" },
				{ "CONTRIBUTED_VALUE_DESC.Name", "EAccelByteGlobalAchievementContributorsSortBy::CONTRIBUTED_VALUE_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteGlobalAchievementContributorsSortBy.h" },
				{ "NONE.Name", "EAccelByteGlobalAchievementContributorsSortBy::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteGlobalAchievementContributorsSortBy",
				"EAccelByteGlobalAchievementContributorsSortBy",
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
