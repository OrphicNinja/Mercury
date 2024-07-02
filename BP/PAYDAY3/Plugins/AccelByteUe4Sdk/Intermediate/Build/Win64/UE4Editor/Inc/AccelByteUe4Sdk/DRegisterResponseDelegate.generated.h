// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRegisterResponse;
#ifdef ACCELBYTEUE4SDK_DRegisterResponseDelegate_generated_h
#error "DRegisterResponseDelegate.generated.h already included, missing '#pragma once' in DRegisterResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DRegisterResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRegisterResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDRegisterResponse_Parms \
{ \
	FRegisterResponse Response; \
}; \
static inline void FDRegisterResponse_DelegateWrapper(const FScriptDelegate& DRegisterResponse, FRegisterResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDRegisterResponse_Parms Parms; \
	Parms.Response=Response; \
	DRegisterResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DRegisterResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
