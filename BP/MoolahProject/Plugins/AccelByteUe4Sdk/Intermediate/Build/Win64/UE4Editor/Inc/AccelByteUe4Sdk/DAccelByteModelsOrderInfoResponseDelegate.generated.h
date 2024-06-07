// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsOrderInfo;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsOrderInfoResponseDelegate_generated_h
#error "DAccelByteModelsOrderInfoResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsOrderInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsOrderInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsOrderInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsOrderInfoResponse_Parms \
{ \
	FAccelByteModelsOrderInfo Response; \
}; \
static inline void FDAccelByteModelsOrderInfoResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsOrderInfoResponse, FAccelByteModelsOrderInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsOrderInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsOrderInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsOrderInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
