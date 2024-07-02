// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZUpdatePSOProgressDelegateDelegate_generated_h
#error "SBZUpdatePSOProgressDelegateDelegate.generated.h already included, missing '#pragma once' in SBZUpdatePSOProgressDelegateDelegate.h"
#endif
#define STARBREEZE_SBZUpdatePSOProgressDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUpdatePSOProgressDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZUpdatePSOProgressDelegate_Parms \
{ \
	int32 CurrentProgress; \
	int32 TotalRemaining; \
}; \
static inline void FSBZUpdatePSOProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZUpdatePSOProgressDelegate, int32 CurrentProgress, int32 TotalRemaining) \
{ \
	_Script_Starbreeze_eventSBZUpdatePSOProgressDelegate_Parms Parms; \
	Parms.CurrentProgress=CurrentProgress; \
	Parms.TotalRemaining=TotalRemaining; \
	SBZUpdatePSOProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUpdatePSOProgressDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
