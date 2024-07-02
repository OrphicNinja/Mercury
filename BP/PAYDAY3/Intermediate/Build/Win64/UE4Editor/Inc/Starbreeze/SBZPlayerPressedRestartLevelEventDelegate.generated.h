// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
#ifdef STARBREEZE_SBZPlayerPressedRestartLevelEventDelegate_generated_h
#error "SBZPlayerPressedRestartLevelEventDelegate.generated.h already included, missing '#pragma once' in SBZPlayerPressedRestartLevelEventDelegate.h"
#endif
#define STARBREEZE_SBZPlayerPressedRestartLevelEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerPressedRestartLevelEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerPressedRestartLevelEvent_Parms \
{ \
	FUniqueNetIdRepl PlayerId; \
}; \
static inline void FSBZPlayerPressedRestartLevelEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerPressedRestartLevelEvent, FUniqueNetIdRepl const& PlayerId) \
{ \
	_Script_Starbreeze_eventSBZPlayerPressedRestartLevelEvent_Parms Parms; \
	Parms.PlayerId=PlayerId; \
	SBZPlayerPressedRestartLevelEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerPressedRestartLevelEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
