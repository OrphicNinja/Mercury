// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsListBlockerResponse;
#ifdef ACCELBYTEUE4SDK_DListOfBlockersResponseDelegate_generated_h
#error "DListOfBlockersResponseDelegate.generated.h already included, missing '#pragma once' in DListOfBlockersResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DListOfBlockersResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOfBlockersResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDListOfBlockersResponse_Parms \
{ \
	FAccelByteModelsListBlockerResponse Response; \
}; \
static inline void FDListOfBlockersResponse_DelegateWrapper(const FScriptDelegate& DListOfBlockersResponse, FAccelByteModelsListBlockerResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDListOfBlockersResponse_Parms Parms; \
	Parms.Response=Response; \
	DListOfBlockersResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DListOfBlockersResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
