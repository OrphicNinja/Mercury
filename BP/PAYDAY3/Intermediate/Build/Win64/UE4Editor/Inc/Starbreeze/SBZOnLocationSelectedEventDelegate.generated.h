// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnLocationSelectedEventDelegate_generated_h
#error "SBZOnLocationSelectedEventDelegate.generated.h already included, missing '#pragma once' in SBZOnLocationSelectedEventDelegate.h"
#endif
#define STARBREEZE_SBZOnLocationSelectedEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnLocationSelectedEventDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnLocationSelectedEvent_Parms \
{ \
	int32 LocationIndex; \
}; \
static inline void FSBZOnLocationSelectedEvent_DelegateWrapper(const FMulticastScriptDelegate& SBZOnLocationSelectedEvent, int32 LocationIndex) \
{ \
	_Script_Starbreeze_eventSBZOnLocationSelectedEvent_Parms Parms; \
	Parms.LocationIndex=LocationIndex; \
	SBZOnLocationSelectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnLocationSelectedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
