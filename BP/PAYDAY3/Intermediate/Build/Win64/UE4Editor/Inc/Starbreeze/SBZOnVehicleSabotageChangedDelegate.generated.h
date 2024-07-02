// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnVehicleSabotageChangedDelegate_generated_h
#error "SBZOnVehicleSabotageChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnVehicleSabotageChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnVehicleSabotageChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnVehicleSabotageChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnVehicleSabotageChanged_Parms \
{ \
	bool bSabotaged; \
}; \
static inline void FSBZOnVehicleSabotageChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnVehicleSabotageChanged, bool bSabotaged) \
{ \
	_Script_Starbreeze_eventSBZOnVehicleSabotageChanged_Parms Parms; \
	Parms.bSabotaged=bSabotaged ? true : false; \
	SBZOnVehicleSabotageChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnVehicleSabotageChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
