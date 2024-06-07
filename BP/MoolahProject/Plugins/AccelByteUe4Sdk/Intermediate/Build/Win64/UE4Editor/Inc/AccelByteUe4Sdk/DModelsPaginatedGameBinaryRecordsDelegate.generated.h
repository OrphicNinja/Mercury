// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedGameBinaryRecords;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedGameBinaryRecordsDelegate_generated_h
#error "DModelsPaginatedGameBinaryRecordsDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedGameBinaryRecordsDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedGameBinaryRecordsDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGameBinaryRecordsDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedGameBinaryRecords_Parms \
{ \
	FAccelByteModelsPaginatedGameBinaryRecords Response; \
}; \
static inline void FDModelsPaginatedGameBinaryRecords_DelegateWrapper(const FScriptDelegate& DModelsPaginatedGameBinaryRecords, FAccelByteModelsPaginatedGameBinaryRecords Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedGameBinaryRecords_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedGameBinaryRecords.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedGameBinaryRecordsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
