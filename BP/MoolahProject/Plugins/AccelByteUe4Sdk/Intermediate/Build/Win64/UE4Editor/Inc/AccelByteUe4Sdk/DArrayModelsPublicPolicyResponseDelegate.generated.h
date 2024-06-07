// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsPublicPolicyResponse;
#ifdef ACCELBYTEUE4SDK_DArrayModelsPublicPolicyResponseDelegate_generated_h
#error "DArrayModelsPublicPolicyResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsPublicPolicyResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsPublicPolicyResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsPublicPolicyResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsPublicPolicyResponse_Parms \
{ \
	FArrayModelsPublicPolicyResponse Response; \
}; \
static inline void FDArrayModelsPublicPolicyResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsPublicPolicyResponse, FArrayModelsPublicPolicyResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsPublicPolicyResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsPublicPolicyResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsPublicPolicyResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
