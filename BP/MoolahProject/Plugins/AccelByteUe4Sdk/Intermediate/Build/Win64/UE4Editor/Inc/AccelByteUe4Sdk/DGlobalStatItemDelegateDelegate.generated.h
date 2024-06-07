// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGlobalStatItemValueResponse;
#ifdef ACCELBYTEUE4SDK_DGlobalStatItemDelegateDelegate_generated_h
#error "DGlobalStatItemDelegateDelegate.generated.h already included, missing '#pragma once' in DGlobalStatItemDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DGlobalStatItemDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGlobalStatItemDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDGlobalStatItemDelegate_Parms \
{ \
	FAccelByteModelsGlobalStatItemValueResponse Response; \
}; \
static inline void FDGlobalStatItemDelegate_DelegateWrapper(const FScriptDelegate& DGlobalStatItemDelegate, FAccelByteModelsGlobalStatItemValueResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDGlobalStatItemDelegate_Parms Parms; \
	Parms.Response=Response; \
	DGlobalStatItemDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DGlobalStatItemDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
