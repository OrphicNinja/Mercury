// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyJoinResponse;
#ifdef ACCELBYTEUE4SDK_DPartyJoinViaCodeResponseDelegate_generated_h
#error "DPartyJoinViaCodeResponseDelegate.generated.h already included, missing '#pragma once' in DPartyJoinViaCodeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyJoinViaCodeResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinViaCodeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyJoinViaCodeResponse_Parms \
{ \
	FAccelByteModelsPartyJoinResponse Response; \
}; \
static inline void FDPartyJoinViaCodeResponse_DelegateWrapper(const FScriptDelegate& DPartyJoinViaCodeResponse, FAccelByteModelsPartyJoinResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyJoinViaCodeResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyJoinViaCodeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyJoinViaCodeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
