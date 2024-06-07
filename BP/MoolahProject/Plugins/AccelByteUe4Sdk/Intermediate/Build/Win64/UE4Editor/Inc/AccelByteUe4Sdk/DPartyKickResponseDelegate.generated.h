// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsKickPartyMemberResponse;
#ifdef ACCELBYTEUE4SDK_DPartyKickResponseDelegate_generated_h
#error "DPartyKickResponseDelegate.generated.h already included, missing '#pragma once' in DPartyKickResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyKickResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyKickResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyKickResponse_Parms \
{ \
	FAccelByteModelsKickPartyMemberResponse Response; \
}; \
static inline void FDPartyKickResponse_DelegateWrapper(const FScriptDelegate& DPartyKickResponse, FAccelByteModelsKickPartyMemberResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyKickResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyKickResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyKickResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
