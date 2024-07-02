// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRejectFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DRejectFriendsResponseDelegate_generated_h
#error "DRejectFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DRejectFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRejectFriendsResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRejectFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRejectFriendsResponse_Parms \
{ \
	FAccelByteModelsRejectFriendsResponse Response; \
}; \
static inline void FDRejectFriendsResponse_DelegateWrapper(const FScriptDelegate& DRejectFriendsResponse, FAccelByteModelsRejectFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDRejectFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DRejectFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRejectFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
