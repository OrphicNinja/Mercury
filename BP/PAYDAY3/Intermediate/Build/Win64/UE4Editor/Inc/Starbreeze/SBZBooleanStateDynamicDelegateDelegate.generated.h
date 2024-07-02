// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZBooleanStateDynamicDelegateDelegate_generated_h
#error "SBZBooleanStateDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZBooleanStateDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZBooleanStateDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBooleanStateDynamicDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZBooleanStateDynamicDelegate_Parms \
{ \
	bool State; \
}; \
static inline void FSBZBooleanStateDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZBooleanStateDynamicDelegate, bool State) \
{ \
	_Script_Starbreeze_eventSBZBooleanStateDynamicDelegate_Parms Parms; \
	Parms.State=State ? true : false; \
	SBZBooleanStateDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBooleanStateDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
