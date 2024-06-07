// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyMemberConnectionNotice;
#ifdef ACCELBYTEUE4SDK_DPartyMemberConnectNotifDelegate_generated_h
#error "DPartyMemberConnectNotifDelegate.generated.h already included, missing '#pragma once' in DPartyMemberConnectNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyMemberConnectNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyMemberConnectNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyMemberConnectNotif_Parms \
{ \
	FAccelByteModelsPartyMemberConnectionNotice Notif; \
}; \
static inline void FDPartyMemberConnectNotif_DelegateWrapper(const FScriptDelegate& DPartyMemberConnectNotif, FAccelByteModelsPartyMemberConnectionNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyMemberConnectNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyMemberConnectNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyMemberConnectNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
