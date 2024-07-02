// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPopulatedItemInfo;
#ifdef ACCELBYTEUE4SDK_DModelsPopulatedItemInfoResponseDelegate_generated_h
#error "DModelsPopulatedItemInfoResponseDelegate.generated.h already included, missing '#pragma once' in DModelsPopulatedItemInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsPopulatedItemInfoResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPopulatedItemInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsPopulatedItemInfoResponse_Parms \
{ \
	FAccelByteModelsPopulatedItemInfo Response; \
}; \
static inline void FDModelsPopulatedItemInfoResponse_DelegateWrapper(const FScriptDelegate& DModelsPopulatedItemInfoResponse, FAccelByteModelsPopulatedItemInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsPopulatedItemInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsPopulatedItemInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsPopulatedItemInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
