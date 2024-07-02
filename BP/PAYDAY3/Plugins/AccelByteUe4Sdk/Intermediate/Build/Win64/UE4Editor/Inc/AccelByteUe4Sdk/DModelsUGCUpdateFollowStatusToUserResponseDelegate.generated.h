// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUpdateFollowStatusToUserResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUpdateFollowStatusToUserResponseDelegate_generated_h
#error "DModelsUGCUpdateFollowStatusToUserResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCUpdateFollowStatusToUserResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUpdateFollowStatusToUserResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateFollowStatusToUserResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUpdateFollowStatusToUserResponse_Parms \
{ \
	FAccelByteModelsUGCUpdateFollowStatusToUserResponse Response; \
}; \
static inline void FDModelsUGCUpdateFollowStatusToUserResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCUpdateFollowStatusToUserResponse, FAccelByteModelsUGCUpdateFollowStatusToUserResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUpdateFollowStatusToUserResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUpdateFollowStatusToUserResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateFollowStatusToUserResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
