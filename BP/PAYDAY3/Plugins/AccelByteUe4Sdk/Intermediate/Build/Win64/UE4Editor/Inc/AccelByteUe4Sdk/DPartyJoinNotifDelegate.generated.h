// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyJoinNotice;
#ifdef ACCELBYTEUE4SDK_DPartyJoinNotifDelegate_generated_h
#error "DPartyJoinNotifDelegate.generated.h already included, missing '#pragma once' in DPartyJoinNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyJoinNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyJoinNotif_Parms \
{ \
	FAccelByteModelsPartyJoinNotice Notif; \
}; \
static inline void FDPartyJoinNotif_DelegateWrapper(const FScriptDelegate& DPartyJoinNotif, FAccelByteModelsPartyJoinNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyJoinNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyJoinNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
