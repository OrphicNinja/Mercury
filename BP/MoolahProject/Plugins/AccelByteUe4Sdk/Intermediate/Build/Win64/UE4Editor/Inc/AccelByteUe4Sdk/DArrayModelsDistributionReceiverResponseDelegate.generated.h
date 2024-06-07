// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsDistributionReceiver;
#ifdef ACCELBYTEUE4SDK_DArrayModelsDistributionReceiverResponseDelegate_generated_h
#error "DArrayModelsDistributionReceiverResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsDistributionReceiverResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsDistributionReceiverResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsDistributionReceiverResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsDistributionReceiverResponse_Parms \
{ \
	FArrayModelsDistributionReceiver Response; \
}; \
static inline void FDArrayModelsDistributionReceiverResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsDistributionReceiverResponse, FArrayModelsDistributionReceiver Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsDistributionReceiverResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsDistributionReceiverResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsDistributionReceiverResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
