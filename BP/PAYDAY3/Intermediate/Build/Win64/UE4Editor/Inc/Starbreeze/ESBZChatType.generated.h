// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZChatType_generated_h
#error "ESBZChatType.generated.h already included, missing '#pragma once' in ESBZChatType.h"
#endif
#define STARBREEZE_ESBZChatType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZChatType_h


#define FOREACH_ENUM_ESBZCHATTYPE(op) \
	op(ESBZChatType::Party) \
	op(ESBZChatType::Lobby) \
	op(ESBZChatType::Whisper) \
	op(ESBZChatType::System) 

enum class ESBZChatType : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZChatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
