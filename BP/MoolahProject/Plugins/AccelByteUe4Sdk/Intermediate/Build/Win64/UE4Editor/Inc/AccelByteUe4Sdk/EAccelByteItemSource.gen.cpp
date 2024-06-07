// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteItemSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteItemSource() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemSource();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteItemSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemSource, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteItemSource"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteItemSource>()
	{
		return EAccelByteItemSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteItemSource(EAccelByteItemSource_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteItemSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemSource_Hash() { return 1622519211U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteItemSource"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteItemSource::NONE", (int64)EAccelByteItemSource::NONE },
				{ "EAccelByteItemSource::PURCHASE", (int64)EAccelByteItemSource::PURCHASE },
				{ "EAccelByteItemSource::IAP", (int64)EAccelByteItemSource::IAP },
				{ "EAccelByteItemSource::PROMOTION", (int64)EAccelByteItemSource::PROMOTION },
				{ "EAccelByteItemSource::ACHIEVEMENT", (int64)EAccelByteItemSource::ACHIEVEMENT },
				{ "EAccelByteItemSource::REFERRAL_BONUS", (int64)EAccelByteItemSource::REFERRAL_BONUS },
				{ "EAccelByteItemSource::REDEEM_CODE", (int64)EAccelByteItemSource::REDEEM_CODE },
				{ "EAccelByteItemSource::REWARD", (int64)EAccelByteItemSource::REWARD },
				{ "EAccelByteItemSource::GIFT", (int64)EAccelByteItemSource::GIFT },
				{ "EAccelByteItemSource::DLC", (int64)EAccelByteItemSource::DLC },
				{ "EAccelByteItemSource::SELL_BACK", (int64)EAccelByteItemSource::SELL_BACK },
				{ "EAccelByteItemSource::CONSUME_ENTITLEMENT", (int64)EAccelByteItemSource::CONSUME_ENTITLEMENT },
				{ "EAccelByteItemSource::ORDER_REVOCATION", (int64)EAccelByteItemSource::ORDER_REVOCATION },
				{ "EAccelByteItemSource::PAYMENT", (int64)EAccelByteItemSource::PAYMENT },
				{ "EAccelByteItemSource::EXPIRATION", (int64)EAccelByteItemSource::EXPIRATION },
				{ "EAccelByteItemSource::IAP_CHARGEBACK_REVERSED", (int64)EAccelByteItemSource::IAP_CHARGEBACK_REVERSED },
				{ "EAccelByteItemSource::OTHER", (int64)EAccelByteItemSource::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVEMENT.Name", "EAccelByteItemSource::ACHIEVEMENT" },
				{ "BlueprintType", "true" },
				{ "CONSUME_ENTITLEMENT.Name", "EAccelByteItemSource::CONSUME_ENTITLEMENT" },
				{ "DLC.Name", "EAccelByteItemSource::DLC" },
				{ "EXPIRATION.Name", "EAccelByteItemSource::EXPIRATION" },
				{ "GIFT.Name", "EAccelByteItemSource::GIFT" },
				{ "IAP.Name", "EAccelByteItemSource::IAP" },
				{ "IAP_CHARGEBACK_REVERSED.Name", "EAccelByteItemSource::IAP_CHARGEBACK_REVERSED" },
				{ "ModuleRelativePath", "Public/EAccelByteItemSource.h" },
				{ "NONE.Name", "EAccelByteItemSource::NONE" },
				{ "ORDER_REVOCATION.Name", "EAccelByteItemSource::ORDER_REVOCATION" },
				{ "OTHER.Name", "EAccelByteItemSource::OTHER" },
				{ "PAYMENT.Name", "EAccelByteItemSource::PAYMENT" },
				{ "PROMOTION.Name", "EAccelByteItemSource::PROMOTION" },
				{ "PURCHASE.Name", "EAccelByteItemSource::PURCHASE" },
				{ "REDEEM_CODE.Name", "EAccelByteItemSource::REDEEM_CODE" },
				{ "REFERRAL_BONUS.Name", "EAccelByteItemSource::REFERRAL_BONUS" },
				{ "REWARD.Name", "EAccelByteItemSource::REWARD" },
				{ "SELL_BACK.Name", "EAccelByteItemSource::SELL_BACK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteItemSource",
				"EAccelByteItemSource",
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
