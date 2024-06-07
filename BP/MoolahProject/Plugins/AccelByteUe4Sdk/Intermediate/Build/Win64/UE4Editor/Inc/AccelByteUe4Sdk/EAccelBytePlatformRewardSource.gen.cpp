// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePlatformRewardSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePlatformRewardSource() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePlatformRewardSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePlatformRewardSource"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePlatformRewardSource>()
	{
		return EAccelBytePlatformRewardSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePlatformRewardSource(EAccelBytePlatformRewardSource_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePlatformRewardSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource_Hash() { return 4231481761U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePlatformRewardSource"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformRewardSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePlatformRewardSource::NONE", (int64)EAccelBytePlatformRewardSource::NONE },
				{ "EAccelBytePlatformRewardSource::PURCHASE", (int64)EAccelBytePlatformRewardSource::PURCHASE },
				{ "EAccelBytePlatformRewardSource::IAP", (int64)EAccelBytePlatformRewardSource::IAP },
				{ "EAccelBytePlatformRewardSource::PROMOTION", (int64)EAccelBytePlatformRewardSource::PROMOTION },
				{ "EAccelBytePlatformRewardSource::ACHIEVEMENT", (int64)EAccelBytePlatformRewardSource::ACHIEVEMENT },
				{ "EAccelBytePlatformRewardSource::REFERRAL_BONUS", (int64)EAccelBytePlatformRewardSource::REFERRAL_BONUS },
				{ "EAccelBytePlatformRewardSource::REDEEM_CODE", (int64)EAccelBytePlatformRewardSource::REDEEM_CODE },
				{ "EAccelBytePlatformRewardSource::REWARD", (int64)EAccelBytePlatformRewardSource::REWARD },
				{ "EAccelBytePlatformRewardSource::GIFT", (int64)EAccelBytePlatformRewardSource::GIFT },
				{ "EAccelBytePlatformRewardSource::DLC", (int64)EAccelBytePlatformRewardSource::DLC },
				{ "EAccelBytePlatformRewardSource::OTHER", (int64)EAccelBytePlatformRewardSource::OTHER },
				{ "EAccelBytePlatformRewardSource::SELL_BACK", (int64)EAccelBytePlatformRewardSource::SELL_BACK },
				{ "EAccelBytePlatformRewardSource::CONSUME_ENTITLEMENT", (int64)EAccelBytePlatformRewardSource::CONSUME_ENTITLEMENT },
				{ "EAccelBytePlatformRewardSource::ORDER_REVOCATION", (int64)EAccelBytePlatformRewardSource::ORDER_REVOCATION },
				{ "EAccelBytePlatformRewardSource::DLC_REVOCATION", (int64)EAccelBytePlatformRewardSource::DLC_REVOCATION },
				{ "EAccelBytePlatformRewardSource::PAYMENT", (int64)EAccelBytePlatformRewardSource::PAYMENT },
				{ "EAccelBytePlatformRewardSource::EXPIRATION", (int64)EAccelBytePlatformRewardSource::EXPIRATION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVEMENT.Name", "EAccelBytePlatformRewardSource::ACHIEVEMENT" },
				{ "BlueprintType", "true" },
				{ "CONSUME_ENTITLEMENT.Name", "EAccelBytePlatformRewardSource::CONSUME_ENTITLEMENT" },
				{ "DLC.Name", "EAccelBytePlatformRewardSource::DLC" },
				{ "DLC_REVOCATION.Name", "EAccelBytePlatformRewardSource::DLC_REVOCATION" },
				{ "EXPIRATION.Name", "EAccelBytePlatformRewardSource::EXPIRATION" },
				{ "GIFT.Name", "EAccelBytePlatformRewardSource::GIFT" },
				{ "IAP.Name", "EAccelBytePlatformRewardSource::IAP" },
				{ "ModuleRelativePath", "Public/EAccelBytePlatformRewardSource.h" },
				{ "NONE.Name", "EAccelBytePlatformRewardSource::NONE" },
				{ "ORDER_REVOCATION.Name", "EAccelBytePlatformRewardSource::ORDER_REVOCATION" },
				{ "OTHER.Name", "EAccelBytePlatformRewardSource::OTHER" },
				{ "PAYMENT.Name", "EAccelBytePlatformRewardSource::PAYMENT" },
				{ "PROMOTION.Name", "EAccelBytePlatformRewardSource::PROMOTION" },
				{ "PURCHASE.Name", "EAccelBytePlatformRewardSource::PURCHASE" },
				{ "REDEEM_CODE.Name", "EAccelBytePlatformRewardSource::REDEEM_CODE" },
				{ "REFERRAL_BONUS.Name", "EAccelBytePlatformRewardSource::REFERRAL_BONUS" },
				{ "REWARD.Name", "EAccelBytePlatformRewardSource::REWARD" },
				{ "SELL_BACK.Name", "EAccelBytePlatformRewardSource::SELL_BACK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePlatformRewardSource",
				"EAccelBytePlatformRewardSource",
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
