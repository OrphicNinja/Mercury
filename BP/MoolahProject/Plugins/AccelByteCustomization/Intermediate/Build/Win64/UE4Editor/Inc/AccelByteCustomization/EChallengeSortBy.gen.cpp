// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/EChallengeSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeSortBy() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
	static UEnum* EChallengeSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("EChallengeSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EChallengeSortBy>()
	{
		return EChallengeSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeSortBy(EChallengeSortBy_StaticEnum, TEXT("/Script/AccelByteCustomization"), TEXT("EChallengeSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Hash() { return 1418857127U; }
	UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeSortBy"), 0, Get_Z_Construct_UEnum_AccelByteCustomization_EChallengeSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeSortBy::NONE", (int64)EChallengeSortBy::NONE },
				{ "EChallengeSortBy::NAME_ASC", (int64)EChallengeSortBy::NAME_ASC },
				{ "EChallengeSortBy::NAME_DESC", (int64)EChallengeSortBy::NAME_DESC },
				{ "EChallengeSortBy::ORDER_ASC", (int64)EChallengeSortBy::ORDER_ASC },
				{ "EChallengeSortBy::ORDER_DESC", (int64)EChallengeSortBy::ORDER_DESC },
				{ "EChallengeSortBy::TAGS_ASC", (int64)EChallengeSortBy::TAGS_ASC },
				{ "EChallengeSortBy::TAGS_DESC", (int64)EChallengeSortBy::TAGS_DESC },
				{ "EChallengeSortBy::STATUS_ASC", (int64)EChallengeSortBy::STATUS_ASC },
				{ "EChallengeSortBy::STATUS_DESC", (int64)EChallengeSortBy::STATUS_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EChallengeSortBy.h" },
				{ "NAME_ASC.Name", "EChallengeSortBy::NAME_ASC" },
				{ "NAME_DESC.Name", "EChallengeSortBy::NAME_DESC" },
				{ "NONE.Name", "EChallengeSortBy::NONE" },
				{ "ORDER_ASC.Name", "EChallengeSortBy::ORDER_ASC" },
				{ "ORDER_DESC.Name", "EChallengeSortBy::ORDER_DESC" },
				{ "STATUS_ASC.Name", "EChallengeSortBy::STATUS_ASC" },
				{ "STATUS_DESC.Name", "EChallengeSortBy::STATUS_DESC" },
				{ "TAGS_ASC.Name", "EChallengeSortBy::TAGS_ASC" },
				{ "TAGS_DESC.Name", "EChallengeSortBy::TAGS_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteCustomization,
				nullptr,
				"EChallengeSortBy",
				"EChallengeSortBy",
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
