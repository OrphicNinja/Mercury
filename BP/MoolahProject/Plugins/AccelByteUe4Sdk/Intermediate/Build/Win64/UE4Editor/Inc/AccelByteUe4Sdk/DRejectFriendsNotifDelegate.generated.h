// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRejectFriendsNotif;
#ifdef ACCELBYTEUE4SDK_DRejectFriendsNotifDelegate_generated_h
#error "DRejectFriendsNotifDelegate.generated.h already included, missing '#pragma once' in DRejectFriendsNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRejectFriendsNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRejectFriendsNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRejectFriendsNotif_Parms \
{ \
	FAccelByteModelsRejectFriendsNotif Notif; \
}; \
static inline void FDRejectFriendsNotif_DelegateWrapper(const FScriptDelegate& DRejectFriendsNotif, FAccelByteModelsRejectFriendsNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDRejectFriendsNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DRejectFriendsNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRejectFriendsNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
