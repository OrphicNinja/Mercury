// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListGameBinaryRecords;
#ifdef ACCELBYTEUE4SDK_DModelsListGameBinaryRecordsDelegate_generated_h
#error "DModelsListGameBinaryRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsListGameBinaryRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsListGameBinaryRecordsDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListGameBinaryRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsListGameBinaryRecords_Parms \
{ \
	FAccelByteModelsListGameBinaryRecords Response; \
}; \
static inline void FDModelsListGameBinaryRecords_DelegateWrapper(const FScriptDelegate& DModelsListGameBinaryRecords, FAccelByteModelsListGameBinaryRecords Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsListGameBinaryRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsListGameBinaryRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListGameBinaryRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
