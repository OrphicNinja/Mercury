// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZReturnToIISReason_generated_h
#error "ESBZReturnToIISReason.generated.h already included, missing '#pragma once' in ESBZReturnToIISReason.h"
#endif
#define STARBREEZE_ESBZReturnToIISReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZReturnToIISReason_h


#define FOREACH_ENUM_ESBZRETURNTOIISREASON(op) \
	op(ESBZReturnToIISReason::NoError) \
	op(ESBZReturnToIISReason::ReturnFromSuspension) \
	op(ESBZReturnToIISReason::LoggedOut) \
	op(ESBZReturnToIISReason::SwitchedUser) \
	op(ESBZReturnToIISReason::LostConnectionToTheInternet) \
	op(ESBZReturnToIISReason::InvalidLoadout) \
	op(ESBZReturnToIISReason::LoggedOutAmbiguously) 

enum class ESBZReturnToIISReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZReturnToIISReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
