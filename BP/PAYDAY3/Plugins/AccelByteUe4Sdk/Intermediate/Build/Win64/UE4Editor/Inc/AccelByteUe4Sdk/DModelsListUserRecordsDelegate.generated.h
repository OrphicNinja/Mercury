// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FListAccelByteModelsUserRecord;
#ifdef ACCELBYTEUE4SDK_DModelsListUserRecordsDelegate_generated_h
#error "DModelsListUserRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsListUserRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsListUserRecordsDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListUserRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsListUserRecords_Parms \
{ \
	FListAccelByteModelsUserRecord Response; \
}; \
static inline void FDModelsListUserRecords_DelegateWrapper(const FScriptDelegate& DModelsListUserRecords, FListAccelByteModelsUserRecord Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsListUserRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsListUserRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListUserRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
