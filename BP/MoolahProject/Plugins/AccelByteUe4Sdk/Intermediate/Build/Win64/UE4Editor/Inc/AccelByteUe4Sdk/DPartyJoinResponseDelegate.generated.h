// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyJoinResponse;
#ifdef ACCELBYTEUE4SDK_DPartyJoinResponseDelegate_generated_h
#error "DPartyJoinResponseDelegate.generated.h already included, missing '#pragma once' in DPartyJoinResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyJoinResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyJoinResponse_Parms \
{ \
	FAccelByteModelsPartyJoinResponse Response; \
}; \
static inline void FDPartyJoinResponse_DelegateWrapper(const FScriptDelegate& DPartyJoinResponse, FAccelByteModelsPartyJoinResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyJoinResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyJoinResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
