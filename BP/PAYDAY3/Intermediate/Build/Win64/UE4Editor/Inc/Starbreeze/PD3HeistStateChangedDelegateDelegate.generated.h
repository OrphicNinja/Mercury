// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_PD3HeistStateChangedDelegateDelegate_generated_h
#error "PD3HeistStateChangedDelegateDelegate.generated.h already included, missing '#pragma once' in PD3HeistStateChangedDelegateDelegate.h"
#endif
#define STARBREEZE_PD3HeistStateChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HeistStateChangedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventPD3HeistStateChangedDelegate_Parms \
{ \
	EPD3HeistState OldState; \
	EPD3HeistState NewState; \
}; \
static inline void FPD3HeistStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PD3HeistStateChangedDelegate, EPD3HeistState OldState, EPD3HeistState NewState) \
{ \
	_Script_Starbreeze_eventPD3HeistStateChangedDelegate_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	PD3HeistStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HeistStateChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
