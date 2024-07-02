// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDisplayCaseState : uint8;
#ifdef STARBREEZE_SBZDisplayCaseStateChangedEventDelegate_generated_h
#error "SBZDisplayCaseStateChangedEventDelegate.generated.h already included, missing '#pragma once' in SBZDisplayCaseStateChangedEventDelegate.h"
#endif
#define STARBREEZE_SBZDisplayCaseStateChangedEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDisplayCaseStateChangedEventDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZDisplayCaseStateChangedEvent_Parms \
{ \
	ESBZDisplayCaseState NewState; \
}; \
static inline void FSBZDisplayCaseStateChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZDisplayCaseStateChangedEvent, ESBZDisplayCaseState NewState) \
{ \
	_Script_Starbreeze_eventSBZDisplayCaseStateChangedEvent_Parms Parms; \
	Parms.NewState=NewState; \
	SBZDisplayCaseStateChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDisplayCaseStateChangedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
