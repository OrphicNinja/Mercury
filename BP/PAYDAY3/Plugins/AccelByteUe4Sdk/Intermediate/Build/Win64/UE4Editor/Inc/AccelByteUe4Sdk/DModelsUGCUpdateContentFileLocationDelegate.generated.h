// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCUpdateContentFileLocationResponseV2;
#ifdef ACCELBYTEUE4SDK_DModelsUGCUpdateContentFileLocationDelegate_generated_h
#error "DModelsUGCUpdateContentFileLocationDelegate.generated.h already included, missing '#pragma once' in DModelsUGCUpdateContentFileLocationDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUGCUpdateContentFileLocationDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateContentFileLocationDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUGCUpdateContentFileLocation_Parms \
{ \
	FAccelByteModelsUGCUpdateContentFileLocationResponseV2 Response; \
}; \
static inline void FDModelsUGCUpdateContentFileLocation_DelegateWrapper(const FScriptDelegate& DModelsUGCUpdateContentFileLocation, FAccelByteModelsUGCUpdateContentFileLocationResponseV2 Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUGCUpdateContentFileLocation_Parms Parms; \
	Parms.Response=Response; \
	DModelsUGCUpdateContentFileLocation.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUGCUpdateContentFileLocationDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
