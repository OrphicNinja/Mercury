// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccountLinkConflictErrorJson;
#ifdef ACCELBYTEUE4SDK_DAccountLinkConflictErrorJsonResponseDelegate_generated_h
#error "DAccountLinkConflictErrorJsonResponseDelegate.generated.h already included, missing '#pragma once' in DAccountLinkConflictErrorJsonResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccountLinkConflictErrorJsonResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccountLinkConflictErrorJsonResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccountLinkConflictErrorJsonResponse_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
	FAccountLinkConflictErrorJson Response; \
}; \
static inline void FDAccountLinkConflictErrorJsonResponse_DelegateWrapper(const FScriptDelegate& DAccountLinkConflictErrorJsonResponse, int32 ErrorCode, const FString& ErrorMessage, FAccountLinkConflictErrorJson Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccountLinkConflictErrorJsonResponse_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Response=Response; \
	DAccountLinkConflictErrorJsonResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccountLinkConflictErrorJsonResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
