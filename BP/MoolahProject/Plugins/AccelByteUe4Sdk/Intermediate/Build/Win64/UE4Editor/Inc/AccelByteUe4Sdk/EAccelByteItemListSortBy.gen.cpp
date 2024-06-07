// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteItemListSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteItemListSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteItemListSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteItemListSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteItemListSortBy>()
	{
		return EAccelByteItemListSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteItemListSortBy(EAccelByteItemListSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteItemListSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy_Hash() { return 3440248578U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteItemListSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteItemListSortBy::NONE", (int64)EAccelByteItemListSortBy::NONE },
				{ "EAccelByteItemListSortBy::NAME", (int64)EAccelByteItemListSortBy::NAME },
				{ "EAccelByteItemListSortBy::NAME_DESC", (int64)EAccelByteItemListSortBy::NAME_DESC },
				{ "EAccelByteItemListSortBy::CREATEDAT", (int64)EAccelByteItemListSortBy::CREATEDAT },
				{ "EAccelByteItemListSortBy::CREATEDAT_ASC", (int64)EAccelByteItemListSortBy::CREATEDAT_ASC },
				{ "EAccelByteItemListSortBy::CREATEDAT_DESC", (int64)EAccelByteItemListSortBy::CREATEDAT_DESC },
				{ "EAccelByteItemListSortBy::UPDATEDAT", (int64)EAccelByteItemListSortBy::UPDATEDAT },
				{ "EAccelByteItemListSortBy::UPDATEDAT_ASC", (int64)EAccelByteItemListSortBy::UPDATEDAT_ASC },
				{ "EAccelByteItemListSortBy::UPDATEDAT_DESC", (int64)EAccelByteItemListSortBy::UPDATEDAT_DESC },
				{ "EAccelByteItemListSortBy::DISPLAYORDER", (int64)EAccelByteItemListSortBy::DISPLAYORDER },
				{ "EAccelByteItemListSortBy::DISPLAYORDER_ASC", (int64)EAccelByteItemListSortBy::DISPLAYORDER_ASC },
				{ "EAccelByteItemListSortBy::DISPLAYORDER_DESC", (int64)EAccelByteItemListSortBy::DISPLAYORDER_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREATEDAT.Name", "EAccelByteItemListSortBy::CREATEDAT" },
				{ "CREATEDAT_ASC.Name", "EAccelByteItemListSortBy::CREATEDAT_ASC" },
				{ "CREATEDAT_DESC.Name", "EAccelByteItemListSortBy::CREATEDAT_DESC" },
				{ "DISPLAYORDER.Name", "EAccelByteItemListSortBy::DISPLAYORDER" },
				{ "DISPLAYORDER_ASC.Name", "EAccelByteItemListSortBy::DISPLAYORDER_ASC" },
				{ "DISPLAYORDER_DESC.Name", "EAccelByteItemListSortBy::DISPLAYORDER_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteItemListSortBy.h" },
				{ "NAME.Name", "EAccelByteItemListSortBy::NAME" },
				{ "NAME_DESC.Name", "EAccelByteItemListSortBy::NAME_DESC" },
				{ "NONE.Name", "EAccelByteItemListSortBy::NONE" },
				{ "UPDATEDAT.Name", "EAccelByteItemListSortBy::UPDATEDAT" },
				{ "UPDATEDAT_ASC.Name", "EAccelByteItemListSortBy::UPDATEDAT_ASC" },
				{ "UPDATEDAT_DESC.Name", "EAccelByteItemListSortBy::UPDATEDAT_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteItemListSortBy",
				"EAccelByteItemListSortBy",
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
