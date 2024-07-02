// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DConnectionClosedDelegateDelegate_generated_h
#error "DConnectionClosedDelegateDelegate.generated.h already included, missing '#pragma once' in DConnectionClosedDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DConnectionClosedDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DConnectionClosedDelegateDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms \
{ \
	int32 StatusCode; \
	FString Reason; \
	bool bWasClean; \
}; \
static inline void FDConnectionClosedDelegate_DelegateWrapper(const FScriptDelegate& DConnectionClosedDelegate, int32 StatusCode, const FString& Reason, bool bWasClean) \
{ \
	_Script_AccelByteUe4Sdk_eventDConnectionClosedDelegate_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.bWasClean=bWasClean ? true : false; \
	DConnectionClosedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DConnectionClosedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
