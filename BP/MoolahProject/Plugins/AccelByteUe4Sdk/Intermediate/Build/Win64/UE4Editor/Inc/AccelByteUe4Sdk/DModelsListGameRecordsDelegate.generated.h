// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListGameRecords;
#ifdef ACCELBYTEUE4SDK_DModelsListGameRecordsDelegate_generated_h
#error "DModelsListGameRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsListGameRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsListGameRecordsDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListGameRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsListGameRecords_Parms \
{ \
	FAccelByteModelsListGameRecords Response; \
}; \
static inline void FDModelsListGameRecords_DelegateWrapper(const FScriptDelegate& DModelsListGameRecords, FAccelByteModelsListGameRecords Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsListGameRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsListGameRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListGameRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
