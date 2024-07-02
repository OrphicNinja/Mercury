// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUnblockPlayerNotif;
#ifdef ACCELBYTEUE4SDK_DUnblockPlayerNotifDelegate_generated_h
#error "DUnblockPlayerNotifDelegate.generated.h already included, missing '#pragma once' in DUnblockPlayerNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUnblockPlayerNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnblockPlayerNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUnblockPlayerNotif_Parms \
{ \
	FAccelByteModelsUnblockPlayerNotif Notif; \
}; \
static inline void FDUnblockPlayerNotif_DelegateWrapper(const FScriptDelegate& DUnblockPlayerNotif, FAccelByteModelsUnblockPlayerNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDUnblockPlayerNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DUnblockPlayerNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnblockPlayerNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
