// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRequestFriendsNotif;
#ifdef ACCELBYTEUE4SDK_DRequestFriendsNotifDelegate_generated_h
#error "DRequestFriendsNotifDelegate.generated.h already included, missing '#pragma once' in DRequestFriendsNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRequestFriendsNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRequestFriendsNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRequestFriendsNotif_Parms \
{ \
	FAccelByteModelsRequestFriendsNotif Notif; \
}; \
static inline void FDRequestFriendsNotif_DelegateWrapper(const FScriptDelegate& DRequestFriendsNotif, FAccelByteModelsRequestFriendsNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDRequestFriendsNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DRequestFriendsNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRequestFriendsNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
