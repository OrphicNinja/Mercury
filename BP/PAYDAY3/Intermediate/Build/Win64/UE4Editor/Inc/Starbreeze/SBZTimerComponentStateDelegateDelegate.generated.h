// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZTimerState : uint8;
#ifdef STARBREEZE_SBZTimerComponentStateDelegateDelegate_generated_h
#error "SBZTimerComponentStateDelegateDelegate.generated.h already included, missing '#pragma once' in SBZTimerComponentStateDelegateDelegate.h"
#endif
#define STARBREEZE_SBZTimerComponentStateDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimerComponentStateDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZTimerComponentStateDelegate_Parms \
{ \
	ESBZTimerState OldState; \
	ESBZTimerState NewState; \
	bool bDoCosmetics; \
}; \
static inline void FSBZTimerComponentStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZTimerComponentStateDelegate, ESBZTimerState OldState, ESBZTimerState NewState, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZTimerComponentStateDelegate_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZTimerComponentStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimerComponentStateDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
