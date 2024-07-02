// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZReturnToLoginReason_generated_h
#error "ESBZReturnToLoginReason.generated.h already included, missing '#pragma once' in ESBZReturnToLoginReason.h"
#endif
#define STARBREEZE_ESBZReturnToLoginReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZReturnToLoginReason_h


#define FOREACH_ENUM_ESBZRETURNTOLOGINREASON(op) \
	op(ESBZReturnToLoginReason::Unknown) \
	op(ESBZReturnToLoginReason::FailedToFetchBackendData) 

enum class ESBZReturnToLoginReason : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZReturnToLoginReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
