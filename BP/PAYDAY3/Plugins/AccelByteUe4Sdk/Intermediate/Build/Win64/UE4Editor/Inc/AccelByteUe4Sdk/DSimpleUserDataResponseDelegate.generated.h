// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimpleUserData;
#ifdef ACCELBYTEUE4SDK_DSimpleUserDataResponseDelegate_generated_h
#error "DSimpleUserDataResponseDelegate.generated.h already included, missing '#pragma once' in DSimpleUserDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSimpleUserDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSimpleUserDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSimpleUserDataResponse_Parms \
{ \
	FSimpleUserData Response; \
}; \
static inline void FDSimpleUserDataResponse_DelegateWrapper(const FScriptDelegate& DSimpleUserDataResponse, FSimpleUserData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSimpleUserDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DSimpleUserDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSimpleUserDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
