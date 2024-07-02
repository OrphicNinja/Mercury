// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnPlatformUserLoginChangedDelegateDelegate_generated_h
#error "OnPlatformUserLoginChangedDelegateDelegate.generated.h already included, missing '#pragma once' in OnPlatformUserLoginChangedDelegateDelegate.h"
#endif
#define STARBREEZE_OnPlatformUserLoginChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnPlatformUserLoginChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnPlatformUserLoginChangedDelegate_Parms \
{ \
	bool bLoggedIn; \
}; \
static inline void FOnPlatformUserLoginChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlatformUserLoginChangedDelegate, bool bLoggedIn) \
{ \
	_Script_Starbreeze_eventOnPlatformUserLoginChangedDelegate_Parms Parms; \
	Parms.bLoggedIn=bLoggedIn ? true : false; \
	OnPlatformUserLoginChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnPlatformUserLoginChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
