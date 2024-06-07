// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUpdateLikeStatusToContentResponse;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUpdateLikeStatusToContentResponseDelegate_generated_h
#error "DModelsUGCUpdateLikeStatusToContentResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCUpdateLikeStatusToContentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUpdateLikeStatusToContentResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateLikeStatusToContentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUpdateLikeStatusToContentResponse_Parms \
{ \
	FAccelByteModelsUGCUpdateLikeStatusToContentResponse Response; \
}; \
static inline void FDModelsUGCUpdateLikeStatusToContentResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCUpdateLikeStatusToContentResponse, FAccelByteModelsUGCUpdateLikeStatusToContentResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUpdateLikeStatusToContentResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUpdateLikeStatusToContentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateLikeStatusToContentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
