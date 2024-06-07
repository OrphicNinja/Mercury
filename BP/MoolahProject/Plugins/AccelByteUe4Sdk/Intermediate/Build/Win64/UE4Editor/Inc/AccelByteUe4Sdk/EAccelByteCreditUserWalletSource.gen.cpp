// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteCreditUserWalletSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteCreditUserWalletSource() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCreditUserWalletSource();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteCreditUserWalletSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCreditUserWalletSource, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteCreditUserWalletSource"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteCreditUserWalletSource>()
	{
		return EAccelByteCreditUserWalletSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteCreditUserWalletSource(EAccelByteCreditUserWalletSource_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteCreditUserWalletSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCreditUserWalletSource_Hash() { return 1098527561U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCreditUserWalletSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteCreditUserWalletSource"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCreditUserWalletSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteCreditUserWalletSource::PURCHASE", (int64)EAccelByteCreditUserWalletSource::PURCHASE },
				{ "EAccelByteCreditUserWalletSource::IAP", (int64)EAccelByteCreditUserWalletSource::IAP },
				{ "EAccelByteCreditUserWalletSource::PROMOTION", (int64)EAccelByteCreditUserWalletSource::PROMOTION },
				{ "EAccelByteCreditUserWalletSource::ACHIEVEMENT", (int64)EAccelByteCreditUserWalletSource::ACHIEVEMENT },
				{ "EAccelByteCreditUserWalletSource::REFERRAL_BONUS", (int64)EAccelByteCreditUserWalletSource::REFERRAL_BONUS },
				{ "EAccelByteCreditUserWalletSource::REDEEM_CODE", (int64)EAccelByteCreditUserWalletSource::REDEEM_CODE },
				{ "EAccelByteCreditUserWalletSource::REFUND", (int64)EAccelByteCreditUserWalletSource::REFUND },
				{ "EAccelByteCreditUserWalletSource::OTHER", (int64)EAccelByteCreditUserWalletSource::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVEMENT.Name", "EAccelByteCreditUserWalletSource::ACHIEVEMENT" },
				{ "BlueprintType", "true" },
				{ "IAP.Name", "EAccelByteCreditUserWalletSource::IAP" },
				{ "ModuleRelativePath", "Public/EAccelByteCreditUserWalletSource.h" },
				{ "OTHER.Name", "EAccelByteCreditUserWalletSource::OTHER" },
				{ "PROMOTION.Name", "EAccelByteCreditUserWalletSource::PROMOTION" },
				{ "PURCHASE.Name", "EAccelByteCreditUserWalletSource::PURCHASE" },
				{ "REDEEM_CODE.Name", "EAccelByteCreditUserWalletSource::REDEEM_CODE" },
				{ "REFERRAL_BONUS.Name", "EAccelByteCreditUserWalletSource::REFERRAL_BONUS" },
				{ "REFUND.Name", "EAccelByteCreditUserWalletSource::REFUND" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteCreditUserWalletSource",
				"EAccelByteCreditUserWalletSource",
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
