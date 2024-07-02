// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyMemberConnectionNotice;
#ifdef ACCELBYTEUE4SDK_DPartyMemberDisconnectNotifDelegate_generated_h
#error "DPartyMemberDisconnectNotifDelegate.generated.h already included, missing '#pragma once' in DPartyMemberDisconnectNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyMemberDisconnectNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyMemberDisconnectNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyMemberDisconnectNotif_Parms \
{ \
	FAccelByteModelsPartyMemberConnectionNotice Notif; \
}; \
static inline void FDPartyMemberDisconnectNotif_DelegateWrapper(const FScriptDelegate& DPartyMemberDisconnectNotif, FAccelByteModelsPartyMemberConnectionNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyMemberDisconnectNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyMemberDisconnectNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyMemberDisconnectNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
