// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListBlockerResponse;
#ifdef ACCELBYTEUE4SDK_DListBlockerResponseDelegateDelegate_generated_h
#error "DListBlockerResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DListBlockerResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListBlockerResponseDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBlockerResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListBlockerResponseDelegate_Parms \
{ \
	FAccelByteModelsListBlockerResponse Response; \
}; \
static inline void FDListBlockerResponseDelegate_DelegateWrapper(const FScriptDelegate& DListBlockerResponseDelegate, FAccelByteModelsListBlockerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListBlockerResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DListBlockerResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListBlockerResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
