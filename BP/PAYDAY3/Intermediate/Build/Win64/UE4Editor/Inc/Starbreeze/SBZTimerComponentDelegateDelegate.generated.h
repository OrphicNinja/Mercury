// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTimerComponentDelegateDelegate_generated_h
#error "SBZTimerComponentDelegateDelegate.generated.h already included, missing '#pragma once' in SBZTimerComponentDelegateDelegate.h"
#endif
#define STARBREEZE_SBZTimerComponentDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTimerComponentDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZTimerComponentDelegate_Parms \
{ \
	float NewValue; \
	bool bDoCosmetics; \
}; \
static inline void FSBZTimerComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZTimerComponentDelegate, float NewValue, bool bDoCosmetics) \
{ \
	_Script_Starbreeze_eventSBZTimerComponentDelegate_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.bDoCosmetics=bDoCosmetics ? true : false; \
	SBZTimerComponentDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTimerComponentDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
