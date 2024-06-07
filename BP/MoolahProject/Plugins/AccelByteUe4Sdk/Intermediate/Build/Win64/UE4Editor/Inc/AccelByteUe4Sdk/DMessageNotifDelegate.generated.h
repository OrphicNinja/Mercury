// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsNotificationMessage;
#ifdef ACCELBYTEUE4SDK_DMessageNotifDelegate_generated_h
#error "DMessageNotifDelegate.generated.h already included, missing '#pragma once' in DMessageNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DMessageNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMessageNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDMessageNotif_Parms \
{ \
	FAccelByteModelsNotificationMessage Notif; \
}; \
static inline void FDMessageNotif_DelegateWrapper(const FScriptDelegate& DMessageNotif, FAccelByteModelsNotificationMessage Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDMessageNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DMessageNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMessageNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
