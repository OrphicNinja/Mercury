// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsRejectConsentRequest;
#ifdef ACCELBYTEUE4SDK_DSetRejectConsentResponseDelegate_generated_h
#error "DSetRejectConsentResponseDelegate.generated.h already included, missing '#pragma once' in DSetRejectConsentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSetRejectConsentResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetRejectConsentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSetRejectConsentResponse_Parms \
{ \
	FAccelByteModelsRejectConsentRequest Response; \
}; \
static inline void FDSetRejectConsentResponse_DelegateWrapper(const FScriptDelegate& DSetRejectConsentResponse, FAccelByteModelsRejectConsentRequest Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSetRejectConsentResponse_Parms Parms; \
	Parms.Response=Response; \
	DSetRejectConsentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetRejectConsentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
