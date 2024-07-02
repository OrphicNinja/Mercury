// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUnfriendNotif;
#ifdef ACCELBYTEUE4SDK_DUnfriendNotifDelegate_generated_h
#error "DUnfriendNotifDelegate.generated.h already included, missing '#pragma once' in DUnfriendNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUnfriendNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnfriendNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUnfriendNotif_Parms \
{ \
	FAccelByteModelsUnfriendNotif Notif; \
}; \
static inline void FDUnfriendNotif_DelegateWrapper(const FScriptDelegate& DUnfriendNotif, FAccelByteModelsUnfriendNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDUnfriendNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DUnfriendNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnfriendNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
