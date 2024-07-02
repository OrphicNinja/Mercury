// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
#ifdef STARBREEZE_SBZWheeledVehicleOnPathEndReachedDelegate_generated_h
#error "SBZWheeledVehicleOnPathEndReachedDelegate.generated.h already included, missing '#pragma once' in SBZWheeledVehicleOnPathEndReachedDelegate.h"
#endif
#define STARBREEZE_SBZWheeledVehicleOnPathEndReachedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnPathEndReachedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZWheeledVehicleOnPathEndReached_Parms \
{ \
	ASBZWheeledVehicle* Vehicle; \
}; \
static inline void FSBZWheeledVehicleOnPathEndReached_DelegateWrapper(const FMulticastScriptDelegate& SBZWheeledVehicleOnPathEndReached, ASBZWheeledVehicle* Vehicle) \
{ \
	_Script_Starbreeze_eventSBZWheeledVehicleOnPathEndReached_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	SBZWheeledVehicleOnPathEndReached.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnPathEndReachedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
