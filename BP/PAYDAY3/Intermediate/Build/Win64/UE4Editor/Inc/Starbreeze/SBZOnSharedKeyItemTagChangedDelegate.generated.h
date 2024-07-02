// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZSharedKeyItemTagChangedEvent;
#ifdef STARBREEZE_SBZOnSharedKeyItemTagChangedDelegate_generated_h
#error "SBZOnSharedKeyItemTagChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnSharedKeyItemTagChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnSharedKeyItemTagChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSharedKeyItemTagChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSharedKeyItemTagChanged_Parms \
{ \
	FSBZSharedKeyItemTagChangedEvent KeyItemCountChangedEventData; \
}; \
static inline void FSBZOnSharedKeyItemTagChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSharedKeyItemTagChanged, FSBZSharedKeyItemTagChangedEvent const& KeyItemCountChangedEventData) \
{ \
	_Script_Starbreeze_eventSBZOnSharedKeyItemTagChanged_Parms Parms; \
	Parms.KeyItemCountChangedEventData=KeyItemCountChangedEventData; \
	SBZOnSharedKeyItemTagChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSharedKeyItemTagChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
