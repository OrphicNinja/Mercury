// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsItemInfo;
#ifdef ACCELBYTEUE4SDK_DModelsItemInfoResponseDelegate_generated_h
#error "DModelsItemInfoResponseDelegate.generated.h already included, missing '#pragma once' in DModelsItemInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsItemInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsItemInfoResponse_Parms \
{ \
	FAccelByteModelsItemInfo Response; \
}; \
static inline void FDModelsItemInfoResponse_DelegateWrapper(const FScriptDelegate& DModelsItemInfoResponse, FAccelByteModelsItemInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsItemInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsItemInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
