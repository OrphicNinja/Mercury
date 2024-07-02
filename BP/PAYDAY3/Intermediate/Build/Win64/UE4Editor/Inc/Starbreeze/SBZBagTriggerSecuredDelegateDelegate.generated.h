// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZBagHandle;
#ifdef STARBREEZE_SBZBagTriggerSecuredDelegateDelegate_generated_h
#error "SBZBagTriggerSecuredDelegateDelegate.generated.h already included, missing '#pragma once' in SBZBagTriggerSecuredDelegateDelegate.h"
#endif
#define STARBREEZE_SBZBagTriggerSecuredDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerSecuredDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZBagTriggerSecuredDelegate_Parms \
{ \
	FSBZBagHandle BagHandle; \
	int32 Count; \
}; \
static inline void FSBZBagTriggerSecuredDelegate_DelegateWrapper(const FScriptDelegate& SBZBagTriggerSecuredDelegate, FSBZBagHandle BagHandle, int32 Count) \
{ \
	_Script_Starbreeze_eventSBZBagTriggerSecuredDelegate_Parms Parms; \
	Parms.BagHandle=BagHandle; \
	Parms.Count=Count; \
	SBZBagTriggerSecuredDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBagTriggerSecuredDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
