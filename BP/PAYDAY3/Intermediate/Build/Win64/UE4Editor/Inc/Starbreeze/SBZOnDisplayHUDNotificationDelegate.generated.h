// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZHUDNotificationData;
#ifdef STARBREEZE_SBZOnDisplayHUDNotificationDelegate_generated_h
#error "SBZOnDisplayHUDNotificationDelegate.generated.h already included, missing '#pragma once' in SBZOnDisplayHUDNotificationDelegate.h"
#endif
#define STARBREEZE_SBZOnDisplayHUDNotificationDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnDisplayHUDNotificationDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnDisplayHUDNotification_Parms \
{ \
	FSBZHUDNotificationData NotificationData; \
}; \
static inline void FSBZOnDisplayHUDNotification_DelegateWrapper(const FMulticastScriptDelegate& SBZOnDisplayHUDNotification, FSBZHUDNotificationData const& NotificationData) \
{ \
	_Script_Starbreeze_eventSBZOnDisplayHUDNotification_Parms Parms; \
	Parms.NotificationData=NotificationData; \
	SBZOnDisplayHUDNotification.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnDisplayHUDNotificationDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
