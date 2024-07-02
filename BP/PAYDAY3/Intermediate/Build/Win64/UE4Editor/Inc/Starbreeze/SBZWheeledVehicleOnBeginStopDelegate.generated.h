// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
#ifdef STARBREEZE_SBZWheeledVehicleOnBeginStopDelegate_generated_h
#error "SBZWheeledVehicleOnBeginStopDelegate.generated.h already included, missing '#pragma once' in SBZWheeledVehicleOnBeginStopDelegate.h"
#endif
#define STARBREEZE_SBZWheeledVehicleOnBeginStopDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnBeginStopDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZWheeledVehicleOnBeginStop_Parms \
{ \
	ASBZWheeledVehicle* Vehicle; \
}; \
static inline void FSBZWheeledVehicleOnBeginStop_DelegateWrapper(const FMulticastScriptDelegate& SBZWheeledVehicleOnBeginStop, ASBZWheeledVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZWheeledVehicleOnBeginStop_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZWheeledVehicleOnBeginStop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnBeginStopDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
