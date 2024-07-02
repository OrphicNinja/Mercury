// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteSubscriptionSummaryStatus_generated_h
#error "EAccelByteSubscriptionSummaryStatus.generated.h already included, missing '#pragma once' in EAccelByteSubscriptionSummaryStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteSubscriptionSummaryStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteSubscriptionSummaryStatus_h


#define FOREACH_ENUM_EACCELBYTESUBSCRIPTIONSUMMARYSTATUS(op) \
	op(EAccelByteSubscriptionSummaryStatus::NONE) \
	op(EAccelByteSubscriptionSummaryStatus::INIT) \
	op(EAccelByteSubscriptionSummaryStatus::ACTIVE) \
	op(EAccelByteSubscriptionSummaryStatus::CANCELLED) \
	op(EAccelByteSubscriptionSummaryStatus::EXPIRED) 

enum class EAccelByteSubscriptionSummaryStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteSubscriptionSummaryStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
