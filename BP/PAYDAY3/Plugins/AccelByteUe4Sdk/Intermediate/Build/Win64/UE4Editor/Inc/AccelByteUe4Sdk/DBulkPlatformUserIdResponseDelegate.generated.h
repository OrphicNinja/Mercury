// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBulkPlatformUserIdResponse;
#ifdef ACCELBYTEUE4SDK_DBulkPlatformUserIdResponseDelegate_generated_h
#error "DBulkPlatformUserIdResponseDelegate.generated.h already included, missing '#pragma once' in DBulkPlatformUserIdResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DBulkPlatformUserIdResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBulkPlatformUserIdResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDBulkPlatformUserIdResponse_Parms \
{ \
	FBulkPlatformUserIdResponse Response; \
}; \
static inline void FDBulkPlatformUserIdResponse_DelegateWrapper(const FScriptDelegate& DBulkPlatformUserIdResponse, FBulkPlatformUserIdResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDBulkPlatformUserIdResponse_Parms Parms; \
	Parms.Response=Response; \
	DBulkPlatformUserIdResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBulkPlatformUserIdResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
