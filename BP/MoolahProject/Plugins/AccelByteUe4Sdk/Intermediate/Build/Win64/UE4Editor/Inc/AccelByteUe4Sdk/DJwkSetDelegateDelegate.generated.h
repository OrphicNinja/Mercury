// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJwkSet;
#ifdef ACCELBYTEUE4SDK_DJwkSetDelegateDelegate_generated_h
#error "DJwkSetDelegateDelegate.generated.h already included, missing '#pragma once' in DJwkSetDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DJwkSetDelegateDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DJwkSetDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDJwkSetDelegate_Parms \
{ \
	FJwkSet Response; \
}; \
static inline void FDJwkSetDelegate_DelegateWrapper(const FScriptDelegate& DJwkSetDelegate, FJwkSet Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDJwkSetDelegate_Parms Parms; \
	Parms.Response=Response; \
	DJwkSetDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DJwkSetDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
