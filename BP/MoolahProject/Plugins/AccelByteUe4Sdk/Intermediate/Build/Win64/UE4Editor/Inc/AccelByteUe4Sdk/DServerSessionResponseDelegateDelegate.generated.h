// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsServerSessionResponse;
#ifdef ACCELBYTEUE4SDK_DServerSessionResponseDelegateDelegate_generated_h
#error "DServerSessionResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DServerSessionResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerSessionResponseDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerSessionResponseDelegate_Parms \
{ \
	FAccelByteModelsServerSessionResponse Response; \
}; \
static inline void FDServerSessionResponseDelegate_DelegateWrapper(const FScriptDelegate& DServerSessionResponseDelegate, FAccelByteModelsServerSessionResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerSessionResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DServerSessionResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerSessionResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
