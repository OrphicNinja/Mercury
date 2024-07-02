// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DArrayUint8Delegate_generated_h
#error "DArrayUint8Delegate.generated.h already included, missing '#pragma once' in DArrayUint8Delegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayUint8Delegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayUint8Delegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayUint8_Parms \
{ \
	TArray<uint8> Response; \
}; \
static inline void FDArrayUint8_DelegateWrapper(const FScriptDelegate& DArrayUint8, const TArray<uint8>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayUint8_Parms Parms; \
	Parms.Response=Response; \
	DArrayUint8.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayUint8Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
