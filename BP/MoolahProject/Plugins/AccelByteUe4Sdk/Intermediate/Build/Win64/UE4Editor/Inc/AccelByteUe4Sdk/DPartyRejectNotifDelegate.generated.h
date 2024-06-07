// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyRejectNotice;
#ifdef ACCELBYTEUE4SDK_DPartyRejectNotifDelegate_generated_h
#error "DPartyRejectNotifDelegate.generated.h already included, missing '#pragma once' in DPartyRejectNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyRejectNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyRejectNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyRejectNotif_Parms \
{ \
	FAccelByteModelsPartyRejectNotice Notif; \
}; \
static inline void FDPartyRejectNotif_DelegateWrapper(const FScriptDelegate& DPartyRejectNotif, FAccelByteModelsPartyRejectNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyRejectNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyRejectNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyRejectNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
