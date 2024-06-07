// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyDataNotif;
#ifdef ACCELBYTEUE4SDK_DPartyDataNotifDelegateDelegate_generated_h
#error "DPartyDataNotifDelegateDelegate.generated.h already included, missing '#pragma once' in DPartyDataNotifDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyDataNotifDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyDataNotifDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyDataNotifDelegate_Parms \
{ \
	FAccelByteModelsPartyDataNotif Response; \
}; \
static inline void FDPartyDataNotifDelegate_DelegateWrapper(const FScriptDelegate& DPartyDataNotifDelegate, FAccelByteModelsPartyDataNotif Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyDataNotifDelegate_Parms Parms; \
	Parms.Response=Response; \
	DPartyDataNotifDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyDataNotifDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
