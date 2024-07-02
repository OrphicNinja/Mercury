// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetOnlineUsersResponse;
#ifdef ACCELBYTEUE4SDK_DGetAllFriendsStatusResponseDelegate_generated_h
#error "DGetAllFriendsStatusResponseDelegate.generated.h already included, missing '#pragma once' in DGetAllFriendsStatusResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DGetAllFriendsStatusResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetAllFriendsStatusResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDGetAllFriendsStatusResponse_Parms \
{ \
	FAccelByteModelsGetOnlineUsersResponse Response; \
}; \
static inline void FDGetAllFriendsStatusResponse_DelegateWrapper(const FScriptDelegate& DGetAllFriendsStatusResponse, FAccelByteModelsGetOnlineUsersResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDGetAllFriendsStatusResponse_Parms Parms; \
	Parms.Response=Response; \
	DGetAllFriendsStatusResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetAllFriendsStatusResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
