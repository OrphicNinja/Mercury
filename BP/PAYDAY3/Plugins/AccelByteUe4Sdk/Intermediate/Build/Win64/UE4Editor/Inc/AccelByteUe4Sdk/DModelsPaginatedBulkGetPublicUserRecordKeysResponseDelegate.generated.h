// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse;
#ifdef ACCELBYTEUE4SDK_DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate_generated_h
#error "DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPaginatedBulkGetPublicUserRecordKeysResponse_Parms \
{ \
	FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse Response; \
}; \
static inline void FDModelsPaginatedBulkGetPublicUserRecordKeysResponse_DelegateWrapper(const FScriptDelegate& DModelsPaginatedBulkGetPublicUserRecordKeysResponse, FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPaginatedBulkGetPublicUserRecordKeysResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPaginatedBulkGetPublicUserRecordKeysResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
