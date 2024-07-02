// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnPlatformUserChangedDelegateDelegate_generated_h
#error "SBZOnPlatformUserChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnPlatformUserChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnPlatformUserChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnPlatformUserChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnPlatformUserChangedDelegate_Parms \
{ \
	int32 OldUserIndex; \
}; \
static inline void FSBZOnPlatformUserChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnPlatformUserChangedDelegate, int32 OldUserIndex) \
{ \
	_Script_Starbreeze_eventSBZOnPlatformUserChangedDelegate_Parms Parms; \
	Parms.OldUserIndex=OldUserIndex; \
	SBZOnPlatformUserChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnPlatformUserChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
