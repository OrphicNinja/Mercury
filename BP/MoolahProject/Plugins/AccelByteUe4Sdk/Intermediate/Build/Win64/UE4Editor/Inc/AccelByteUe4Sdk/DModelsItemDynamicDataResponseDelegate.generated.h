// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsItemDynamicData;
#ifdef ACCELBYTEUE4SDK_DModelsItemDynamicDataResponseDelegate_generated_h
#error "DModelsItemDynamicDataResponseDelegate.generated.h already included, missing '#pragma once' in DModelsItemDynamicDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsItemDynamicDataResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemDynamicDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsItemDynamicDataResponse_Parms \
{ \
	FAccelByteModelsItemDynamicData Response; \
}; \
static inline void FDModelsItemDynamicDataResponse_DelegateWrapper(const FScriptDelegate& DModelsItemDynamicDataResponse, FAccelByteModelsItemDynamicData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsItemDynamicDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsItemDynamicDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsItemDynamicDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
