// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGameRecord;
#ifdef ACCELBYTEUE4SDK_DModelsGameRecordDelegate_generated_h
#error "DModelsGameRecordDelegate.generated.h already included, missing '#pragma once' in DModelsGameRecordDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsGameRecordDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsGameRecordDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsGameRecord_Parms \
{ \
	FAccelByteModelsGameRecord Response; \
}; \
static inline void FDModelsGameRecord_DelegateWrapper(const FScriptDelegate& DModelsGameRecord, FAccelByteModelsGameRecord Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsGameRecord_Parms Parms; \
	Parms.Response=Response; \
	DModelsGameRecord.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsGameRecordDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
