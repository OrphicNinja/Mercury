// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZPresenceState_generated_h
#error "ESBZPresenceState.generated.h already included, missing '#pragma once' in ESBZPresenceState.h"
#endif
#define STARBREEZE_ESBZPresenceState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZPresenceState_h


#define FOREACH_ENUM_ESBZPRESENCESTATE(op) \
	op(ESBZPresenceState::None) \
	op(ESBZPresenceState::InMenu) \
	op(ESBZPresenceState::InLobby) \
	op(ESBZPresenceState::InLevel) 

enum class ESBZPresenceState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZPresenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
