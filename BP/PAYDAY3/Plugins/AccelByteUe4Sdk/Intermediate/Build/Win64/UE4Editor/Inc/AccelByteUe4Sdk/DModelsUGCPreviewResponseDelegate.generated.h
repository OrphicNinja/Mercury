// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCPreview;
#ifdef ACCELBYTEUE4SDK_DModelsUGCPreviewResponseDelegate_generated_h
#error "DModelsUGCPreviewResponseDelegate.generated.h already included, missing '#pragma once' in DModelsUGCPreviewResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCPreviewResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCPreviewResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCPreviewResponse_Parms \
{ \
	FAccelByteModelsUGCPreview Response; \
}; \
static inline void FDModelsUGCPreviewResponse_DelegateWrapper(const FScriptDelegate& DModelsUGCPreviewResponse, FAccelByteModelsUGCPreview Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCPreviewResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCPreviewResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCPreviewResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
