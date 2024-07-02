// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsDataPartyResponse;
#ifdef ACCELBYTEUE4SDK_DDataPartyResponseDelegateDelegate_generated_h
#error "DDataPartyResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DDataPartyResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DDataPartyResponseDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDataPartyResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDDataPartyResponseDelegate_Parms \
{ \
	FAccelByteModelsDataPartyResponse Response; \
}; \
static inline void FDDataPartyResponseDelegate_DelegateWrapper(const FScriptDelegate& DDataPartyResponseDelegate, FAccelByteModelsDataPartyResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDDataPartyResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DDataPartyResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DDataPartyResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
