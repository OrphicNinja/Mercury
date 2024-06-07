// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserSeasonInfo;
#ifdef ACCELBYTEUE4SDK_DModelsUserSeasonInfoDelegate_generated_h
#error "DModelsUserSeasonInfoDelegate.generated.h already included, missing '#pragma once' in DModelsUserSeasonInfoDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsUserSeasonInfoDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserSeasonInfoDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsUserSeasonInfo_Parms \
{ \
	FAccelByteModelsUserSeasonInfo Response; \
}; \
static inline void FDModelsUserSeasonInfo_DelegateWrapper(const FScriptDelegate& DModelsUserSeasonInfo, FAccelByteModelsUserSeasonInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsUserSeasonInfo_Parms Parms; \
	Parms.Response=Response; \
	DModelsUserSeasonInfo.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsUserSeasonInfoDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
