// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListOutgoingFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DListOutgoingFriendsResponseDelegate_generated_h
#error "DListOutgoingFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DListOutgoingFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListOutgoingFriendsResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOutgoingFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListOutgoingFriendsResponse_Parms \
{ \
	FAccelByteModelsListOutgoingFriendsResponse Response; \
}; \
static inline void FDListOutgoingFriendsResponse_DelegateWrapper(const FScriptDelegate& DListOutgoingFriendsResponse, FAccelByteModelsListOutgoingFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListOutgoingFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DListOutgoingFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOutgoingFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
