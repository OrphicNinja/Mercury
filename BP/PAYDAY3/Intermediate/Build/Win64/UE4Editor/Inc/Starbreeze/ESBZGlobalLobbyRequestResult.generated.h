// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZGlobalLobbyRequestResult_generated_h
#error "ESBZGlobalLobbyRequestResult.generated.h already included, missing '#pragma once' in ESBZGlobalLobbyRequestResult.h"
#endif
#define STARBREEZE_ESBZGlobalLobbyRequestResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZGlobalLobbyRequestResult_h


#define FOREACH_ENUM_ESBZGLOBALLOBBYREQUESTRESULT(op) \
	op(ESBZGlobalLobbyRequestResult::Success) \
	op(ESBZGlobalLobbyRequestResult::LobbyConnectionFailed) \
	op(ESBZGlobalLobbyRequestResult::SetupChallengesFailed) 

enum class ESBZGlobalLobbyRequestResult : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZGlobalLobbyRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
