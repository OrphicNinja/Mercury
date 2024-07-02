// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZOnlineSessionRequestType_generated_h
#error "ESBZOnlineSessionRequestType.generated.h already included, missing '#pragma once' in ESBZOnlineSessionRequestType.h"
#endif
#define STARBREEZE_ESBZOnlineSessionRequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZOnlineSessionRequestType_h


#define FOREACH_ENUM_ESBZONLINESESSIONREQUESTTYPE(op) \
	op(ESBZOnlineSessionRequestType::PartyUpdate) \
	op(ESBZOnlineSessionRequestType::LobbyUpdate) \
	op(ESBZOnlineSessionRequestType::Join) \
	op(ESBZOnlineSessionRequestType::Host) \
	op(ESBZOnlineSessionRequestType::DestroyLobby) \
	op(ESBZOnlineSessionRequestType::HostParty) \
	op(ESBZOnlineSessionRequestType::DestroyParty) \
	op(ESBZOnlineSessionRequestType::Search) \
	op(ESBZOnlineSessionRequestType::RestoreLobbyBeacon) \
	op(ESBZOnlineSessionRequestType::RestorePartyBeacon) \
	op(ESBZOnlineSessionRequestType::None) 

enum class ESBZOnlineSessionRequestType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZOnlineSessionRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
