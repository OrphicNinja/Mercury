// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ESBZHumanShieldInstigatorState_generated_h
#error "ESBZHumanShieldInstigatorState.generated.h already included, missing '#pragma once' in ESBZHumanShieldInstigatorState.h"
#endif
#define STARBREEZE_ESBZHumanShieldInstigatorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ESBZHumanShieldInstigatorState_h


#define FOREACH_ENUM_ESBZHUMANSHIELDINSTIGATORSTATE(op) \
	op(ESBZHumanShieldInstigatorState::None) \
	op(ESBZHumanShieldInstigatorState::ReachingSlot) \
	op(ESBZHumanShieldInstigatorState::EnterGrabbing) \
	op(ESBZHumanShieldInstigatorState::Grabbing) \
	op(ESBZHumanShieldInstigatorState::Choking) \
	op(ESBZHumanShieldInstigatorState::Exiting) 

enum class ESBZHumanShieldInstigatorState : uint8;
template<> STARBREEZE_API UEnum* StaticEnum<ESBZHumanShieldInstigatorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
