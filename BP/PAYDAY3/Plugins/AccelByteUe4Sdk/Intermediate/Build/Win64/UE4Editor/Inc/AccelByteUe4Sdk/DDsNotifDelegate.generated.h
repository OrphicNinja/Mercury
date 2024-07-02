// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsDsNotice;
#ifdef ACCELBYTEUE4SDK_DDsNotifDelegate_generated_h
#error "DDsNotifDelegate.generated.h already included, missing '#pragma once' in DDsNotifDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DDsNotifDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDsNotifDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDDsNotif_Parms \
{ \
	FAccelByteModelsDsNotice Notif; \
}; \
static inline void FDDsNotif_DelegateWrapper(const FScriptDelegate& DDsNotif, FAccelByteModelsDsNotice Notif) \
{ \
	_Script_AccelByteUe4Sdk_eventDDsNotif_Parms Parms; \
	Parms.Notif=Notif; \
	DDsNotif.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDsNotifDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
