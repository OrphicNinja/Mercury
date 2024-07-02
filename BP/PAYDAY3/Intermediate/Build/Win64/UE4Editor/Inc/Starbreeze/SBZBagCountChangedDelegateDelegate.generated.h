// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZBagTriggerVolume;
#ifdef STARBREEZE_SBZBagCountChangedDelegateDelegate_generated_h
#error "SBZBagCountChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZBagCountChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZBagCountChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagCountChangedDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZBagCountChangedDelegate_Parms \
{ \
	ASBZBagTriggerVolume* Volume; \
	int32 Overlapping; \
	int32 Secured; \
}; \
static inline void FSBZBagCountChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZBagCountChangedDelegate, ASBZBagTriggerVolume* Volume, int32 Overlapping, int32 Secured) \
{ \
	_Script_Starbreeze_eventSBZBagCountChangedDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Overlapping=Overlapping; \
	Parms.Secured=Secured; \
	SBZBagCountChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagCountChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
