// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRequestFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DRequestFriendsResponseDelegate_generated_h
#error "DRequestFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DRequestFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRequestFriendsResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRequestFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRequestFriendsResponse_Parms \
{ \
	FAccelByteModelsRequestFriendsResponse Response; \
}; \
static inline void FDRequestFriendsResponse_DelegateWrapper(const FScriptDelegate& DRequestFriendsResponse, FAccelByteModelsRequestFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDRequestFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DRequestFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRequestFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
