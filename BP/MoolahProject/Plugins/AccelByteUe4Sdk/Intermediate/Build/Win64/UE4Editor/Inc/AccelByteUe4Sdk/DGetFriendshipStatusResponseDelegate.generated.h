// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetFriendshipStatusResponse;
#ifdef ACCELBYTEUE4SDK_DGetFriendshipStatusResponseDelegate_generated_h
#error "DGetFriendshipStatusResponseDelegate.generated.h already included, missing '#pragma once' in DGetFriendshipStatusResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DGetFriendshipStatusResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetFriendshipStatusResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDGetFriendshipStatusResponse_Parms \
{ \
	FAccelByteModelsGetFriendshipStatusResponse Response; \
}; \
static inline void FDGetFriendshipStatusResponse_DelegateWrapper(const FScriptDelegate& DGetFriendshipStatusResponse, FAccelByteModelsGetFriendshipStatusResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDGetFriendshipStatusResponse_Parms Parms; \
	Parms.Response=Response; \
	DGetFriendshipStatusResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetFriendshipStatusResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
