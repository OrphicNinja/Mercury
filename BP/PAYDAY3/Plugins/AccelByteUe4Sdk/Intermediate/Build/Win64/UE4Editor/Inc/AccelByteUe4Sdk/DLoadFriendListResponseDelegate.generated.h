// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsLoadFriendListResponse;
#ifdef ACCELBYTEUE4SDK_DLoadFriendListResponseDelegate_generated_h
#error "DLoadFriendListResponseDelegate.generated.h already included, missing '#pragma once' in DLoadFriendListResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DLoadFriendListResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DLoadFriendListResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDLoadFriendListResponse_Parms \
{ \
	FAccelByteModelsLoadFriendListResponse Response; \
}; \
static inline void FDLoadFriendListResponse_DelegateWrapper(const FScriptDelegate& DLoadFriendListResponse, FAccelByteModelsLoadFriendListResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDLoadFriendListResponse_Parms Parms; \
	Parms.Response=Response; \
	DLoadFriendListResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DLoadFriendListResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
