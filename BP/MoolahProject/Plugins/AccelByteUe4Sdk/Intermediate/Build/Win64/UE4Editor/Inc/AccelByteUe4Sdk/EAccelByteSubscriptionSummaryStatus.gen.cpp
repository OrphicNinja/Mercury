// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteSubscriptionSummaryStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteSubscriptionSummaryStatus() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionSummaryStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteSubscriptionSummaryStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionSummaryStatus, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteSubscriptionSummaryStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteSubscriptionSummaryStatus>()
	{
		return EAccelByteSubscriptionSummaryStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteSubscriptionSummaryStatus(EAccelByteSubscriptionSummaryStatus_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteSubscriptionSummaryStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionSummaryStatus_Hash() { return 1008921697U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionSummaryStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteSubscriptionSummaryStatus"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSubscriptionSummaryStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteSubscriptionSummaryStatus::NONE", (int64)EAccelByteSubscriptionSummaryStatus::NONE },
				{ "EAccelByteSubscriptionSummaryStatus::INIT", (int64)EAccelByteSubscriptionSummaryStatus::INIT },
				{ "EAccelByteSubscriptionSummaryStatus::ACTIVE", (int64)EAccelByteSubscriptionSummaryStatus::ACTIVE },
				{ "EAccelByteSubscriptionSummaryStatus::CANCELLED", (int64)EAccelByteSubscriptionSummaryStatus::CANCELLED },
				{ "EAccelByteSubscriptionSummaryStatus::EXPIRED", (int64)EAccelByteSubscriptionSummaryStatus::EXPIRED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTIVE.Name", "EAccelByteSubscriptionSummaryStatus::ACTIVE" },
				{ "BlueprintType", "true" },
				{ "CANCELLED.Name", "EAccelByteSubscriptionSummaryStatus::CANCELLED" },
				{ "EXPIRED.Name", "EAccelByteSubscriptionSummaryStatus::EXPIRED" },
				{ "INIT.Name", "EAccelByteSubscriptionSummaryStatus::INIT" },
				{ "ModuleRelativePath", "Public/EAccelByteSubscriptionSummaryStatus.h" },
				{ "NONE.Name", "EAccelByteSubscriptionSummaryStatus::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteSubscriptionSummaryStatus",
				"EAccelByteSubscriptionSummaryStatus",
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
