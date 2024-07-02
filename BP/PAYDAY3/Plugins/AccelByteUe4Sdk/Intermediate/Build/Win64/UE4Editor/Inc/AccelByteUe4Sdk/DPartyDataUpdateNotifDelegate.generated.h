// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyDataNotif;
#ifdef ACCELBYTEUE4SDK_DPartyDataUpdateNotifDelegate_generated_h
#error "DPartyDataUpdateNotifDelegate.generated.h already included, missing '#pragma once' in DPartyDataUpdateNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyDataUpdateNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyDataUpdateNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyDataUpdateNotif_Parms \
{ \
	FAccelByteModelsPartyDataNotif Notif; \
}; \
static inline void FDPartyDataUpdateNotif_DelegateWrapper(const FScriptDelegate& DPartyDataUpdateNotif, FAccelByteModelsPartyDataNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyDataUpdateNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyDataUpdateNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyDataUpdateNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
