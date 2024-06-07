// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyInviteResponse;
#ifdef ACCELBYTEUE4SDK_DPartyInviteResponseDelegate_generated_h
#error "DPartyInviteResponseDelegate.generated.h already included, missing '#pragma once' in DPartyInviteResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyInviteResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyInviteResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyInviteResponse_Parms \
{ \
	FAccelByteModelsPartyInviteResponse Response; \
}; \
static inline void FDPartyInviteResponse_DelegateWrapper(const FScriptDelegate& DPartyInviteResponse, FAccelByteModelsPartyInviteResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyInviteResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyInviteResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyInviteResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
