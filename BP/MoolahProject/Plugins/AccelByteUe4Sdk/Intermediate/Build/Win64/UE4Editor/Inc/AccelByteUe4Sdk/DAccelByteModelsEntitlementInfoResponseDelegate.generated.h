// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsEntitlementInfo;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsEntitlementInfoResponseDelegate_generated_h
#error "DAccelByteModelsEntitlementInfoResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsEntitlementInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsEntitlementInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementInfoResponse_Parms \
{ \
	FAccelByteModelsEntitlementInfo Response; \
}; \
static inline void FDAccelByteModelsEntitlementInfoResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsEntitlementInfoResponse, FAccelByteModelsEntitlementInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsEntitlementInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
