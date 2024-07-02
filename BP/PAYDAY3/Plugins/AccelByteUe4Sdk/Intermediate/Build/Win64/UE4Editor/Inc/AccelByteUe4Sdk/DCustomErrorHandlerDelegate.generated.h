// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectWrapper;
#ifdef ACCELBYTEUE4SDK_DCustomErrorHandlerDelegate_generated_h
#error "DCustomErrorHandlerDelegate.generated.h already included, missing '#pragma once' in DCustomErrorHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DCustomErrorHandlerDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCustomErrorHandlerDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDCustomErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
	FJsonObjectWrapper ErrorObject; \
}; \
static inline void FDCustomErrorHandler_DelegateWrapper(const FScriptDelegate& DCustomErrorHandler, int32 ErrorCode, const FString& ErrorMessage, FJsonObjectWrapper const& ErrorObject) \
{ \
	_Script_AccelByteUe4Sdk_eventDCustomErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ErrorObject=ErrorObject; \
	DCustomErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCustomErrorHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
