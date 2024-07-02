// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMatchmakingCommand_generated_h
#error "ESBZMatchmakingCommand.generated.h already included, missing '#pragma once' in ESBZMatchmakingCommand.h"
#endif
#define STARBREEZE_ESBZMatchmakingCommand_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMatchmakingCommand_h


#define FOREACH_ENUM_ESBZMATCHMAKINGCOMMAND(op) \
	op(ESBZMatchmakingCommand::RegularMatchmaking) \
	op(ESBZMatchmakingCommand::ForceListenServer) \
	op(ESBZMatchmakingCommand::ForceClient) 

enum class ESBZMatchmakingCommand : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMatchmakingCommand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
