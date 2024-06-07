// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FListBulkUserInfo;
#ifdef ACCELBYTEUE4SDK_DListBulkUserInfoResponseDelegate_generated_h
#error "DListBulkUserInfoResponseDelegate.generated.h already included, missing '#pragma once' in DListBulkUserInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListBulkUserInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBulkUserInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListBulkUserInfoResponse_Parms \
{ \
	FListBulkUserInfo Response; \
}; \
static inline void FDListBulkUserInfoResponse_DelegateWrapper(const FScriptDelegate& DListBulkUserInfoResponse, FListBulkUserInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListBulkUserInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DListBulkUserInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBulkUserInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
