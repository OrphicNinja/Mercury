// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCGetPaginatedContentDownloaderResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCGetPaginatedContentDownloaderResponseDelegate_generated_h
#error "DModelsUGCGetPaginatedContentDownloaderResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCGetPaginatedContentDownloaderResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCGetPaginatedContentDownloaderResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetPaginatedContentDownloaderResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCGetPaginatedContentDownloaderResponse_Parms \
{ \
	FAccelByteModelsUGCGetPaginatedContentDownloaderResponseV2 Response; \
}; \
static inline void FDModelsUGCGetPaginatedContentDownloaderResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCGetPaginatedContentDownloaderResponse, FAccelByteModelsUGCGetPaginatedContentDownloaderResponseV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCGetPaginatedContentDownloaderResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCGetPaginatedContentDownloaderResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCGetPaginatedContentDownloaderResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
