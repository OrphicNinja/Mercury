// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_EBanReason_generated_h
#error "EBanReason.generated.h already included, missing '#pragma once' in EBanReason.h"
#endif
#define ACCELBYTEUE4SDK_EBanReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_EBanReason_h


#define FOREACH_ENUM_EBANREASON(op) \
	op(EBanReason::EMPTY) \
	op(EBanReason::VIOLENCE) \
	op(EBanReason::HARASSMENT) \
	op(EBanReason::HATEFUL_CONDUCT) \
	op(EBanReason::OFFENSIVE_USERNAME) \
	op(EBanReason::IMPERSONATION) \
	op(EBanReason::MALICIOUS_CONTENT) \
	op(EBanReason::SEXUALLY_SUGGESTIVE) \
	op(EBanReason::SEXUAL_VIOLENCE) \
	op(EBanReason::EXTREME_VIOLENCE) \
	op(EBanReason::UNDERAGE_USER) \
	op(EBanReason::CHEATING) \
	op(EBanReason::TOS_VIOLATION) 

enum class EBanReason : uint8;
template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EBanReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
