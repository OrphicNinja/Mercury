// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EAccelByteOrderStatus_generated_h
#error "EAccelByteOrderStatus.generated.h already included, missing '#pragma once' in EAccelByteOrderStatus.h"
#endif
#define ACCELBYTEUE4SDK_EAccelByteOrderStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EAccelByteOrderStatus_h


#define FOREACH_ENUM_EACCELBYTEORDERSTATUS(op) \
	op(EAccelByteOrderStatus::NONE) \
	op(EAccelByteOrderStatus::INIT) \
	op(EAccelByteOrderStatus::CHARGED) \
	op(EAccelByteOrderStatus::CHARGEBACK) \
	op(EAccelByteOrderStatus::CHARGEBACK_REVERSED) \
	op(EAccelByteOrderStatus::FULFILLED) \
	op(EAccelByteOrderStatus::FULFILL_FAILED) \
	op(EAccelByteOrderStatus::REFUNDING) \
	op(EAccelByteOrderStatus::REFUNDED) \
	op(EAccelByteOrderStatus::REFUND_FAILED) \
	op(EAccelByteOrderStatus::CLOSED) \
	op(EAccelByteOrderStatus::DELETED) 

enum class EAccelByteOrderStatus : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteOrderStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
