// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyData;
#ifdef ACCELBYTEUE4SDK_DPartyGetDataResponseDelegate_generated_h
#error "DPartyGetDataResponseDelegate.generated.h already included, missing '#pragma once' in DPartyGetDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyGetDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyGetDataResponse_Parms \
{ \
	FAccelByteModelsPartyData Response; \
}; \
static inline void FDPartyGetDataResponse_DelegateWrapper(const FScriptDelegate& DPartyGetDataResponse, FAccelByteModelsPartyData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyGetDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyGetDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
