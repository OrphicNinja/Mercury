// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZFilterAllDesiredCountsDynamicDelegateDelegate_generated_h
#error "SBZFilterAllDesiredCountsDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZFilterAllDesiredCountsDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZFilterAllDesiredCountsDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFilterAllDesiredCountsDynamicDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZFilterAllDesiredCountsDynamicDelegate_Parms \
{ \
	bool bState; \
}; \
static inline void FSBZFilterAllDesiredCountsDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZFilterAllDesiredCountsDynamicDelegate, bool bState) \
{ \
	_Script_Starbreeze_eventSBZFilterAllDesiredCountsDynamicDelegate_Parms Parms; \
	Parms.bState=bState ? true : false; \
	SBZFilterAllDesiredCountsDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFilterAllDesiredCountsDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
