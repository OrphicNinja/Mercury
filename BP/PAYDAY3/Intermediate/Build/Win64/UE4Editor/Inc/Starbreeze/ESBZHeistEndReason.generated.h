// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHeistEndReason_generated_h
#error "ESBZHeistEndReason.generated.h already included, missing '#pragma once' in ESBZHeistEndReason.h"
#endif
#define STARBREEZE_ESBZHeistEndReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHeistEndReason_h


#define FOREACH_ENUM_ESBZHEISTENDREASON(op) \
	op(ESBZHeistEndReason::GameFinished) \
	op(ESBZHeistEndReason::PlayerDroppedOut) \
	op(ESBZHeistEndReason::GameTerminated) 

enum class ESBZHeistEndReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHeistEndReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
