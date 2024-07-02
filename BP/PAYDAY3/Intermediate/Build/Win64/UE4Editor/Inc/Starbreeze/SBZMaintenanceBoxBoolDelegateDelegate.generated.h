// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMaintenanceBoxBoolDelegateDelegate_generated_h
#error "SBZMaintenanceBoxBoolDelegateDelegate.generated.h already included, missing '#pragma once' in SBZMaintenanceBoxBoolDelegateDelegate.h"
#endif
#define STARBREEZE_SBZMaintenanceBoxBoolDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxBoolDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZMaintenanceBoxBoolDelegate_Parms \
{ \
	bool bSuccessful; \
}; \
static inline void FSBZMaintenanceBoxBoolDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZMaintenanceBoxBoolDelegate, bool bSuccessful) \
{ \
	_Script_Starbreeze_eventSBZMaintenanceBoxBoolDelegate_Parms Parms; \
	Parms.bSuccessful=bSuccessful ? true : false; \
	SBZMaintenanceBoxBoolDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMaintenanceBoxBoolDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
