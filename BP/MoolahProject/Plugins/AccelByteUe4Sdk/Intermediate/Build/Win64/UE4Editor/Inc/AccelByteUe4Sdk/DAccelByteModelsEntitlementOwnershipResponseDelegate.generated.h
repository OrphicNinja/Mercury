// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsEntitlementOwnership;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsEntitlementOwnershipResponseDelegate_generated_h
#error "DAccelByteModelsEntitlementOwnershipResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsEntitlementOwnershipResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsEntitlementOwnershipResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementOwnershipResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementOwnershipResponse_Parms \
{ \
	FAccelByteModelsEntitlementOwnership Response; \
}; \
static inline void FDAccelByteModelsEntitlementOwnershipResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsEntitlementOwnershipResponse, FAccelByteModelsEntitlementOwnership Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsEntitlementOwnershipResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsEntitlementOwnershipResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsEntitlementOwnershipResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
