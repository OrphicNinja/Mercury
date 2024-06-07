// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EBanType_generated_h
#error "EBanType.generated.h already included, missing '#pragma once' in EBanType.h"
#endif
#define ACCELBYTEUE4SDK_EBanType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EBanType_h


#define FOREACH_ENUM_EBANTYPE(op) \
	op(EBanType::EMPTY) \
	op(EBanType::LOGIN) \
	op(EBanType::CHAT_SEND) \
	op(EBanType::CHAT_ALL) \
	op(EBanType::ORDER_AND_PAYMENT) \
	op(EBanType::STATISTIC) \
	op(EBanType::LEADERBOARD) \
	op(EBanType::MATCHMAKING) \
	op(EBanType::UGC_CREATE_UPDATE) 

enum class EBanType : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EBanType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
