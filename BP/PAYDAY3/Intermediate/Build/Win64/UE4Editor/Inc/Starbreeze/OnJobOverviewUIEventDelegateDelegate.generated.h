// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlackScreenTransitionType : uint8;
#ifdef STARBREEZE_OnJobOverviewUIEventDelegateDelegate_generated_h
#error "OnJobOverviewUIEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnJobOverviewUIEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnJobOverviewUIEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnJobOverviewUIEventDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnJobOverviewUIEventDelegate_Parms \
{ \
	EBlackScreenTransitionType BlackScreenTransitionType; \
}; \
static inline void FOnJobOverviewUIEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJobOverviewUIEventDelegate, EBlackScreenTransitionType BlackScreenTransitionType) \
{ \
	_Script_Starbreeze_eventOnJobOverviewUIEventDelegate_Parms Parms; \
	Parms.BlackScreenTransitionType=BlackScreenTransitionType; \
	OnJobOverviewUIEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnJobOverviewUIEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
