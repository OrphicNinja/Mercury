// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsCategoryInfo;
#ifdef ACCELBYTEUE4SDK_DModelsCategoryInfoResponseDelegate_generated_h
#error "DModelsCategoryInfoResponseDelegate.generated.h already included, missing '#pragma once' in DModelsCategoryInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsCategoryInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsCategoryInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsCategoryInfoResponse_Parms \
{ \
	FAccelByteModelsCategoryInfo Response; \
}; \
static inline void FDModelsCategoryInfoResponse_DelegateWrapper(const FScriptDelegate& DModelsCategoryInfoResponse, FAccelByteModelsCategoryInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsCategoryInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsCategoryInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsCategoryInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
