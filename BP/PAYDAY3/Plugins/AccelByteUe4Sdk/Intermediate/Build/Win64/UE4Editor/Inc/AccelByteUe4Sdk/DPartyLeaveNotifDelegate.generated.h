// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsLeavePartyNotice;
#ifdef ACCELBYTEUE4SDK_DPartyLeaveNotifDelegate_generated_h
#error "DPartyLeaveNotifDelegate.generated.h already included, missing '#pragma once' in DPartyLeaveNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyLeaveNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyLeaveNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyLeaveNotif_Parms \
{ \
	FAccelByteModelsLeavePartyNotice Notif; \
}; \
static inline void FDPartyLeaveNotif_DelegateWrapper(const FScriptDelegate& DPartyLeaveNotif, FAccelByteModelsLeavePartyNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyLeaveNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DPartyLeaveNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyLeaveNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
