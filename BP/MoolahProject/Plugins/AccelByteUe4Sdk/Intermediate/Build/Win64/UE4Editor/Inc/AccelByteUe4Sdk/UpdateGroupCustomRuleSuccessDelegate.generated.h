// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGroupInformation;
#ifdef ACCELBYTEUE4SDK_UpdateGroupCustomRuleSuccessDelegate_generated_h
#error "UpdateGroupCustomRuleSuccessDelegate.generated.h already included, missing '#pragma once' in UpdateGroupCustomRuleSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_UpdateGroupCustomRuleSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupCustomRuleSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventUpdateGroupCustomRuleSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Response; \
}; \
static inline void FUpdateGroupCustomRuleSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupCustomRuleSuccess, FAccelByteModelsGroupInformation const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventUpdateGroupCustomRuleSuccess_Parms Parms; \
	Parms.Response=Response; \
	UpdateGroupCustomRuleSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupCustomRuleSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
