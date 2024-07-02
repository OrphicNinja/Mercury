// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSetPlayerReadyTimeoutDelegate_generated_h
#error "SBZSetPlayerReadyTimeoutDelegate.generated.h already included, missing '#pragma once' in SBZSetPlayerReadyTimeoutDelegate.h"
#endif
#define STARBREEZE_SBZSetPlayerReadyTimeoutDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSetPlayerReadyTimeoutDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZSetPlayerReadyTimeout_Parms \
{ \
	int32 ReadyTimeoutTime; \
}; \
static inline void FSBZSetPlayerReadyTimeout_DelegateWrapper(const FMulticastScriptDelegate& SBZSetPlayerReadyTimeout, int32 ReadyTimeoutTime) \
{ \
	_Script_Starbreeze_eventSBZSetPlayerReadyTimeout_Parms Parms; \
	Parms.ReadyTimeoutTime=ReadyTimeoutTime; \
	SBZSetPlayerReadyTimeout.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSetPlayerReadyTimeoutDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
