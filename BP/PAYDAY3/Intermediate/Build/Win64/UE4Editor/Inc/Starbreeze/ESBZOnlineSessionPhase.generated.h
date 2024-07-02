// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZOnlineSessionPhase_generated_h
#error "ESBZOnlineSessionPhase.generated.h already included, missing '#pragma once' in ESBZOnlineSessionPhase.h"
#endif
#define STARBREEZE_ESBZOnlineSessionPhase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZOnlineSessionPhase_h


#define FOREACH_ENUM_ESBZONLINESESSIONPHASE(op) \
	op(ESBZOnlineSessionPhase::Undefined) \
	op(ESBZOnlineSessionPhase::PartyCreation) \
	op(ESBZOnlineSessionPhase::Matchmaking) \
	op(ESBZOnlineSessionPhase::Lobby) \
	op(ESBZOnlineSessionPhase::Loading) \
	op(ESBZOnlineSessionPhase::WaitActionPhase) \
	op(ESBZOnlineSessionPhase::DSWaitingForClients) \
	op(ESBZOnlineSessionPhase::ActionPhase) \
	op(ESBZOnlineSessionPhase::ActionPhaseEnd) \
	op(ESBZOnlineSessionPhase::WaitingResult) \
	op(ESBZOnlineSessionPhase::ResultSuccess) \
	op(ESBZOnlineSessionPhase::ResultFail) 

enum class ESBZOnlineSessionPhase : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineSessionPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
