// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsServerInfo;
#ifdef ACCELBYTEUE4SDK_DServerInfoDelegateDelegate_generated_h
#error "DServerInfoDelegateDelegate.generated.h already included, missing '#pragma once' in DServerInfoDelegateDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DServerInfoDelegateDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerInfoDelegateDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDServerInfoDelegate_Parms \
{ \
	FAccelByteModelsServerInfo Response; \
}; \
static inline void FDServerInfoDelegate_DelegateWrapper(const FScriptDelegate& DServerInfoDelegate, FAccelByteModelsServerInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDServerInfoDelegate_Parms Parms; \
	Parms.Response=Response; \
	DServerInfoDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DServerInfoDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
