// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSeasonInfo;
#ifdef ACCELBYTEUE4SDK_DModelsSeasonInfoDelegate_generated_h
#error "DModelsSeasonInfoDelegate.generated.h already included, missing '#pragma once' in DModelsSeasonInfoDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsSeasonInfoDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSeasonInfoDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsSeasonInfo_Parms \
{ \
	FAccelByteModelsSeasonInfo Response; \
}; \
static inline void FDModelsSeasonInfo_DelegateWrapper(const FScriptDelegate& DModelsSeasonInfo, FAccelByteModelsSeasonInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsSeasonInfo_Parms Parms; \
	Parms.Response=Response; \
	DModelsSeasonInfo.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsSeasonInfoDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
