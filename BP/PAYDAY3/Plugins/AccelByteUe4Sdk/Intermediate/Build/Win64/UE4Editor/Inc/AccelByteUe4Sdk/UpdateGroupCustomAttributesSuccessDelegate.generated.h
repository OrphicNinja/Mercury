// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGroupInformation;
#ifdef ACCELBYTEUE4SDK_UpdateGroupCustomAttributesSuccessDelegate_generated_h
#error "UpdateGroupCustomAttributesSuccessDelegate.generated.h already included, missing '#pragma once' in UpdateGroupCustomAttributesSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_UpdateGroupCustomAttributesSuccessDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupCustomAttributesSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventUpdateGroupCustomAttributesSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Response; \
}; \
static inline void FUpdateGroupCustomAttributesSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupCustomAttributesSuccess, FAccelByteModelsGroupInformation const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventUpdateGroupCustomAttributesSuccess_Parms Parms; \
	Parms.Response=Response; \
	UpdateGroupCustomAttributesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupCustomAttributesSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
