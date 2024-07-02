// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListUserBinaryRecords;
#ifdef ACCELBYTEUE4SDK_DModelsListUserBinaryRecordsDelegate_generated_h
#error "DModelsListUserBinaryRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsListUserBinaryRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsListUserBinaryRecordsDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListUserBinaryRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsListUserBinaryRecords_Parms \
{ \
	FAccelByteModelsListUserBinaryRecords Response; \
}; \
static inline void FDModelsListUserBinaryRecords_DelegateWrapper(const FScriptDelegate& DModelsListUserBinaryRecords, FAccelByteModelsListUserBinaryRecords Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsListUserBinaryRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsListUserBinaryRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsListUserBinaryRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
