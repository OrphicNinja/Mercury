// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_ChatDisabledSettingChangedEventDelegate_generated_h
#error "ChatDisabledSettingChangedEventDelegate.generated.h already included, missing '#pragma once' in ChatDisabledSettingChangedEventDelegate.h"
#endif
#define STARBREEZE_ChatDisabledSettingChangedEventDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_ChatDisabledSettingChangedEventDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventChatDisabledSettingChangedEvent_Parms \
{ \
	bool DisableSettingValue; \
}; \
static inline void FChatDisabledSettingChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChatDisabledSettingChangedEvent, bool DisableSettingValue) \
{ \
	_Script_Starbreeze_eventChatDisabledSettingChangedEvent_Parms Parms; \
	Parms.DisableSettingValue=DisableSettingValue ? true : false; \
	ChatDisabledSettingChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_ChatDisabledSettingChangedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
