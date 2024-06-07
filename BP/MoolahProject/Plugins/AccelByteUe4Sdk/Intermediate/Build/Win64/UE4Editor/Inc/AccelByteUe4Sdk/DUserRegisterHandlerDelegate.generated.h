// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRegisterResponse;
#ifdef ACCELBYTEUE4SDK_DUserRegisterHandlerDelegate_generated_h
#error "DUserRegisterHandlerDelegate.generated.h already included, missing '#pragma once' in DUserRegisterHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DUserRegisterHandlerDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserRegisterHandlerDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDUserRegisterHandler_Parms \
{ \
	FRegisterResponse Result; \
}; \
static inline void FDUserRegisterHandler_DelegateWrapper(const FScriptDelegate& DUserRegisterHandler, FRegisterResponse const& Result) \
{ \
	_Script_AccelByteUe4Sdk_eventDUserRegisterHandler_Parms Parms; \
	Parms.Result=Result; \
	DUserRegisterHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DUserRegisterHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
