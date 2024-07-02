// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUploadContentURLResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUploadContentResponseDelegate_generated_h
#error "DModelsUGCUploadContentResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCUploadContentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUploadContentResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUploadContentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUploadContentResponse_Parms \
{ \
	FAccelByteModelsUGCUploadContentURLResponseV2 Response; \
}; \
static inline void FDModelsUGCUploadContentResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCUploadContentResponse, FAccelByteModelsUGCUploadContentURLResponseV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUploadContentResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUploadContentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUploadContentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
