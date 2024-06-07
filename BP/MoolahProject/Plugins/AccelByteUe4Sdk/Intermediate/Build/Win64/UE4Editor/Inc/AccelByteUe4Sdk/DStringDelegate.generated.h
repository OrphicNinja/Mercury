// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DStringDelegate_generated_h
#error "DStringDelegate.generated.h already included, missing '#pragma once' in DStringDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DStringDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DStringDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDString_Parms \
{ \
	FString Response; \
}; \
static inline void FDString_DelegateWrapper(const FScriptDelegate& DString, const FString& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDString_Parms Parms; \
	Parms.Response=Response; \
	DString.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DStringDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
