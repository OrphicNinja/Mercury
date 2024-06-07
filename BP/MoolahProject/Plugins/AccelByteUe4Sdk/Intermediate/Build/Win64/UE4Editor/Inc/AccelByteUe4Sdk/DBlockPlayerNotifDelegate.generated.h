// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBlockPlayerNotif;
#ifdef ACCELBYTEUE4SDK_DBlockPlayerNotifDelegate_generated_h
#error "DBlockPlayerNotifDelegate.generated.h already included, missing '#pragma once' in DBlockPlayerNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DBlockPlayerNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBlockPlayerNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDBlockPlayerNotif_Parms \
{ \
	FAccelByteModelsBlockPlayerNotif Notif; \
}; \
static inline void FDBlockPlayerNotif_DelegateWrapper(const FScriptDelegate& DBlockPlayerNotif, FAccelByteModelsBlockPlayerNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDBlockPlayerNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DBlockPlayerNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBlockPlayerNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
