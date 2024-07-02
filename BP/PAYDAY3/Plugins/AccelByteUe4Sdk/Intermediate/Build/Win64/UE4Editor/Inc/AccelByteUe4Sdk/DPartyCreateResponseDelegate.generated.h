// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsCreatePartyResponse;
#ifdef ACCELBYTEUE4SDK_DPartyCreateResponseDelegate_generated_h
#error "DPartyCreateResponseDelegate.generated.h already included, missing '#pragma once' in DPartyCreateResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyCreateResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyCreateResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyCreateResponse_Parms \
{ \
	FAccelByteModelsCreatePartyResponse Response; \
}; \
static inline void FDPartyCreateResponse_DelegateWrapper(const FScriptDelegate& DPartyCreateResponse, FAccelByteModelsCreatePartyResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyCreateResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyCreateResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyCreateResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
