// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DErrorHandlerDelegate_generated_h
#error "DErrorHandlerDelegate.generated.h already included, missing '#pragma once' in DErrorHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DErrorHandlerDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DErrorHandlerDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FDErrorHandler_DelegateWrapper(const FScriptDelegate& DErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_AccelByteUe4Sdk_eventDErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	DErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DErrorHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
