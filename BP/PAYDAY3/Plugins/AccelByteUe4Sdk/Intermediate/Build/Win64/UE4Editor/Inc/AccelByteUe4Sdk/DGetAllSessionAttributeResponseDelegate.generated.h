// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGetAllSessionAttributesResponse;
#ifdef ACCELBYTEUE4SDK_DGetAllSessionAttributeResponseDelegate_generated_h
#error "DGetAllSessionAttributeResponseDelegate.generated.h already included, missing '#pragma once' in DGetAllSessionAttributeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DGetAllSessionAttributeResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetAllSessionAttributeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDGetAllSessionAttributeResponse_Parms \
{ \
	FAccelByteModelsGetAllSessionAttributesResponse Response; \
}; \
static inline void FDGetAllSessionAttributeResponse_DelegateWrapper(const FScriptDelegate& DGetAllSessionAttributeResponse, FAccelByteModelsGetAllSessionAttributesResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDGetAllSessionAttributeResponse_Parms Parms; \
	Parms.Response=Response; \
	DGetAllSessionAttributeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGetAllSessionAttributeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
