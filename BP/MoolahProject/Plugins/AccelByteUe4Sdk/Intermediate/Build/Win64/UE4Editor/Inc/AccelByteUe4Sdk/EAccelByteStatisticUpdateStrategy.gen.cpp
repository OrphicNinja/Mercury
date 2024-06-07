// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteStatisticUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteStatisticUpdateStrategy() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteStatisticUpdateStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticUpdateStrategy, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteStatisticUpdateStrategy"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteStatisticUpdateStrategy>()
	{
		return EAccelByteStatisticUpdateStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteStatisticUpdateStrategy(EAccelByteStatisticUpdateStrategy_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteStatisticUpdateStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticUpdateStrategy_Hash() { return 3239359447U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticUpdateStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteStatisticUpdateStrategy"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteStatisticUpdateStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteStatisticUpdateStrategy::OVERRIDE", (int64)EAccelByteStatisticUpdateStrategy::OVERRIDE },
				{ "EAccelByteStatisticUpdateStrategy::INCREMENT", (int64)EAccelByteStatisticUpdateStrategy::INCREMENT },
				{ "EAccelByteStatisticUpdateStrategy::MAX", (int64)EAccelByteStatisticUpdateStrategy::MAX },
				{ "EAccelByteStatisticUpdateStrategy::MIN", (int64)EAccelByteStatisticUpdateStrategy::MIN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "INCREMENT.Name", "EAccelByteStatisticUpdateStrategy::INCREMENT" },
				{ "MAX.Name", "EAccelByteStatisticUpdateStrategy::MAX" },
				{ "MIN.Name", "EAccelByteStatisticUpdateStrategy::MIN" },
				{ "ModuleRelativePath", "Public/EAccelByteStatisticUpdateStrategy.h" },
				{ "OVERRIDE.Name", "EAccelByteStatisticUpdateStrategy::OVERRIDE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteStatisticUpdateStrategy",
				"EAccelByteStatisticUpdateStrategy",
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
