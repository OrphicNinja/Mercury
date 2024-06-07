// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSetOnlineUsersResponse;
#ifdef ACCELBYTEUE4SDK_DOnSetUserPresenceDelegate_generated_h
#error "DOnSetUserPresenceDelegate.generated.h already included, missing '#pragma once' in DOnSetUserPresenceDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DOnSetUserPresenceDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DOnSetUserPresenceDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDOnSetUserPresence_Parms \
{ \
	FAccelByteModelsSetOnlineUsersResponse Response; \
}; \
static inline void FDOnSetUserPresence_DelegateWrapper(const FScriptDelegate& DOnSetUserPresence, FAccelByteModelsSetOnlineUsersResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDOnSetUserPresence_Parms Parms; \
	Parms.Response=Response; \
	DOnSetUserPresence.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DOnSetUserPresenceDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
