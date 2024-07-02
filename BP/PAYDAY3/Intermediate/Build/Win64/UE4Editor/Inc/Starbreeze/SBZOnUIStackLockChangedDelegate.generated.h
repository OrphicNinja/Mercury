// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnUIStackLockChangedDelegate_generated_h
#error "SBZOnUIStackLockChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnUIStackLockChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnUIStackLockChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnUIStackLockChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnUIStackLockChanged_Parms \
{ \
	bool bIsStackLocked; \
}; \
static inline void FSBZOnUIStackLockChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnUIStackLockChanged, bool bIsStackLocked) \
{ \
	_Script_Starbreeze_eventSBZOnUIStackLockChanged_Parms Parms; \
	Parms.bIsStackLocked=bIsStackLocked ? true : false; \
	SBZOnUIStackLockChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnUIStackLockChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
