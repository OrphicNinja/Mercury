// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRejectConsentNotice;
#ifdef ACCELBYTEUE4SDK_DSetRejectConsentNotifDelegate_generated_h
#error "DSetRejectConsentNotifDelegate.generated.h already included, missing '#pragma once' in DSetRejectConsentNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSetRejectConsentNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetRejectConsentNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSetRejectConsentNotif_Parms \
{ \
	FAccelByteModelsRejectConsentNotice Notif; \
}; \
static inline void FDSetRejectConsentNotif_DelegateWrapper(const FScriptDelegate& DSetRejectConsentNotif, FAccelByteModelsRejectConsentNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDSetRejectConsentNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DSetRejectConsentNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetRejectConsentNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
