// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccountUserData;
#ifdef ACCELBYTEUE4SDK_DUserDataHandlerDelegate_generated_h
#error "DUserDataHandlerDelegate.generated.h already included, missing '#pragma once' in DUserDataHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUserDataHandlerDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserDataHandlerDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUserDataHandler_Parms \
{ \
	FAccountUserData Result; \
}; \
static inline void FDUserDataHandler_DelegateWrapper(const FScriptDelegate& DUserDataHandler, FAccountUserData const& Result) \
{ \
	_Script_AccelByteUe4Sdk_eventDUserDataHandler_Parms Parms; \
	Parms.Result=Result; \
	DUserDataHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserDataHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
