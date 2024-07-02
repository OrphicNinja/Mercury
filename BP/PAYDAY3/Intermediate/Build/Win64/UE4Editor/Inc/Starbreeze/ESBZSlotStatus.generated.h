// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSlotStatus_generated_h
#error "ESBZSlotStatus.generated.h already included, missing '#pragma once' in ESBZSlotStatus.h"
#endif
#define STARBREEZE_ESBZSlotStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSlotStatus_h


#define FOREACH_ENUM_ESBZSLOTSTATUS(op) \
	op(ESBZSlotStatus::Initializing) \
	op(ESBZSlotStatus::PreMatch) \
	op(ESBZSlotStatus::Connecting) \
	op(ESBZSlotStatus::JobOverview) \
	op(ESBZSlotStatus::JobOverviewReady) \
	op(ESBZSlotStatus::ActionPhase) \
	op(ESBZSlotStatus::ResultScreen) \
	op(ESBZSlotStatus::Disconnected) \
	op(ESBZSlotStatus::Default) 

enum class ESBZSlotStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSlotStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
