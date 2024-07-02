// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSetSessionAttributesResponse;
#ifdef ACCELBYTEUE4SDK_DSetSessionAttributeResponseDelegate_generated_h
#error "DSetSessionAttributeResponseDelegate.generated.h already included, missing '#pragma once' in DSetSessionAttributeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSetSessionAttributeResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetSessionAttributeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSetSessionAttributeResponse_Parms \
{ \
	FAccelByteModelsSetSessionAttributesResponse Response; \
}; \
static inline void FDSetSessionAttributeResponse_DelegateWrapper(const FScriptDelegate& DSetSessionAttributeResponse, FAccelByteModelsSetSessionAttributesResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSetSessionAttributeResponse_Parms Parms; \
	Parms.Response=Response; \
	DSetSessionAttributeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSetSessionAttributeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
