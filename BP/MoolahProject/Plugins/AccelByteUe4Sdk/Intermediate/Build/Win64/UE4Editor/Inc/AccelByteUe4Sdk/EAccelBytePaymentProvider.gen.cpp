// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePaymentProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePaymentProvider() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaymentProvider();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePaymentProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaymentProvider, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePaymentProvider"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePaymentProvider>()
	{
		return EAccelBytePaymentProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePaymentProvider(EAccelBytePaymentProvider_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePaymentProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaymentProvider_Hash() { return 1009389854U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaymentProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePaymentProvider"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaymentProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePaymentProvider::NONE", (int64)EAccelBytePaymentProvider::NONE },
				{ "EAccelBytePaymentProvider::WALLET", (int64)EAccelBytePaymentProvider::WALLET },
				{ "EAccelBytePaymentProvider::XSOLLA", (int64)EAccelBytePaymentProvider::XSOLLA },
				{ "EAccelBytePaymentProvider::ADYEN", (int64)EAccelBytePaymentProvider::ADYEN },
				{ "EAccelBytePaymentProvider::STRIPE", (int64)EAccelBytePaymentProvider::STRIPE },
				{ "EAccelBytePaymentProvider::CHECKOUT", (int64)EAccelBytePaymentProvider::CHECKOUT },
				{ "EAccelBytePaymentProvider::ALIPAY", (int64)EAccelBytePaymentProvider::ALIPAY },
				{ "EAccelBytePaymentProvider::WXPAY", (int64)EAccelBytePaymentProvider::WXPAY },
				{ "EAccelBytePaymentProvider::PAYPAL", (int64)EAccelBytePaymentProvider::PAYPAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADYEN.Name", "EAccelBytePaymentProvider::ADYEN" },
				{ "ALIPAY.Name", "EAccelBytePaymentProvider::ALIPAY" },
				{ "BlueprintType", "true" },
				{ "CHECKOUT.Name", "EAccelBytePaymentProvider::CHECKOUT" },
				{ "ModuleRelativePath", "Public/EAccelBytePaymentProvider.h" },
				{ "NONE.Name", "EAccelBytePaymentProvider::NONE" },
				{ "PAYPAL.Name", "EAccelBytePaymentProvider::PAYPAL" },
				{ "STRIPE.Name", "EAccelBytePaymentProvider::STRIPE" },
				{ "WALLET.Name", "EAccelBytePaymentProvider::WALLET" },
				{ "WXPAY.Name", "EAccelBytePaymentProvider::WXPAY" },
				{ "XSOLLA.Name", "EAccelBytePaymentProvider::XSOLLA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePaymentProvider",
				"EAccelBytePaymentProvider",
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
