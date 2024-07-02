// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserRecord;
#ifdef ACCELBYTEUE4SDK_DModelsUserRecordDelegate_generated_h
#error "DModelsUserRecordDelegate.generated.h already included, missing '#pragma once' in DModelsUserRecordDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserRecordDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRecordDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserRecord_Parms \
{ \
	FAccelByteModelsUserRecord Response; \
}; \
static inline void FDModelsUserRecord_DelegateWrapper(const FScriptDelegate& DModelsUserRecord, FAccelByteModelsUserRecord Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserRecord_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserRecord.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserRecordDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
