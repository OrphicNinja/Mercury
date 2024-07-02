// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyNotif;
#ifdef ACCELBYTEUE4SDK_DPartyUpdateNotifDelegate_generated_h
#error "DPartyUpdateNotifDelegate.generated.h already included, missing '#pragma once' in DPartyUpdateNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyUpdateNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyUpdateNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyUpdateNotif_Parms \
{ \
	FAccelByteModelsPartyNotif Notif; \
}; \
static inline void FDPartyUpdateNotif_DelegateWrapper(const FScriptDelegate& DPartyUpdateNotif, FAccelByteModelsPartyNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyUpdateNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyUpdateNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyUpdateNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
