// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsCancelFriendsResponse;
#ifdef ACCELBYTEUE4SDK_DCancelFriendsResponseDelegate_generated_h
#error "DCancelFriendsResponseDelegate.generated.h already included, missing '#pragma once' in DCancelFriendsResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DCancelFriendsResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelFriendsResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDCancelFriendsResponse_Parms \
{ \
	FAccelByteModelsCancelFriendsResponse Response; \
}; \
static inline void FDCancelFriendsResponse_DelegateWrapper(const FScriptDelegate& DCancelFriendsResponse, FAccelByteModelsCancelFriendsResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDCancelFriendsResponse_Parms Parms; \
	Parms.Response=Response; \
	DCancelFriendsResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCancelFriendsResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
