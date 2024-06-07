// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelBytePaymentProvider_generated_h
#error "EAccelBytePaymentProvider.generated.h already included, missing '#pragma once' in EAccelBytePaymentProvider.h"
#endif
#define ACCELBYTEUE4SDK_EAccelBytePaymentProvider_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelBytePaymentProvider_h


#define FOREACH_ENUM_EACCELBYTEPAYMENTPROVIDER(op) \
	op(EAccelBytePaymentProvider::NONE) \
	op(EAccelBytePaymentProvider::WALLET) \
	op(EAccelBytePaymentProvider::XSOLLA) \
	op(EAccelBytePaymentProvider::ADYEN) \
	op(EAccelBytePaymentProvider::STRIPE) \
	op(EAccelBytePaymentProvider::CHECKOUT) \
	op(EAccelBytePaymentProvider::ALIPAY) \
	op(EAccelBytePaymentProvider::WXPAY) \
	op(EAccelBytePaymentProvider::PAYPAL) 

enum class EAccelBytePaymentProvider : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePaymentProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
