// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteEntitlementSource_generated_h
#error "EAccelByteEntitlementSource.generated.h already included, missing '#pragma once' in EAccelByteEntitlementSource.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteEntitlementSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteEntitlementSource_h


#define FOREACH_ENUM_EACCELBYTEENTITLEMENTSOURCE(op) \
	op(EAccelByteEntitlementSource::NONE) \
	op(EAccelByteEntitlementSource::PURCHASE) \
	op(EAccelByteEntitlementSource::IAP) \
	op(EAccelByteEntitlementSource::PROMOTION) \
	op(EAccelByteEntitlementSource::ACHIEVEMENT) \
	op(EAccelByteEntitlementSource::REFERRAL_BONUS) \
	op(EAccelByteEntitlementSource::REDEEM_CODE) \
	op(EAccelByteEntitlementSource::REWARD) \
	op(EAccelByteEntitlementSource::GIFT) \
	op(EAccelByteEntitlementSource::OTHER) 

enum class EAccelByteEntitlementSource : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
