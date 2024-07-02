// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUsersPresenceNotice;
#ifdef ACCELBYTEUE4SDK_DFriendStatusNotifDelegate_generated_h
#error "DFriendStatusNotifDelegate.generated.h already included, missing '#pragma once' in DFriendStatusNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DFriendStatusNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DFriendStatusNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDFriendStatusNotif_Parms \
{ \
	FAccelByteModelsUsersPresenceNotice Notif; \
}; \
static inline void FDFriendStatusNotif_DelegateWrapper(const FScriptDelegate& DFriendStatusNotif, FAccelByteModelsUsersPresenceNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDFriendStatusNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DFriendStatusNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DFriendStatusNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
