// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZChatCommandTypes_generated_h
#error "ESBZChatCommandTypes.generated.h already included, missing '#pragma once' in ESBZChatCommandTypes.h"
#endif
#define STARBREEZE_ESBZChatCommandTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZChatCommandTypes_h


#define FOREACH_ENUM_ESBZCHATCOMMANDTYPES(op) \
	op(ESBZChatCommandTypes::CommandWhisperTo) \
	op(ESBZChatCommandTypes::CommandPartyChat) \
	op(ESBZChatCommandTypes::CommandGroupChat) \
	op(ESBZChatCommandTypes::CommandInvitePlayer) \
	op(ESBZChatCommandTypes::CommandVoteKick) \
	op(ESBZChatCommandTypes::CommandMute) 

enum class ESBZChatCommandTypes : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZChatCommandTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
