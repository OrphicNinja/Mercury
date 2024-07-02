// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPreMatchLobbyStatus_generated_h
#error "ESBZPreMatchLobbyStatus.generated.h already included, missing '#pragma once' in ESBZPreMatchLobbyStatus.h"
#endif
#define STARBREEZE_ESBZPreMatchLobbyStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPreMatchLobbyStatus_h


#define FOREACH_ENUM_ESBZPREMATCHLOBBYSTATUS(op) \
	op(ESBZPreMatchLobbyStatus::WaitingForReady) \
	op(ESBZPreMatchLobbyStatus::WaitingForLoading) \
	op(ESBZPreMatchLobbyStatus::ReadyToTravel) \
	op(ESBZPreMatchLobbyStatus::MatchInProgress) \
	op(ESBZPreMatchLobbyStatus::Default) 

enum class ESBZPreMatchLobbyStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPreMatchLobbyStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
