// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSessionState_generated_h
#error "ESBZSessionState.generated.h already included, missing '#pragma once' in ESBZSessionState.h"
#endif
#define STARBREEZE_ESBZSessionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSessionState_h


#define FOREACH_ENUM_ESBZSESSIONSTATE(op) \
	op(ESBZSessionState::Ready) \
	op(ESBZSessionState::HostingInProgress) \
	op(ESBZSessionState::SearchInProgress) \
	op(ESBZSessionState::JoinInProgress) \
	op(ESBZSessionState::LeaveInProgress) 

enum class ESBZSessionState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSessionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
