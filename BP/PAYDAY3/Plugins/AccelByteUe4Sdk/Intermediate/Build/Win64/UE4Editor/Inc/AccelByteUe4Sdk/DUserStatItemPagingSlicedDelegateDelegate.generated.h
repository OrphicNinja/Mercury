// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserStatItemPagingSlicedResult;
#ifdef ACCELBYTEUE4SDK_DUserStatItemPagingSlicedDelegateDelegate_generated_h
#error "DUserStatItemPagingSlicedDelegateDelegate.generated.h already included, missing '#pragma once' in DUserStatItemPagingSlicedDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUserStatItemPagingSlicedDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserStatItemPagingSlicedDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUserStatItemPagingSlicedDelegate_Parms \
{ \
	FAccelByteModelsUserStatItemPagingSlicedResult Response; \
}; \
static inline void FDUserStatItemPagingSlicedDelegate_DelegateWrapper(const FScriptDelegate& DUserStatItemPagingSlicedDelegate, FAccelByteModelsUserStatItemPagingSlicedResult Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDUserStatItemPagingSlicedDelegate_Parms Parms; \
	Parms.Response=Response; \
	DUserStatItemPagingSlicedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserStatItemPagingSlicedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
