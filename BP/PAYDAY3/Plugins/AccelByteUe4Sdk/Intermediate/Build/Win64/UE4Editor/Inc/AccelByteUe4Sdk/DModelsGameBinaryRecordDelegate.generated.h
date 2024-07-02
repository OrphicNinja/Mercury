// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGameBinaryRecord;
#ifdef ACCELBYTEUE4SDK_DModelsGameBinaryRecordDelegate_generated_h
#error "DModelsGameBinaryRecordDelegate.generated.h already included, missing '#pragma once' in DModelsGameBinaryRecordDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsGameBinaryRecordDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsGameBinaryRecordDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsGameBinaryRecord_Parms \
{ \
	FAccelByteModelsGameBinaryRecord Response; \
}; \
static inline void FDModelsGameBinaryRecord_DelegateWrapper(const FScriptDelegate& DModelsGameBinaryRecord, FAccelByteModelsGameBinaryRecord Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsGameBinaryRecord_Parms Parms; \
	Parms.Response=Response; \
	DModelsGameBinaryRecord.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsGameBinaryRecordDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
