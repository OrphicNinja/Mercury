// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsOrderHistoryInfo;
#ifdef ACCELBYTEUE4SDK_DArrayModelsOrderHistoryInfoResponseDelegate_generated_h
#error "DArrayModelsOrderHistoryInfoResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsOrderHistoryInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsOrderHistoryInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsOrderHistoryInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsOrderHistoryInfoResponse_Parms \
{ \
	FArrayModelsOrderHistoryInfo Response; \
}; \
static inline void FDArrayModelsOrderHistoryInfoResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsOrderHistoryInfoResponse, FArrayModelsOrderHistoryInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsOrderHistoryInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsOrderHistoryInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsOrderHistoryInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
