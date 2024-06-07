// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsReadyConsentNotice;
#ifdef ACCELBYTEUE4SDK_DSetReadyConsentNotifDelegate_generated_h
#error "DSetReadyConsentNotifDelegate.generated.h already included, missing '#pragma once' in DSetReadyConsentNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSetReadyConsentNotifDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetReadyConsentNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSetReadyConsentNotif_Parms \
{ \
	FAccelByteModelsReadyConsentNotice Notif; \
}; \
static inline void FDSetReadyConsentNotif_DelegateWrapper(const FScriptDelegate& DSetReadyConsentNotif, FAccelByteModelsReadyConsentNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDSetReadyConsentNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DSetReadyConsentNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetReadyConsentNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
