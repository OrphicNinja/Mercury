// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsMatchmakingNotice;
#ifdef ACCELBYTEUE4SDK_DMatchmakingNotifDelegate_generated_h
#error "DMatchmakingNotifDelegate.generated.h already included, missing '#pragma once' in DMatchmakingNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DMatchmakingNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMatchmakingNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDMatchmakingNotif_Parms \
{ \
	FAccelByteModelsMatchmakingNotice Notif; \
}; \
static inline void FDMatchmakingNotif_DelegateWrapper(const FScriptDelegate& DMatchmakingNotif, FAccelByteModelsMatchmakingNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDMatchmakingNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DMatchmakingNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DMatchmakingNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
