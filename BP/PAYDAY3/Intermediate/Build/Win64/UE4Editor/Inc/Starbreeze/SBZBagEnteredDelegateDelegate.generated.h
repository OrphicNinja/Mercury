// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZBagTriggerVolume;
class ASBZBagItem;
struct FSBZBagHandle;
#ifdef STARBREEZE_SBZBagEnteredDelegateDelegate_generated_h
#error "SBZBagEnteredDelegateDelegate.generated.h already included, missing '#pragma once' in SBZBagEnteredDelegateDelegate.h"
#endif
#define STARBREEZE_SBZBagEnteredDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagEnteredDelegateDelegate_h_9_DELEGATE \
struct _Script_Starbreeze_eventSBZBagEnteredDelegate_Parms \
{ \
	ASBZBagTriggerVolume* Volume; \
	ASBZBagItem* Bag; \
	FSBZBagHandle Handle; \
}; \
static inline void FSBZBagEnteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZBagEnteredDelegate, ASBZBagTriggerVolume* Volume, ASBZBagItem* Bag, FSBZBagHandle Handle) \
{ \
	_Script_Starbreeze_eventSBZBagEnteredDelegate_Parms Parms; \
	Parms.Volume=Volume; \
	Parms.Bag=Bag; \
	Parms.Handle=Handle; \
	SBZBagEnteredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagEnteredDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
