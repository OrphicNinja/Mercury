// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetSessionAttributesResponse;
#ifdef ACCELBYTEUE4SDK_DGetSessionAttributeResponseDelegate_generated_h
#error "DGetSessionAttributeResponseDelegate.generated.h already included, missing '#pragma once' in DGetSessionAttributeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DGetSessionAttributeResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetSessionAttributeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDGetSessionAttributeResponse_Parms \
{ \
	FAccelByteModelsGetSessionAttributesResponse Response; \
}; \
static inline void FDGetSessionAttributeResponse_DelegateWrapper(const FScriptDelegate& DGetSessionAttributeResponse, FAccelByteModelsGetSessionAttributesResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDGetSessionAttributeResponse_Parms Parms; \
	Parms.Response=Response; \
	DGetSessionAttributeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetSessionAttributeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
