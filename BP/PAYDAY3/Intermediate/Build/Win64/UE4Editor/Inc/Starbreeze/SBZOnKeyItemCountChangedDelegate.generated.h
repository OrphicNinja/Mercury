// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZKeyItemCountChangedEvent;
#ifdef STARBREEZE_SBZOnKeyItemCountChangedDelegate_generated_h
#error "SBZOnKeyItemCountChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnKeyItemCountChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnKeyItemCountChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnKeyItemCountChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnKeyItemCountChanged_Parms \
{ \
	FSBZKeyItemCountChangedEvent KeyItemCountChangedEventData; \
}; \
static inline void FSBZOnKeyItemCountChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnKeyItemCountChanged, FSBZKeyItemCountChangedEvent const& KeyItemCountChangedEventData) \
{ \
	_Script_Starbreeze_eventSBZOnKeyItemCountChanged_Parms Parms; \
	Parms.KeyItemCountChangedEventData=KeyItemCountChangedEventData; \
	SBZOnKeyItemCountChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnKeyItemCountChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
