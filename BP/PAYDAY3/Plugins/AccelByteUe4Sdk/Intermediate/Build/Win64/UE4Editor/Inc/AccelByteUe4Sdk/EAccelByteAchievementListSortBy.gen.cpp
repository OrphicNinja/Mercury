// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteAchievementListSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteAchievementListSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteAchievementListSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteAchievementListSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteAchievementListSortBy>()
	{
		return EAccelByteAchievementListSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteAchievementListSortBy(EAccelByteAchievementListSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteAchievementListSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy_Hash() { return 3476302473U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteAchievementListSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAchievementListSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteAchievementListSortBy::NONE", (int64)EAccelByteAchievementListSortBy::NONE },
				{ "EAccelByteAchievementListSortBy::LISTORDER", (int64)EAccelByteAchievementListSortBy::LISTORDER },
				{ "EAccelByteAchievementListSortBy::LISTORDER_ASC", (int64)EAccelByteAchievementListSortBy::LISTORDER_ASC },
				{ "EAccelByteAchievementListSortBy::LISTORDER_DESC", (int64)EAccelByteAchievementListSortBy::LISTORDER_DESC },
				{ "EAccelByteAchievementListSortBy::CREATED_AT", (int64)EAccelByteAchievementListSortBy::CREATED_AT },
				{ "EAccelByteAchievementListSortBy::CREATED_AT_ASC", (int64)EAccelByteAchievementListSortBy::CREATED_AT_ASC },
				{ "EAccelByteAchievementListSortBy::CREATED_AT_DESC", (int64)EAccelByteAchievementListSortBy::CREATED_AT_DESC },
				{ "EAccelByteAchievementListSortBy::UPDATED_AT", (int64)EAccelByteAchievementListSortBy::UPDATED_AT },
				{ "EAccelByteAchievementListSortBy::UPDATED_AT_ASC", (int64)EAccelByteAchievementListSortBy::UPDATED_AT_ASC },
				{ "EAccelByteAchievementListSortBy::UPDATED_AT_DESC", (int64)EAccelByteAchievementListSortBy::UPDATED_AT_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREATED_AT.Name", "EAccelByteAchievementListSortBy::CREATED_AT" },
				{ "CREATED_AT_ASC.Name", "EAccelByteAchievementListSortBy::CREATED_AT_ASC" },
				{ "CREATED_AT_DESC.Name", "EAccelByteAchievementListSortBy::CREATED_AT_DESC" },
				{ "LISTORDER.Name", "EAccelByteAchievementListSortBy::LISTORDER" },
				{ "LISTORDER_ASC.Name", "EAccelByteAchievementListSortBy::LISTORDER_ASC" },
				{ "LISTORDER_DESC.Name", "EAccelByteAchievementListSortBy::LISTORDER_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteAchievementListSortBy.h" },
				{ "NONE.Name", "EAccelByteAchievementListSortBy::NONE" },
				{ "UPDATED_AT.Name", "EAccelByteAchievementListSortBy::UPDATED_AT" },
				{ "UPDATED_AT_ASC.Name", "EAccelByteAchievementListSortBy::UPDATED_AT_ASC" },
				{ "UPDATED_AT_DESC.Name", "EAccelByteAchievementListSortBy::UPDATED_AT_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteAchievementListSortBy",
				"EAccelByteAchievementListSortBy",
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
