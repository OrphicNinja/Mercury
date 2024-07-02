// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteSubscriptionCycle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteSubscriptionCycle() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionCycle();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteSubscriptionCycle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionCycle, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteSubscriptionCycle"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteSubscriptionCycle>()
	{
		return EAccelByteSubscriptionCycle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteSubscriptionCycle(EAccelByteSubscriptionCycle_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteSubscriptionCycle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionCycle_Hash() { return 707501710U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionCycle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteSubscriptionCycle"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionCycle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteSubscriptionCycle::WEEKLY", (int64)EAccelByteSubscriptionCycle::WEEKLY },
				{ "EAccelByteSubscriptionCycle::MONTHLY", (int64)EAccelByteSubscriptionCycle::MONTHLY },
				{ "EAccelByteSubscriptionCycle::QUARTERLY", (int64)EAccelByteSubscriptionCycle::QUARTERLY },
				{ "EAccelByteSubscriptionCycle::YEARLY", (int64)EAccelByteSubscriptionCycle::YEARLY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteSubscriptionCycle.h" },
				{ "MONTHLY.Name", "EAccelByteSubscriptionCycle::MONTHLY" },
				{ "QUARTERLY.Name", "EAccelByteSubscriptionCycle::QUARTERLY" },
				{ "WEEKLY.Name", "EAccelByteSubscriptionCycle::WEEKLY" },
				{ "YEARLY.Name", "EAccelByteSubscriptionCycle::YEARLY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteSubscriptionCycle",
				"EAccelByteSubscriptionCycle",
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
