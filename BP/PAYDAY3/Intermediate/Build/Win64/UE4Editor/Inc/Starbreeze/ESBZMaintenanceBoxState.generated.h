// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZMaintenanceBoxState_generated_h
#error "ESBZMaintenanceBoxState.generated.h already included, missing '#pragma once' in ESBZMaintenanceBoxState.h"
#endif
#define STARBREEZE_ESBZMaintenanceBoxState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZMaintenanceBoxState_h


#define FOREACH_ENUM_ESBZMAINTENANCEBOXSTATE(op) \
	op(ESBZMaintenanceBoxState::Off) \
	op(ESBZMaintenanceBoxState::On) \
	op(ESBZMaintenanceBoxState::Cutting) \
	op(ESBZMaintenanceBoxState::Deactivate) 

enum class ESBZMaintenanceBoxState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZMaintenanceBoxState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
