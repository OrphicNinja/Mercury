// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsBulkUserStatusNotif;
#ifdef ACCELBYTEUE4SDK_DBulkGetUserPresenceDelegate_generated_h
#error "DBulkGetUserPresenceDelegate.generated.h already included, missing '#pragma once' in DBulkGetUserPresenceDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DBulkGetUserPresenceDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBulkGetUserPresenceDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDBulkGetUserPresence_Parms \
{ \
	FAccelByteModelsBulkUserStatusNotif Response; \
}; \
static inline void FDBulkGetUserPresence_DelegateWrapper(const FScriptDelegate& DBulkGetUserPresence, FAccelByteModelsBulkUserStatusNotif Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDBulkGetUserPresence_Parms Parms; \
	Parms.Response=Response; \
	DBulkGetUserPresence.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBulkGetUserPresenceDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
