// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsCancelFriendsNotif;
#ifdef ACCELBYTEUE4SDK_DCancelFriendsNotifDelegate_generated_h
#error "DCancelFriendsNotifDelegate.generated.h already included, missing '#pragma once' in DCancelFriendsNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DCancelFriendsNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelFriendsNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDCancelFriendsNotif_Parms \
{ \
	FAccelByteModelsCancelFriendsNotif Notif; \
}; \
static inline void FDCancelFriendsNotif_DelegateWrapper(const FScriptDelegate& DCancelFriendsNotif, FAccelByteModelsCancelFriendsNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDCancelFriendsNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DCancelFriendsNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelFriendsNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
