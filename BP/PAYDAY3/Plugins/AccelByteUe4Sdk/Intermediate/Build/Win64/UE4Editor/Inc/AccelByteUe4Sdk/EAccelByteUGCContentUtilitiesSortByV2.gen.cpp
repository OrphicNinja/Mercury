// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteUGCContentUtilitiesSortByV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteUGCContentUtilitiesSortByV2() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentUtilitiesSortByV2();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteUGCContentUtilitiesSortByV2_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentUtilitiesSortByV2, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteUGCContentUtilitiesSortByV2"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteUGCContentUtilitiesSortByV2>()
	{
		return EAccelByteUGCContentUtilitiesSortByV2_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteUGCContentUtilitiesSortByV2(EAccelByteUGCContentUtilitiesSortByV2_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteUGCContentUtilitiesSortByV2"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentUtilitiesSortByV2_Hash() { return 1785973274U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentUtilitiesSortByV2()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteUGCContentUtilitiesSortByV2"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteUGCContentUtilitiesSortByV2_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteUGCContentUtilitiesSortByV2::NONE", (int64)EAccelByteUGCContentUtilitiesSortByV2::NONE },
				{ "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME", (int64)EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME },
				{ "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_ASC", (int64)EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_ASC },
				{ "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_DESC", (int64)EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_DESC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREATED_TIME.Name", "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME" },
				{ "CREATED_TIME_ASC.Name", "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_ASC" },
				{ "CREATED_TIME_DESC.Name", "EAccelByteUGCContentUtilitiesSortByV2::CREATED_TIME_DESC" },
				{ "ModuleRelativePath", "Public/EAccelByteUGCContentUtilitiesSortByV2.h" },
				{ "NONE.Name", "EAccelByteUGCContentUtilitiesSortByV2::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteUGCContentUtilitiesSortByV2",
				"EAccelByteUGCContentUtilitiesSortByV2",
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
