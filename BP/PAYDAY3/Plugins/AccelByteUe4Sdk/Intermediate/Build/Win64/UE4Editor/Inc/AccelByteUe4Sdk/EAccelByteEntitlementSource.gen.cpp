// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteEntitlementSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteEntitlementSource() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteEntitlementSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteEntitlementSource"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementSource>()
	{
		return EAccelByteEntitlementSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteEntitlementSource(EAccelByteEntitlementSource_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteEntitlementSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource_Hash() { return 1747453275U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteEntitlementSource"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteEntitlementSource::NONE", (int64)EAccelByteEntitlementSource::NONE },
				{ "EAccelByteEntitlementSource::PURCHASE", (int64)EAccelByteEntitlementSource::PURCHASE },
				{ "EAccelByteEntitlementSource::IAP", (int64)EAccelByteEntitlementSource::IAP },
				{ "EAccelByteEntitlementSource::PROMOTION", (int64)EAccelByteEntitlementSource::PROMOTION },
				{ "EAccelByteEntitlementSource::ACHIEVEMENT", (int64)EAccelByteEntitlementSource::ACHIEVEMENT },
				{ "EAccelByteEntitlementSource::REFERRAL_BONUS", (int64)EAccelByteEntitlementSource::REFERRAL_BONUS },
				{ "EAccelByteEntitlementSource::REDEEM_CODE", (int64)EAccelByteEntitlementSource::REDEEM_CODE },
				{ "EAccelByteEntitlementSource::REWARD", (int64)EAccelByteEntitlementSource::REWARD },
				{ "EAccelByteEntitlementSource::GIFT", (int64)EAccelByteEntitlementSource::GIFT },
				{ "EAccelByteEntitlementSource::OTHER", (int64)EAccelByteEntitlementSource::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVEMENT.Name", "EAccelByteEntitlementSource::ACHIEVEMENT" },
				{ "BlueprintType", "true" },
				{ "GIFT.Name", "EAccelByteEntitlementSource::GIFT" },
				{ "IAP.Name", "EAccelByteEntitlementSource::IAP" },
				{ "ModuleRelativePath", "Public/EAccelByteEntitlementSource.h" },
				{ "NONE.Name", "EAccelByteEntitlementSource::NONE" },
				{ "OTHER.Name", "EAccelByteEntitlementSource::OTHER" },
				{ "PROMOTION.Name", "EAccelByteEntitlementSource::PROMOTION" },
				{ "PURCHASE.Name", "EAccelByteEntitlementSource::PURCHASE" },
				{ "REDEEM_CODE.Name", "EAccelByteEntitlementSource::REDEEM_CODE" },
				{ "REFERRAL_BONUS.Name", "EAccelByteEntitlementSource::REFERRAL_BONUS" },
				{ "REWARD.Name", "EAccelByteEntitlementSource::REWARD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteEntitlementSource",
				"EAccelByteEntitlementSource",
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
