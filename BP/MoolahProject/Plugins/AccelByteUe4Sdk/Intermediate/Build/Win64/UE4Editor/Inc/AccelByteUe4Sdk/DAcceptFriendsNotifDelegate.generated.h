// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsAcceptFriendsNotif;
#ifdef ACCELBYTEUE4SDK_DAcceptFriendsNotifDelegate_generated_h
#error "DAcceptFriendsNotifDelegate.generated.h already included, missing '#pragma once' in DAcceptFriendsNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAcceptFriendsNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAcceptFriendsNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAcceptFriendsNotif_Parms \
{ \
	FAccelByteModelsAcceptFriendsNotif Notif; \
}; \
static inline void FDAcceptFriendsNotif_DelegateWrapper(const FScriptDelegate& DAcceptFriendsNotif, FAccelByteModelsAcceptFriendsNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDAcceptFriendsNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DAcceptFriendsNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAcceptFriendsNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
