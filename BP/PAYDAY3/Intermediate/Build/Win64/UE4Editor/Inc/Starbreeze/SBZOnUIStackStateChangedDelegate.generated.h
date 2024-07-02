// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIStackChangedEvent;
#ifdef STARBREEZE_SBZOnUIStackStateChangedDelegate_generated_h
#error "SBZOnUIStackStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnUIStackStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnUIStackStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnUIStackStateChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnUIStackStateChanged_Parms \
{ \
	FSBZUIStackChangedEvent StackEvent; \
}; \
static inline void FSBZOnUIStackStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnUIStackStateChanged, FSBZUIStackChangedEvent StackEvent) \
{ \
	_Script_Starbreeze_eventSBZOnUIStackStateChanged_Parms Parms; \
	Parms.StackEvent=StackEvent; \
	SBZOnUIStackStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnUIStackStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
