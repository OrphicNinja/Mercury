// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsAcceptFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DAcceptFriendsResponseDelegate_generated_h
#error "DAcceptFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DAcceptFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAcceptFriendsResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAcceptFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAcceptFriendsResponse_Parms \
{ \
	FAccelByteModelsAcceptFriendsResponse Response; \
}; \
static inline void FDAcceptFriendsResponse_DelegateWrapper(const FScriptDelegate& DAcceptFriendsResponse, FAccelByteModelsAcceptFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAcceptFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DAcceptFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAcceptFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
