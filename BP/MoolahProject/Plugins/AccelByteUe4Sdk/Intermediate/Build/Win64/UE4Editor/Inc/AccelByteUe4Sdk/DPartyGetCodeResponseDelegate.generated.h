// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyGetCodeResponse;
#ifdef ACCELBYTEUE4SDK_DPartyGetCodeResponseDelegate_generated_h
#error "DPartyGetCodeResponseDelegate.generated.h already included, missing '#pragma once' in DPartyGetCodeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyGetCodeResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetCodeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyGetCodeResponse_Parms \
{ \
	FAccelByteModelsPartyGetCodeResponse Response; \
}; \
static inline void FDPartyGetCodeResponse_DelegateWrapper(const FScriptDelegate& DPartyGetCodeResponse, FAccelByteModelsPartyGetCodeResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyGetCodeResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyGetCodeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetCodeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
