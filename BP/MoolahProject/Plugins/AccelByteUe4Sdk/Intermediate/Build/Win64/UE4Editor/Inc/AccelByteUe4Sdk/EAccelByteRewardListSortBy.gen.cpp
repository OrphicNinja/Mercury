// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteRewardListSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteRewardListSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteRewardListSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteRewardListSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteRewardListSortBy>()
	{
		return EAccelByteRewardListSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteRewardListSortBy(EAccelByteRewardListSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteRewardListSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy_Hash() { return 2057206629U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteRewardListSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteRewardListSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteRewardListSortBy::NONE", (int64)EAccelByteRewardListSortBy::NONE },
				{ "EAccelByteRewardListSortBy::NAMESPACE", (int64)EAccelByteRewardListSortBy::NAMESPACE },
				{ "EAccelByteRewardListSortBy::NAMESPACE_ASC", (int64)EAccelByteRewardListSortBy::NAMESPACE_ASC },
				{ "EAccelByteRewardListSortBy::NAMESPACE_DESC", (int64)EAccelByteRewardListSortBy::NAMESPACE_DESC },
				{ "EAccelByteRewardListSortBy::REWARDCODE", (int64)EAccelByteRewardListSortBy::REWARDCODE },
				{ "EAccelByteRewardListSortBy::REWARDCODE_ASC", (int64)EAccelByteRewardListSortBy::REWARDCODE_ASC },
				{ "EAccelByteRewardListSortBy::REWARDCODE_DESC", (int64)EAccelByteRewardListSortBy::REWARDCODE_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteRewardListSortBy.h" },
				{ "NAMESPACE.Name", "EAccelByteRewardListSortBy::NAMESPACE" },
				{ "NAMESPACE_ASC.Name", "EAccelByteRewardListSortBy::NAMESPACE_ASC" },
				{ "NAMESPACE_DESC.Name", "EAccelByteRewardListSortBy::NAMESPACE_DESC" },
				{ "NONE.Name", "EAccelByteRewardListSortBy::NONE" },
				{ "REWARDCODE.Name", "EAccelByteRewardListSortBy::REWARDCODE" },
				{ "REWARDCODE_ASC.Name", "EAccelByteRewardListSortBy::REWARDCODE_ASC" },
				{ "REWARDCODE_DESC.Name", "EAccelByteRewardListSortBy::REWARDCODE_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteRewardListSortBy",
				"EAccelByteRewardListSortBy",
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
