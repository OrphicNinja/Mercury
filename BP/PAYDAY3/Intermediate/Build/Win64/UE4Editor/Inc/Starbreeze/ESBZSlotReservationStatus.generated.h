// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZSlotReservationStatus_generated_h
#error "ESBZSlotReservationStatus.generated.h already included, missing '#pragma once' in ESBZSlotReservationStatus.h"
#endif
#define STARBREEZE_ESBZSlotReservationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZSlotReservationStatus_h


#define FOREACH_ENUM_ESBZSLOTRESERVATIONSTATUS(op) \
	op(ESBZSlotReservationStatus::Failure) \
	op(ESBZSlotReservationStatus::Success) \
	op(ESBZSlotReservationStatus::SlotAlreadyReserved) \
	op(ESBZSlotReservationStatus::NoFreeSlots) \
	op(ESBZSlotReservationStatus::InvalidPlayerIdReceived) 

enum class ESBZSlotReservationStatus : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZSlotReservationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
