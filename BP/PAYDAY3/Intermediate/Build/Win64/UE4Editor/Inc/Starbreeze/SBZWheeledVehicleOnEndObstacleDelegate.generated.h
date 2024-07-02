// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
class AActor;
#ifdef STARBREEZE_SBZWheeledVehicleOnEndObstacleDelegate_generated_h
#error "SBZWheeledVehicleOnEndObstacleDelegate.generated.h already included, missing '#pragma once' in SBZWheeledVehicleOnEndObstacleDelegate.h"
#endif
#define STARBREEZE_SBZWheeledVehicleOnEndObstacleDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnEndObstacleDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZWheeledVehicleOnEndObstacle_Parms \
{ \
	ASBZWheeledVehicle* Vehicle; \
	AActor* Actor; \
}; \
static inline void FSBZWheeledVehicleOnEndObstacle_DelegateWrapper(const FMulticastScriptDelegate& SBZWheeledVehicleOnEndObstacle, ASBZWheeledVehicle* Vehicle, AActor* Actor) \
{ \
	_Script_Starbreeze_eventSBZWheeledVehicleOnEndObstacle_Parms Parms; \
	Parms.Vehicle=Vehicle; \
	Parms.Actor=Actor; \
	SBZWheeledVehicleOnEndObstacle.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWheeledVehicleOnEndObstacleDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
