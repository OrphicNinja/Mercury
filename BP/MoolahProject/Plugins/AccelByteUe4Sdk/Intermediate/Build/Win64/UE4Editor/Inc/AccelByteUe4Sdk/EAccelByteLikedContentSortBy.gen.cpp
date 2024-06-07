// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteLikedContentSortBy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteLikedContentSortBy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLikedContentSortBy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteLikedContentSortBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLikedContentSortBy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteLikedContentSortBy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteLikedContentSortBy>()
	{
		return EAccelByteLikedContentSortBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteLikedContentSortBy(EAccelByteLikedContentSortBy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteLikedContentSortBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLikedContentSortBy_Hash() { return 3344726245U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLikedContentSortBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteLikedContentSortBy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteLikedContentSortBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteLikedContentSortBy::NAME", (int64)EAccelByteLikedContentSortBy::NAME },
				{ "EAccelByteLikedContentSortBy::DOWNLOAD", (int64)EAccelByteLikedContentSortBy::DOWNLOAD },
				{ "EAccelByteLikedContentSortBy::LIKE", (int64)EAccelByteLikedContentSortBy::LIKE },
				{ "EAccelByteLikedContentSortBy::DATE", (int64)EAccelByteLikedContentSortBy::DATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DATE.Name", "EAccelByteLikedContentSortBy::DATE" },
				{ "DOWNLOAD.Name", "EAccelByteLikedContentSortBy::DOWNLOAD" },
				{ "LIKE.Name", "EAccelByteLikedContentSortBy::LIKE" },
				{ "ModuleRelativePath", "Public/EAccelByteLikedContentSortBy.h" },
				{ "NAME.Name", "EAccelByteLikedContentSortBy::NAME" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteLikedContentSortBy",
				"EAccelByteLikedContentSortBy",
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
