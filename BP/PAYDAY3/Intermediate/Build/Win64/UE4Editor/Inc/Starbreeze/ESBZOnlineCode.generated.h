// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZOnlineCode_generated_h
#error "ESBZOnlineCode.generated.h already included, missing '#pragma once' in ESBZOnlineCode.h"
#endif
#define STARBREEZE_ESBZOnlineCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZOnlineCode_h


#define FOREACH_ENUM_ESBZONLINECODE(op) \
	op(ESBZOnlineCode::Success) \
	op(ESBZOnlineCode::Interrupted) \
	op(ESBZOnlineCode::PlatformTimedOut) \
	op(ESBZOnlineCode::InvalidRequest) \
	op(ESBZOnlineCode::InternalError) \
	op(ESBZOnlineCode::LostConnectionToHost) \
	op(ESBZOnlineCode::HostFailedToStartLoading) \
	op(ESBZOnlineCode::PrivilegeError) \
	op(ESBZOnlineCode::MissionAlreadyFinished) \
	op(ESBZOnlineCode::QuickMatchLostConnection) \
	op(ESBZOnlineCode::BeaconSlotReservationFailed) \
	op(ESBZOnlineCode::BeaconConnectionFailed) \
	op(ESBZOnlineCode::OnlinePlatformRequestError) \
	op(ESBZOnlineCode::WrongBeaconPort) \
	op(ESBZOnlineCode::WrongSessionPhase) \
	op(ESBZOnlineCode::PartyFailedToJoinLobby) \
	op(ESBZOnlineCode::ServerVersionMismatch) \
	op(ESBZOnlineCode::LostConnectionToMatchMakingService) \
	op(ESBZOnlineCode::MatchmakingRequestFailed) \
	op(ESBZOnlineCode::DataParsingError) \
	op(ESBZOnlineCode::PartyLeaderCancelledMatchmaking) \
	op(ESBZOnlineCode::JoinedCrossPlatformLobby) \
	op(ESBZOnlineCode::SessionIsFull) \
	op(ESBZOnlineCode::SessionDoesNotExist) \
	op(ESBZOnlineCode::ReturnToIIS) \
	op(ESBZOnlineCode::UserHasChanged) \
	op(ESBZOnlineCode::SoloGameRequested) 

enum class ESBZOnlineCode : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
