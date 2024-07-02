// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyPromoteLeaderResponse;
#ifdef ACCELBYTEUE4SDK_DPartyPromoteLeaderResponseDelegate_generated_h
#error "DPartyPromoteLeaderResponseDelegate.generated.h already included, missing '#pragma once' in DPartyPromoteLeaderResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyPromoteLeaderResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyPromoteLeaderResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyPromoteLeaderResponse_Parms \
{ \
	FAccelByteModelsPartyPromoteLeaderResponse Response; \
}; \
static inline void FDPartyPromoteLeaderResponse_DelegateWrapper(const FScriptDelegate& DPartyPromoteLeaderResponse, FAccelByteModelsPartyPromoteLeaderResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyPromoteLeaderResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyPromoteLeaderResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyPromoteLeaderResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
