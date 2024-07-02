// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUnfriendResponse;
#ifdef ACCELBYTEUE4SDK_DUnfriendResponseDelegate_generated_h
#error "DUnfriendResponseDelegate.generated.h already included, missing '#pragma once' in DUnfriendResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUnfriendResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnfriendResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUnfriendResponse_Parms \
{ \
	FAccelByteModelsUnfriendResponse Response; \
}; \
static inline void FDUnfriendResponse_DelegateWrapper(const FScriptDelegate& DUnfriendResponse, FAccelByteModelsUnfriendResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDUnfriendResponse_Parms Parms; \
	Parms.Response=Response; \
	DUnfriendResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUnfriendResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
