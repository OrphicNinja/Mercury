// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsFulfillmentResult;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsFulfillmentResponseDelegate_generated_h
#error "DAccelByteModelsFulfillmentResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsFulfillmentResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsFulfillmentResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsFulfillmentResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsFulfillmentResponse_Parms \
{ \
	FAccelByteModelsFulfillmentResult Response; \
}; \
static inline void FDAccelByteModelsFulfillmentResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsFulfillmentResponse, FAccelByteModelsFulfillmentResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsFulfillmentResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsFulfillmentResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsFulfillmentResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
