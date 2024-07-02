// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
#ifdef STARBREEZE_SBZWheeledVehicleOnStoppedDelegate_generated_h
#error "SBZWheeledVehicleOnStoppedDelegate.generated.h already included, missing '#pragma once' in SBZWheeledVehicleOnStoppedDelegate.h"
#endif
#define STARBREEZE_SBZWheeledVehicleOnStoppedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnStoppedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZWheeledVehicleOnStopped_Parms \
{ \
	ASBZWheeledVehicle* Vehicle; \
}; \
static inline void FSBZWheeledVehicleOnStopped_DelegateWrapper(const FMulticastScriptDelegate& SBZWheeledVehicleOnStopped, ASBZWheeledVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZWheeledVehicleOnStopped_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZWheeledVehicleOnStopped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnStoppedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
