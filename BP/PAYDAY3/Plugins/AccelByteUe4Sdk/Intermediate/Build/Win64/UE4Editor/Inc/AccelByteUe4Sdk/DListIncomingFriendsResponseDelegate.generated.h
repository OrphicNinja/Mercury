// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListIncomingFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DListIncomingFriendsResponseDelegate_generated_h
#error "DListIncomingFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DListIncomingFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListIncomingFriendsResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListIncomingFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListIncomingFriendsResponse_Parms \
{ \
	FAccelByteModelsListIncomingFriendsResponse Response; \
}; \
static inline void FDListIncomingFriendsResponse_DelegateWrapper(const FScriptDelegate& DListIncomingFriendsResponse, FAccelByteModelsListIncomingFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListIncomingFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DListIncomingFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListIncomingFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
