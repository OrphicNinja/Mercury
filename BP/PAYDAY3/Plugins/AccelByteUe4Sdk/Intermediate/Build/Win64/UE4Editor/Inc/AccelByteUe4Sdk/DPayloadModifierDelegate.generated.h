// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectWrapper;
#ifdef ACCELBYTEUE4SDK_DPayloadModifierDelegate_generated_h
#error "DPayloadModifierDelegate.generated.h already included, missing '#pragma once' in DPayloadModifierDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPayloadModifierDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPayloadModifierDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPayloadModifier_Parms \
{ \
	FJsonObjectWrapper Payload; \
}; \
static inline void FDPayloadModifier_DelegateWrapper(const FScriptDelegate& DPayloadModifier, FJsonObjectWrapper Payload) \
{ \
	_Script_AccelByteUe4Sdk_eventDPayloadModifier_Parms Parms; \
	Parms.Payload=Payload; \
	DPayloadModifier.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPayloadModifierDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
