// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DUserEligiblePlayHandlerDelegate_generated_h
#error "DUserEligiblePlayHandlerDelegate.generated.h already included, missing '#pragma once' in DUserEligiblePlayHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUserEligiblePlayHandlerDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserEligiblePlayHandlerDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUserEligiblePlayHandler_Parms \
{ \
	bool Result; \
}; \
static inline void FDUserEligiblePlayHandler_DelegateWrapper(const FScriptDelegate& DUserEligiblePlayHandler, bool Result) \
{ \
	_Script_AccelByteUe4Sdk_eventDUserEligiblePlayHandler_Parms Parms; \
	Parms.Result=Result ? true : false; \
	DUserEligiblePlayHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserEligiblePlayHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
