// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteStatisticSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteStatisticSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteStatisticSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteStatisticSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteStatisticSortBy>()
	{
		return EAccelByteStatisticSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteStatisticSortBy(EAccelByteStatisticSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteStatisticSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy_Hash() { return 2920206732U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteStatisticSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteStatisticSortBy::NONE", (int64)EAccelByteStatisticSortBy::NONE },
				{ "EAccelByteStatisticSortBy::STAT_CODE", (int64)EAccelByteStatisticSortBy::STAT_CODE },
				{ "EAccelByteStatisticSortBy::STAT_CODE_ASC", (int64)EAccelByteStatisticSortBy::STAT_CODE_ASC },
				{ "EAccelByteStatisticSortBy::STAT_CODE_DESC", (int64)EAccelByteStatisticSortBy::STAT_CODE_DESC },
				{ "EAccelByteStatisticSortBy::CREATED_AT", (int64)EAccelByteStatisticSortBy::CREATED_AT },
				{ "EAccelByteStatisticSortBy::CREATED_AT_ASC", (int64)EAccelByteStatisticSortBy::CREATED_AT_ASC },
				{ "EAccelByteStatisticSortBy::CREATED_AT_DESC", (int64)EAccelByteStatisticSortBy::CREATED_AT_DESC },
				{ "EAccelByteStatisticSortBy::UPDATED_AT", (int64)EAccelByteStatisticSortBy::UPDATED_AT },
				{ "EAccelByteStatisticSortBy::UPDATED_AT_ASC", (int64)EAccelByteStatisticSortBy::UPDATED_AT_ASC },
				{ "EAccelByteStatisticSortBy::UPDATED_AT_DESC", (int64)EAccelByteStatisticSortBy::UPDATED_AT_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREATED_AT.Name", "EAccelByteStatisticSortBy::CREATED_AT" },
				{ "CREATED_AT_ASC.Name", "EAccelByteStatisticSortBy::CREATED_AT_ASC" },
				{ "CREATED_AT_DESC.Name", "EAccelByteStatisticSortBy::CREATED_AT_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteStatisticSortBy.h" },
				{ "NONE.Name", "EAccelByteStatisticSortBy::NONE" },
				{ "STAT_CODE.Name", "EAccelByteStatisticSortBy::STAT_CODE" },
				{ "STAT_CODE_ASC.Name", "EAccelByteStatisticSortBy::STAT_CODE_ASC" },
				{ "STAT_CODE_DESC.Name", "EAccelByteStatisticSortBy::STAT_CODE_DESC" },
				{ "UPDATED_AT.Name", "EAccelByteStatisticSortBy::UPDATED_AT" },
				{ "UPDATED_AT_ASC.Name", "EAccelByteStatisticSortBy::UPDATED_AT_ASC" },
				{ "UPDATED_AT_DESC.Name", "EAccelByteStatisticSortBy::UPDATED_AT_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteStatisticSortBy",
				"EAccelByteStatisticSortBy",
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
