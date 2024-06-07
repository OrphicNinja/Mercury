// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyDataNotif;
#ifdef ACCELBYTEUE4SDK_DPartyGetStorageResponseDelegate_generated_h
#error "DPartyGetStorageResponseDelegate.generated.h already included, missing '#pragma once' in DPartyGetStorageResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyGetStorageResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetStorageResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyGetStorageResponse_Parms \
{ \
	FAccelByteModelsPartyDataNotif Response; \
}; \
static inline void FDPartyGetStorageResponse_DelegateWrapper(const FScriptDelegate& DPartyGetStorageResponse, FAccelByteModelsPartyDataNotif Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyGetStorageResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyGetStorageResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGetStorageResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
