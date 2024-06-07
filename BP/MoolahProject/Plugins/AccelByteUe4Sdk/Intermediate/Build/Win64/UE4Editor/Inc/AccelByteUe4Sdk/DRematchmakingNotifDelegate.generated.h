// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRematchmakingNotice;
#ifdef ACCELBYTEUE4SDK_DRematchmakingNotifDelegate_generated_h
#error "DRematchmakingNotifDelegate.generated.h already included, missing '#pragma once' in DRematchmakingNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRematchmakingNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRematchmakingNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRematchmakingNotif_Parms \
{ \
	FAccelByteModelsRematchmakingNotice Notif; \
}; \
static inline void FDRematchmakingNotif_DelegateWrapper(const FScriptDelegate& DRematchmakingNotif, FAccelByteModelsRematchmakingNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDRematchmakingNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DRematchmakingNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRematchmakingNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
