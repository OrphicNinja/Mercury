// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsDisconnectNotif;
#ifdef ACCELBYTEUE4SDK_DDisconnectNotifDelegateDelegate_generated_h
#error "DDisconnectNotifDelegateDelegate.generated.h already included, missing '#pragma once' in DDisconnectNotifDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DDisconnectNotifDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDisconnectNotifDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDDisconnectNotifDelegate_Parms \
{ \
	FAccelByteModelsDisconnectNotif Notif; \
}; \
static inline void FDDisconnectNotifDelegate_DelegateWrapper(const FScriptDelegate& DDisconnectNotifDelegate, FAccelByteModelsDisconnectNotif Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDDisconnectNotifDelegate_Parms Parms; \
	Parms.Notif=Notif; \
	DDisconnectNotifDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDisconnectNotifDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
