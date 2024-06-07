// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPartyGenerateCodeResponse;
#ifdef ACCELBYTEUE4SDK_DPartyGenerateCodeResponseDelegate_generated_h
#error "DPartyGenerateCodeResponseDelegate.generated.h already included, missing '#pragma once' in DPartyGenerateCodeResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPartyGenerateCodeResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGenerateCodeResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPartyGenerateCodeResponse_Parms \
{ \
	FAccelByteModelsPartyGenerateCodeResponse Response; \
}; \
static inline void FDPartyGenerateCodeResponse_DelegateWrapper(const FScriptDelegate& DPartyGenerateCodeResponse, FAccelByteModelsPartyGenerateCodeResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPartyGenerateCodeResponse_Parms Parms; \
	Parms.Response=Response; \
	DPartyGenerateCodeResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPartyGenerateCodeResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
