// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUpdateScreenshotsV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUpdateScreenshotsV2Delegate_generated_h
#error "DModelsUGCUpdateScreenshotsV2Delegate.generated.h already included, missing '#pragma once' in DModelsUGCUpdateScreenshotsV2Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUpdateScreenshotsV2Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateScreenshotsV2Delegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUpdateScreenshotsV2_Parms \
{ \
	FAccelByteModelsUGCUpdateScreenshotsV2 Response; \
}; \
static inline void FDModelsUGCUpdateScreenshotsV2_DelegateWrapper(const FScriptDelegate& DModelsUGCUpdateScreenshotsV2, FAccelByteModelsUGCUpdateScreenshotsV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUpdateScreenshotsV2_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUpdateScreenshotsV2.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateScreenshotsV2Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
