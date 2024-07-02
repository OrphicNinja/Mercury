// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnPopUpWidgetClosedDelegate_generated_h
#error "SBZOnPopUpWidgetClosedDelegate.generated.h already included, missing '#pragma once' in SBZOnPopUpWidgetClosedDelegate.h"
#endif
#define STARBREEZE_SBZOnPopUpWidgetClosedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPopUpWidgetClosedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPopUpWidgetClosed_Parms \
{ \
	FName ClosingActionName; \
}; \
static inline void FSBZOnPopUpWidgetClosed_DelegateWrapper(const FScriptDelegate& SBZOnPopUpWidgetClosed, FName ClosingActionName) \
{ \
	_Script_Starbreeze_eventSBZOnPopUpWidgetClosed_Parms Parms; \
	Parms.ClosingActionName=ClosingActionName; \
	SBZOnPopUpWidgetClosed.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPopUpWidgetClosedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
