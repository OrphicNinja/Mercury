// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnSetBackfillAllowedDelegate_generated_h
#error "SBZOnSetBackfillAllowedDelegate.generated.h already included, missing '#pragma once' in SBZOnSetBackfillAllowedDelegate.h"
#endif
#define STARBREEZE_SBZOnSetBackfillAllowedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSetBackfillAllowedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSetBackfillAllowed_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FSBZOnSetBackfillAllowed_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSetBackfillAllowed, bool bWasSuccessful) \
{ \
	_Script_Starbreeze_eventSBZOnSetBackfillAllowed_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	SBZOnSetBackfillAllowed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSetBackfillAllowedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
