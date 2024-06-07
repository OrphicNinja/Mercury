// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsCategoryInfoResponse;
#ifdef ACCELBYTEUE4SDK_DArrayModelsCategoryInfoResponseDelegate_generated_h
#error "DArrayModelsCategoryInfoResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsCategoryInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsCategoryInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsCategoryInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsCategoryInfoResponse_Parms \
{ \
	FArrayModelsCategoryInfoResponse Response; \
}; \
static inline void FDArrayModelsCategoryInfoResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsCategoryInfoResponse, FArrayModelsCategoryInfoResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsCategoryInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsCategoryInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsCategoryInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
