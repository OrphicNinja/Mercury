// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnVehicleEscortChangedDelegate_generated_h
#error "SBZOnVehicleEscortChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnVehicleEscortChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnVehicleEscortChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnVehicleEscortChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnVehicleEscortChanged_Parms \
{ \
	bool bIsMoving; \
}; \
static inline void FSBZOnVehicleEscortChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnVehicleEscortChanged, bool bIsMoving) \
{ \
	_Script_Starbreeze_eventSBZOnVehicleEscortChanged_Parms Parms; \
	Parms.bIsMoving=bIsMoving ? true : false; \
	SBZOnVehicleEscortChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnVehicleEscortChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
