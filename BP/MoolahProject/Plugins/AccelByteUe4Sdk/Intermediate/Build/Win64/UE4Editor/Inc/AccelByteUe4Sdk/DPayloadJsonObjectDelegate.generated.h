// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectWrapper;
#ifdef ACCELBYTEUE4SDK_DPayloadJsonObjectDelegate_generated_h
#error "DPayloadJsonObjectDelegate.generated.h already included, missing '#pragma once' in DPayloadJsonObjectDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPayloadJsonObjectDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPayloadJsonObjectDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPayloadJsonObject_Parms \
{ \
	FJsonObjectWrapper Response; \
	FJsonObjectWrapper ReturnValue; \
}; \
static inline FJsonObjectWrapper FDPayloadJsonObject_DelegateWrapper(const FScriptDelegate& DPayloadJsonObject, FJsonObjectWrapper Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPayloadJsonObject_Parms Parms; \
	Parms.Response=Response; \
	DPayloadJsonObject.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPayloadJsonObjectDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
