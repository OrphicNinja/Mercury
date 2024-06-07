// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCGetPaginatedContentLikerResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCGetPaginatedContentLikerResponseDelegate_generated_h
#error "DModelsUGCGetPaginatedContentLikerResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCGetPaginatedContentLikerResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCGetPaginatedContentLikerResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetPaginatedContentLikerResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCGetPaginatedContentLikerResponse_Parms \
{ \
	FAccelByteModelsUGCGetPaginatedContentLikerResponseV2 Response; \
}; \
static inline void FDModelsUGCGetPaginatedContentLikerResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCGetPaginatedContentLikerResponse, FAccelByteModelsUGCGetPaginatedContentLikerResponseV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCGetPaginatedContentLikerResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCGetPaginatedContentLikerResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetPaginatedContentLikerResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
