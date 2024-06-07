// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsReadyConsentRequest;
#ifdef ACCELBYTEUE4SDK_DSetReadyConsentResponseDelegate_generated_h
#error "DSetReadyConsentResponseDelegate.generated.h already included, missing '#pragma once' in DSetReadyConsentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSetReadyConsentResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetReadyConsentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSetReadyConsentResponse_Parms \
{ \
	FAccelByteModelsReadyConsentRequest Response; \
}; \
static inline void FDSetReadyConsentResponse_DelegateWrapper(const FScriptDelegate& DSetReadyConsentResponse, FAccelByteModelsReadyConsentRequest Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSetReadyConsentResponse_Parms Parms; \
	Parms.Response=Response; \
	DSetReadyConsentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetReadyConsentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
