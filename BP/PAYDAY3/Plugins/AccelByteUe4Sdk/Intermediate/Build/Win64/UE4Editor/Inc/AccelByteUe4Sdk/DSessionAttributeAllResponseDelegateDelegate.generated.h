// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetSessionAttributeAllResponse;
#ifdef ACCELBYTEUE4SDK_DSessionAttributeAllResponseDelegateDelegate_generated_h
#error "DSessionAttributeAllResponseDelegateDelegate.generated.h already included, missing '#pragma once' in DSessionAttributeAllResponseDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DSessionAttributeAllResponseDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSessionAttributeAllResponseDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDSessionAttributeAllResponseDelegate_Parms \
{ \
	FAccelByteModelsGetSessionAttributeAllResponse Response; \
}; \
static inline void FDSessionAttributeAllResponseDelegate_DelegateWrapper(const FScriptDelegate& DSessionAttributeAllResponseDelegate, FAccelByteModelsGetSessionAttributeAllResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDSessionAttributeAllResponseDelegate_Parms Parms; \
	Parms.Response=Response; \
	DSessionAttributeAllResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DSessionAttributeAllResponseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
