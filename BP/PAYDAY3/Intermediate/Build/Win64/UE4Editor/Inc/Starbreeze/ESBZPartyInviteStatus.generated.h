// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPartyInviteStatus_generated_h
#error "ESBZPartyInviteStatus.generated.h already included, missing '#pragma once' in ESBZPartyInviteStatus.h"
#endif
#define STARBREEZE_ESBZPartyInviteStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPartyInviteStatus_h


#define FOREACH_ENUM_ESBZPARTYINVITESTATUS(op) \
	op(ESBZPartyInviteStatus::Pending) \
	op(ESBZPartyInviteStatus::Active) \
	op(ESBZPartyInviteStatus::Processed) 

enum class ESBZPartyInviteStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPartyInviteStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
