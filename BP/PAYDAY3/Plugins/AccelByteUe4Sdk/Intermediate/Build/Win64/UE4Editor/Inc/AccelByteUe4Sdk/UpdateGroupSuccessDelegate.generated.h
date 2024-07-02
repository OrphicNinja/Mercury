// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGroupInformation;
#ifdef ACCELBYTEUE4SDK_UpdateGroupSuccessDelegate_generated_h
#error "UpdateGroupSuccessDelegate.generated.h already included, missing '#pragma once' in UpdateGroupSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_UpdateGroupSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventUpdateGroupSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Response; \
}; \
static inline void FUpdateGroupSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupSuccess, FAccelByteModelsGroupInformation const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventUpdateGroupSuccess_Parms Parms; \
	Parms.Response=Response; \
	UpdateGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
