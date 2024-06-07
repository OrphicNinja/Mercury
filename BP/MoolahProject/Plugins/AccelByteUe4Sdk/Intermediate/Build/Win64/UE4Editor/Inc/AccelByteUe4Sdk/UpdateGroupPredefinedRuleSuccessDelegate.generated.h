// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGroupInformation;
#ifdef ACCELBYTEUE4SDK_UpdateGroupPredefinedRuleSuccessDelegate_generated_h
#error "UpdateGroupPredefinedRuleSuccessDelegate.generated.h already included, missing '#pragma once' in UpdateGroupPredefinedRuleSuccessDelegate.h"
#endif
#define ACCELBYTEUE4SDK_UpdateGroupPredefinedRuleSuccessDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupPredefinedRuleSuccessDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventUpdateGroupPredefinedRuleSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Response; \
}; \
static inline void FUpdateGroupPredefinedRuleSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupPredefinedRuleSuccess, FAccelByteModelsGroupInformation const& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventUpdateGroupPredefinedRuleSuccess_Parms Parms; \
	Parms.Response=Response; \
	UpdateGroupPredefinedRuleSuccess.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_UpdateGroupPredefinedRuleSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
