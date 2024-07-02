// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyDataNotif;
#ifdef ACCELBYTEUE4SDK_DPartyWriteDataResponseDelegate_generated_h
#error "DPartyWriteDataResponseDelegate.generated.h already included, missing '#pragma once' in DPartyWriteDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyWriteDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyWriteDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyWriteDataResponse_Parms \
{ \
	FAccelByteModelsPartyDataNotif Response; \
}; \
static inline void FDPartyWriteDataResponse_DelegateWrapper(const FScriptDelegate& DPartyWriteDataResponse, FAccelByteModelsPartyDataNotif Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyWriteDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyWriteDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyWriteDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
