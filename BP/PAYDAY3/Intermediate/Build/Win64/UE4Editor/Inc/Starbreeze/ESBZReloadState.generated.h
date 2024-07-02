// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZReloadState_generated_h
#error "ESBZReloadState.generated.h already included, missing '#pragma once' in ESBZReloadState.h"
#endif
#define STARBREEZE_ESBZReloadState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZReloadState_h


#define FOREACH_ENUM_ESBZRELOADSTATE(op) \
	op(ESBZReloadState::None) \
	op(ESBZReloadState::StartCycle) \
	op(ESBZReloadState::RemoveMagazine) \
	op(ESBZReloadState::RemoveMagazineCycle) \
	op(ESBZReloadState::InsertMagazine) \
	op(ESBZReloadState::InsertMagazineCycle) \
	op(ESBZReloadState::InsertAmmo) \
	op(ESBZReloadState::InsertAmmoLast) \
	op(ESBZReloadState::InsertAmmoEnd) \
	op(ESBZReloadState::InsertAmmoCycle1) \
	op(ESBZReloadState::InsertAmmoCycle2) \
	op(ESBZReloadState::EndCycle) 

enum class ESBZReloadState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZReloadState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
