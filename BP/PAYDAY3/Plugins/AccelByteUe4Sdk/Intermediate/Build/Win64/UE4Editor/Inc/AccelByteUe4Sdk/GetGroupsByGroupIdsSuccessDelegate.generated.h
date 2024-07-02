// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetGroupListResponse;
#ifdef ACCELBYTEUE4SDK_GetGroupsByGroupIdsSuccessDelegate_generated_h
#error "GetGroupsByGroupIdsSuccessDelegate.generated.h already included, missing '#pragma once' in GetGroupsByGroupIdsSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_GetGroupsByGroupIdsSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupsByGroupIdsSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventGetGroupsByGroupIdsSuccess_Parms \
{ \
	FAccelByteModelsGetGroupListResponse Response; \
}; \
static inline void FGetGroupsByGroupIdsSuccess_DelegateWrapper(const FScriptDelegate& GetGroupsByGroupIdsSuccess, FAccelByteModelsGetGroupListResponse const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventGetGroupsByGroupIdsSuccess_Parms Parms; \
	Parms.Response=Response; \
	GetGroupsByGroupIdsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_GetGroupsByGroupIdsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
