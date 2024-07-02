// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZVehicleSpawnComponent;
enum class ESBZVehicleSpawnResult : uint8;
#ifdef STARBREEZE_SBZSpawnCompletedDelegateBPDelegate_generated_h
#error "SBZSpawnCompletedDelegateBPDelegate.generated.h already included, missing '#pragma once' in SBZSpawnCompletedDelegateBPDelegate.h"
#endif
#define STARBREEZE_SBZSpawnCompletedDelegateBPDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnCompletedDelegateBPDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZSpawnCompletedDelegateBP_Parms \
{ \
	USBZVehicleSpawnComponent* VehicleSpawnComponent; \
	ESBZVehicleSpawnResult Result; \
}; \
static inline void FSBZSpawnCompletedDelegateBP_DelegateWrapper(const FMulticastScriptDelegate& SBZSpawnCompletedDelegateBP, USBZVehicleSpawnComponent* VehicleSpawnComponent, ESBZVehicleSpawnResult Result) \
{ \
	_Script_Starbreeze_eventSBZSpawnCompletedDelegateBP_Parms Parms; \
	Parms.VehicleSpawnComponent=VehicleSpawnComponent; \
	Parms.Result=Result; \
	SBZSpawnCompletedDelegateBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnCompletedDelegateBPDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
