// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccountUserData;
#ifdef ACCELBYTEUE4SDK_DAccountUserDataResponseDelegate_generated_h
#error "DAccountUserDataResponseDelegate.generated.h already included, missing '#pragma once' in DAccountUserDataResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccountUserDataResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccountUserDataResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccountUserDataResponse_Parms \
{ \
	FAccountUserData Response; \
}; \
static inline void FDAccountUserDataResponse_DelegateWrapper(const FScriptDelegate& DAccountUserDataResponse, FAccountUserData Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccountUserDataResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccountUserDataResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccountUserDataResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
