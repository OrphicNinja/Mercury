// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZGameMachineStateError_generated_h
#error "ESBZGameMachineStateError.generated.h already included, missing '#pragma once' in ESBZGameMachineStateError.h"
#endif
#define STARBREEZE_ESBZGameMachineStateError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZGameMachineStateError_h


#define FOREACH_ENUM_ESBZGAMEMACHINESTATEERROR(op) \
	op(ESBZGameMachineStateError::HostDisconnected) \
	op(ESBZGameMachineStateError::HostFailedToStartLoading) \
	op(ESBZGameMachineStateError::DropInIntoEndedMission) \
	op(ESBZGameMachineStateError::WrongGameVersion) \
	op(ESBZGameMachineStateError::NoMatchingServerVersion) \
	op(ESBZGameMachineStateError::MatchmakingError) \
	op(ESBZGameMachineStateError::HostBeaconDisconnected) \
	op(ESBZGameMachineStateError::ActionBeaconTimeout) \
	op(ESBZGameMachineStateError::TravelToHostTimeout) \
	op(ESBZGameMachineStateError::StartTravellingHandshakeFailed) \
	op(ESBZGameMachineStateError::MissionEnded) \
	op(ESBZGameMachineStateError::InvalidReturnToMainMenu) \
	op(ESBZGameMachineStateError::HostMigrationFailed) \
	op(ESBZGameMachineStateError::WrongLevel) \
	op(ESBZGameMachineStateError::SteamNotSignedIn) \
	op(ESBZGameMachineStateError::EOSNotSignedIn) \
	op(ESBZGameMachineStateError::PSNNotSignedIn) \
	op(ESBZGameMachineStateError::XboxLiveNotSignedIn) \
	op(ESBZGameMachineStateError::PremiumAccountEligibilityCheck) \
	op(ESBZGameMachineStateError::NetworkNoConnection) \
	op(ESBZGameMachineStateError::FailedToFetchRequiredAccelByteData) \
	op(ESBZGameMachineStateError::LostConnectionToMatchMakingService) \
	op(ESBZGameMachineStateError::SessionIsFull) \
	op(ESBZGameMachineStateError::NebulaLoginConnectionFailed) \
	op(ESBZGameMachineStateError::NebulaLoginConnectionFailedAlreadyLinked) \
	op(ESBZGameMachineStateError::NebulaLoginFailed) \
	op(ESBZGameMachineStateError::NebulaLoginLinking) \
	op(ESBZGameMachineStateError::NebulaLoginLinkingOtherXbox) \
	op(ESBZGameMachineStateError::NebulaLoginWrongCreds) \
	op(ESBZGameMachineStateError::Unknown) \
	op(ESBZGameMachineStateError::FailedToResumeGame) \
	op(ESBZGameMachineStateError::PartySessionDoesNotExist) \
	op(ESBZGameMachineStateError::GameSessionDoesNotExist) \
	op(ESBZGameMachineStateError::ReturningFromSuspendedState) \
	op(ESBZGameMachineStateError::LobbyClosedConnection) \
	op(ESBZGameMachineStateError::PlayerBanned) 

enum class ESBZGameMachineStateError : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZGameMachineStateError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
