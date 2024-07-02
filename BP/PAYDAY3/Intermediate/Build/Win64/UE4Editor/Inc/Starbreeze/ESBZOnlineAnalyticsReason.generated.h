// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZOnlineAnalyticsReason_generated_h
#error "ESBZOnlineAnalyticsReason.generated.h already included, missing '#pragma once' in ESBZOnlineAnalyticsReason.h"
#endif
#define STARBREEZE_ESBZOnlineAnalyticsReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZOnlineAnalyticsReason_h


#define FOREACH_ENUM_ESBZONLINEANALYTICSREASON(op) \
	op(ESBZOnlineAnalyticsReason::Undefined) \
	op(ESBZOnlineAnalyticsReason::InitialParty) \
	op(ESBZOnlineAnalyticsReason::Matchmaking) \
	op(ESBZOnlineAnalyticsReason::PlayTogether) \
	op(ESBZOnlineAnalyticsReason::DebugSession) \
	op(ESBZOnlineAnalyticsReason::BeaconLostConnectionToHost) \
	op(ESBZOnlineAnalyticsReason::PartyHostChangedSession) \
	op(ESBZOnlineAnalyticsReason::MatchmakingFoundNewSession) \
	op(ESBZOnlineAnalyticsReason::DebugLeaveSessionNode) \
	op(ESBZOnlineAnalyticsReason::InviteProcessing) \
	op(ESBZOnlineAnalyticsReason::InviteProcessingFailed) \
	op(ESBZOnlineAnalyticsReason::AcceptMatchCooldown) \
	op(ESBZOnlineAnalyticsReason::RestartMatchCooldown) \
	op(ESBZOnlineAnalyticsReason::DisconnectedWaitingResult) \
	op(ESBZOnlineAnalyticsReason::UserLaunchedSoloGame) \
	op(ESBZOnlineAnalyticsReason::UserLeftParty) \
	op(ESBZOnlineAnalyticsReason::ReturnToMenuFromActionPhase) \
	op(ESBZOnlineAnalyticsReason::ReturnToMenuFromLobby) \
	op(ESBZOnlineAnalyticsReason::ReturnToMenuFromMatchmaking) \
	op(ESBZOnlineAnalyticsReason::ReturnToMenuFromResult) \
	op(ESBZOnlineAnalyticsReason::GameError) \
	op(ESBZOnlineAnalyticsReason::IisError) 

enum class ESBZOnlineAnalyticsReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineAnalyticsReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
