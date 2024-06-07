// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPagedOrderInfo;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsPagedOrderInfoResponseDelegate_generated_h
#error "DAccelByteModelsPagedOrderInfoResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsPagedOrderInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsPagedOrderInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsPagedOrderInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsPagedOrderInfoResponse_Parms \
{ \
	FAccelByteModelsPagedOrderInfo Response; \
}; \
static inline void FDAccelByteModelsPagedOrderInfoResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsPagedOrderInfoResponse, FAccelByteModelsPagedOrderInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsPagedOrderInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsPagedOrderInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsPagedOrderInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
