// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyGetInvitedNotice;
#ifdef ACCELBYTEUE4SDK_DPartyGetInvitedNotifDelegate_generated_h
#error "DPartyGetInvitedNotifDelegate.generated.h already included, missing '#pragma once' in DPartyGetInvitedNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyGetInvitedNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetInvitedNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyGetInvitedNotif_Parms \
{ \
	FAccelByteModelsPartyGetInvitedNotice Notif; \
}; \
static inline void FDPartyGetInvitedNotif_DelegateWrapper(const FScriptDelegate& DPartyGetInvitedNotif, FAccelByteModelsPartyGetInvitedNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyGetInvitedNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyGetInvitedNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetInvitedNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
