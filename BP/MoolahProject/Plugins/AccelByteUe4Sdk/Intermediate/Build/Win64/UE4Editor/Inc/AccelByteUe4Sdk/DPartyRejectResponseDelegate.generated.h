// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyRejectResponse;
#ifdef ACCELBYTEUE4SDK_DPartyRejectResponseDelegate_generated_h
#error "DPartyRejectResponseDelegate.generated.h already included, missing '#pragma once' in DPartyRejectResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyRejectResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyRejectResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyRejectResponse_Parms \
{ \
	FAccelByteModelsPartyRejectResponse Response; \
}; \
static inline void FDPartyRejectResponse_DelegateWrapper(const FScriptDelegate& DPartyRejectResponse, FAccelByteModelsPartyRejectResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyRejectResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyRejectResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyRejectResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
