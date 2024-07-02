// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZWeightTriggerDelegateDelegate_generated_h
#error "SBZWeightTriggerDelegateDelegate.generated.h already included, missing '#pragma once' in SBZWeightTriggerDelegateDelegate.h"
#endif
#define STARBREEZE_SBZWeightTriggerDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZWeightTriggerDelegate_Parms \
{ \
	bool bIsOverLimit; \
	bool bHasChanged; \
	int32 OldCount; \
	int32 NewCount; \
}; \
static inline void FSBZWeightTriggerDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZWeightTriggerDelegate, bool bIsOverLimit, bool bHasChanged, int32 OldCount, int32 NewCount) \
{ \
	_Script_Starbreeze_eventSBZWeightTriggerDelegate_Parms Parms; \
	Parms.bIsOverLimit=bIsOverLimit ? true : false; \
	Parms.bHasChanged=bHasChanged ? true : false; \
	Parms.OldCount=OldCount; \
	Parms.NewCount=NewCount; \
	SBZWeightTriggerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeightTriggerDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
