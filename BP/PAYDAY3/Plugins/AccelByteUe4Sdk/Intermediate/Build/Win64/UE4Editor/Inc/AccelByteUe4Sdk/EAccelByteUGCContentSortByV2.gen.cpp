// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteUGCContentSortByV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteUGCContentSortByV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteUGCContentSortByV2_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteUGCContentSortByV2"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteUGCContentSortByV2>()
	{
		return EAccelByteUGCContentSortByV2_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteUGCContentSortByV2(EAccelByteUGCContentSortByV2_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteUGCContentSortByV2"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2_Hash() { return 1602617616U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteUGCContentSortByV2"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentSortByV2_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteUGCContentSortByV2::NAME", (int64)EAccelByteUGCContentSortByV2::NAME },
				{ "EAccelByteUGCContentSortByV2::NAME_ASC", (int64)EAccelByteUGCContentSortByV2::NAME_ASC },
				{ "EAccelByteUGCContentSortByV2::NAME_DESC", (int64)EAccelByteUGCContentSortByV2::NAME_DESC },
				{ "EAccelByteUGCContentSortByV2::DOWNLOAD", (int64)EAccelByteUGCContentSortByV2::DOWNLOAD },
				{ "EAccelByteUGCContentSortByV2::DOWNLOAD_ASC", (int64)EAccelByteUGCContentSortByV2::DOWNLOAD_ASC },
				{ "EAccelByteUGCContentSortByV2::DOWNLOAD_DESC", (int64)EAccelByteUGCContentSortByV2::DOWNLOAD_DESC },
				{ "EAccelByteUGCContentSortByV2::LIKE", (int64)EAccelByteUGCContentSortByV2::LIKE },
				{ "EAccelByteUGCContentSortByV2::LIKE_ASC", (int64)EAccelByteUGCContentSortByV2::LIKE_ASC },
				{ "EAccelByteUGCContentSortByV2::LIKE_DESC", (int64)EAccelByteUGCContentSortByV2::LIKE_DESC },
				{ "EAccelByteUGCContentSortByV2::CREATED_TIME", (int64)EAccelByteUGCContentSortByV2::CREATED_TIME },
				{ "EAccelByteUGCContentSortByV2::CREATED_TIME_ASC", (int64)EAccelByteUGCContentSortByV2::CREATED_TIME_ASC },
				{ "EAccelByteUGCContentSortByV2::CREATED_TIME_DESC", (int64)EAccelByteUGCContentSortByV2::CREATED_TIME_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREATED_TIME.Name", "EAccelByteUGCContentSortByV2::CREATED_TIME" },
				{ "CREATED_TIME_ASC.Name", "EAccelByteUGCContentSortByV2::CREATED_TIME_ASC" },
				{ "CREATED_TIME_DESC.Name", "EAccelByteUGCContentSortByV2::CREATED_TIME_DESC" },
				{ "DOWNLOAD.Name", "EAccelByteUGCContentSortByV2::DOWNLOAD" },
				{ "DOWNLOAD_ASC.Name", "EAccelByteUGCContentSortByV2::DOWNLOAD_ASC" },
				{ "DOWNLOAD_DESC.Name", "EAccelByteUGCContentSortByV2::DOWNLOAD_DESC" },
				{ "LIKE.Name", "EAccelByteUGCContentSortByV2::LIKE" },
				{ "LIKE_ASC.Name", "EAccelByteUGCContentSortByV2::LIKE_ASC" },
				{ "LIKE_DESC.Name", "EAccelByteUGCContentSortByV2::LIKE_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteUGCContentSortByV2.h" },
				{ "NAME.Name", "EAccelByteUGCContentSortByV2::NAME" },
				{ "NAME_ASC.Name", "EAccelByteUGCContentSortByV2::NAME_ASC" },
				{ "NAME_DESC.Name", "EAccelByteUGCContentSortByV2::NAME_DESC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteUGCContentSortByV2",
				"EAccelByteUGCContentSortByV2",
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
