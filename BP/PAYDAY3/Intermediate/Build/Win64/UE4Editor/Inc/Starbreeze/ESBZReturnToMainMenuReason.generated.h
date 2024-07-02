// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZReturnToMainMenuReason_generated_h
#error "ESBZReturnToMainMenuReason.generated.h already included, missing '#pragma once' in ESBZReturnToMainMenuReason.h"
#endif
#define STARBREEZE_ESBZReturnToMainMenuReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZReturnToMainMenuReason_h


#define FOREACH_ENUM_ESBZRETURNTOMAINMENUREASON(op) \
	op(ESBZReturnToMainMenuReason::Unknown) \
	op(ESBZReturnToMainMenuReason::UserRequest) \
	op(ESBZReturnToMainMenuReason::PartyHostRequest) \
	op(ESBZReturnToMainMenuReason::MatchmakingTimeout) \
	op(ESBZReturnToMainMenuReason::MissionEnded) \
	op(ESBZReturnToMainMenuReason::QuickMatchLostConnectionToSession) \
	op(ESBZReturnToMainMenuReason::MatchmakingError) \
	op(ESBZReturnToMainMenuReason::InviteProcessing) \
	op(ESBZReturnToMainMenuReason::PartyFailedToJoinLobby) \
	op(ESBZReturnToMainMenuReason::InvalidReplay) \
	op(ESBZReturnToMainMenuReason::CanPlayOnlineCheckFailed) \
	op(ESBZReturnToMainMenuReason::JoinProcessing) \
	op(ESBZReturnToMainMenuReason::CancelMatchmaking) 

enum class ESBZReturnToMainMenuReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZReturnToMainMenuReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
