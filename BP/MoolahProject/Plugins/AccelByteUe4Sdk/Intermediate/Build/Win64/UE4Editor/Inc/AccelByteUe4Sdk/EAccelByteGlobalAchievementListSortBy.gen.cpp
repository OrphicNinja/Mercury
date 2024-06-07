// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteGlobalAchievementListSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteGlobalAchievementListSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteGlobalAchievementListSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteGlobalAchievementListSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteGlobalAchievementListSortBy>()
	{
		return EAccelByteGlobalAchievementListSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteGlobalAchievementListSortBy(EAccelByteGlobalAchievementListSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteGlobalAchievementListSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy_Hash() { return 1810151957U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteGlobalAchievementListSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGlobalAchievementListSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteGlobalAchievementListSortBy::NONE", (int64)EAccelByteGlobalAchievementListSortBy::NONE },
				{ "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT", (int64)EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT },
				{ "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_ASC", (int64)EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_ASC },
				{ "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_DESC", (int64)EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_DESC },
				{ "EAccelByteGlobalAchievementListSortBy::CREATED_AT", (int64)EAccelByteGlobalAchievementListSortBy::CREATED_AT },
				{ "EAccelByteGlobalAchievementListSortBy::CREATED_AT_ASC", (int64)EAccelByteGlobalAchievementListSortBy::CREATED_AT_ASC },
				{ "EAccelByteGlobalAchievementListSortBy::CREATED_AT_DESC", (int64)EAccelByteGlobalAchievementListSortBy::CREATED_AT_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVED_AT.Name", "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT" },
				{ "ACHIEVED_AT_ASC.Name", "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_ASC" },
				{ "ACHIEVED_AT_DESC.Name", "EAccelByteGlobalAchievementListSortBy::ACHIEVED_AT_DESC" },
				{ "BlueprintType", "true" },
				{ "CREATED_AT.Name", "EAccelByteGlobalAchievementListSortBy::CREATED_AT" },
				{ "CREATED_AT_ASC.Name", "EAccelByteGlobalAchievementListSortBy::CREATED_AT_ASC" },
				{ "CREATED_AT_DESC.Name", "EAccelByteGlobalAchievementListSortBy::CREATED_AT_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteGlobalAchievementListSortBy.h" },
				{ "NONE.Name", "EAccelByteGlobalAchievementListSortBy::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteGlobalAchievementListSortBy",
				"EAccelByteGlobalAchievementListSortBy",
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
