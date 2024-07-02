// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsLeavePartyResponse;
#ifdef ACCELBYTEUE4SDK_DLeavePartyResponseDelegate_generated_h
#error "DLeavePartyResponseDelegate.generated.h already included, missing '#pragma once' in DLeavePartyResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DLeavePartyResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DLeavePartyResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDLeavePartyResponse_Parms \
{ \
	FAccelByteModelsLeavePartyResponse Response; \
}; \
static inline void FDLeavePartyResponse_DelegateWrapper(const FScriptDelegate& DLeavePartyResponse, FAccelByteModelsLeavePartyResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDLeavePartyResponse_Parms Parms; \
	Parms.Response=Response; \
	DLeavePartyResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DLeavePartyResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
