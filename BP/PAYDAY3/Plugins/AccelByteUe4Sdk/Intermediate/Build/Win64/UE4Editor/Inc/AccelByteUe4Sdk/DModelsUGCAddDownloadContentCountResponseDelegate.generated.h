// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCAddDownloadContentCountResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCAddDownloadContentCountResponseDelegate_generated_h
#error "DModelsUGCAddDownloadContentCountResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCAddDownloadContentCountResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCAddDownloadContentCountResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCAddDownloadContentCountResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCAddDownloadContentCountResponse_Parms \
{ \
	FAccelByteModelsUGCAddDownloadContentCountResponseV2 Response; \
}; \
static inline void FDModelsUGCAddDownloadContentCountResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCAddDownloadContentCountResponse, FAccelByteModelsUGCAddDownloadContentCountResponseV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCAddDownloadContentCountResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCAddDownloadContentCountResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCAddDownloadContentCountResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
