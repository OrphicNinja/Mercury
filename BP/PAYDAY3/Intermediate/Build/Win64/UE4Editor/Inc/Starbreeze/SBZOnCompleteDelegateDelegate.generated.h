// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnCompleteDelegateDelegate_generated_h
#error "SBZOnCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnCompleteDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnCompleteDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnCompleteDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnCompleteDelegate_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FSBZOnCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnCompleteDelegate, bool bWasSuccess) \
{ \
	_Script_Starbreeze_eventSBZOnCompleteDelegate_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	SBZOnCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
