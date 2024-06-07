// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteV2SessionQueryComparisonOp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteV2SessionQueryComparisonOp() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionQueryComparisonOp();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteV2SessionQueryComparisonOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionQueryComparisonOp, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteV2SessionQueryComparisonOp"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2SessionQueryComparisonOp>()
	{
		return EAccelByteV2SessionQueryComparisonOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteV2SessionQueryComparisonOp(EAccelByteV2SessionQueryComparisonOp_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteV2SessionQueryComparisonOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionQueryComparisonOp_Hash() { return 3995263292U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionQueryComparisonOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteV2SessionQueryComparisonOp"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionQueryComparisonOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteV2SessionQueryComparisonOp::EQUAL", (int64)EAccelByteV2SessionQueryComparisonOp::EQUAL },
				{ "EAccelByteV2SessionQueryComparisonOp::NOT_EQUAL", (int64)EAccelByteV2SessionQueryComparisonOp::NOT_EQUAL },
				{ "EAccelByteV2SessionQueryComparisonOp::GREATER_THAN", (int64)EAccelByteV2SessionQueryComparisonOp::GREATER_THAN },
				{ "EAccelByteV2SessionQueryComparisonOp::GREATER_THAN_EQUAL", (int64)EAccelByteV2SessionQueryComparisonOp::GREATER_THAN_EQUAL },
				{ "EAccelByteV2SessionQueryComparisonOp::LESS_THAN", (int64)EAccelByteV2SessionQueryComparisonOp::LESS_THAN },
				{ "EAccelByteV2SessionQueryComparisonOp::LESS_THAN_EQUAL", (int64)EAccelByteV2SessionQueryComparisonOp::LESS_THAN_EQUAL },
				{ "EAccelByteV2SessionQueryComparisonOp::CONTAINS", (int64)EAccelByteV2SessionQueryComparisonOp::CONTAINS },
				{ "EAccelByteV2SessionQueryComparisonOp::NOT_CONTAINS", (int64)EAccelByteV2SessionQueryComparisonOp::NOT_CONTAINS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONTAINS.Name", "EAccelByteV2SessionQueryComparisonOp::CONTAINS" },
				{ "EQUAL.Name", "EAccelByteV2SessionQueryComparisonOp::EQUAL" },
				{ "GREATER_THAN.Name", "EAccelByteV2SessionQueryComparisonOp::GREATER_THAN" },
				{ "GREATER_THAN_EQUAL.Name", "EAccelByteV2SessionQueryComparisonOp::GREATER_THAN_EQUAL" },
				{ "LESS_THAN.Name", "EAccelByteV2SessionQueryComparisonOp::LESS_THAN" },
				{ "LESS_THAN_EQUAL.Name", "EAccelByteV2SessionQueryComparisonOp::LESS_THAN_EQUAL" },
				{ "ModuleRelativePath", "Public/EAccelByteV2SessionQueryComparisonOp.h" },
				{ "NOT_CONTAINS.Name", "EAccelByteV2SessionQueryComparisonOp::NOT_CONTAINS" },
				{ "NOT_EQUAL.Name", "EAccelByteV2SessionQueryComparisonOp::NOT_EQUAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteV2SessionQueryComparisonOp",
				"EAccelByteV2SessionQueryComparisonOp",
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
