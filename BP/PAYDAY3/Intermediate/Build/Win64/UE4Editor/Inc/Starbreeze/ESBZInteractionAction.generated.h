// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZInteractionAction_generated_h
#error "ESBZInteractionAction.generated.h already included, missing '#pragma once' in ESBZInteractionAction.h"
#endif
#define STARBREEZE_ESBZInteractionAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZInteractionAction_h


#define FOREACH_ENUM_ESBZINTERACTIONACTION(op) \
	op(ESBZInteractionAction::None) \
	op(ESBZInteractionAction::GetDown) \
	op(ESBZInteractionAction::HogTie) \
	op(ESBZInteractionAction::Follow) \
	op(ESBZInteractionAction::TradeHostage) 

enum class ESBZInteractionAction : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZInteractionAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
