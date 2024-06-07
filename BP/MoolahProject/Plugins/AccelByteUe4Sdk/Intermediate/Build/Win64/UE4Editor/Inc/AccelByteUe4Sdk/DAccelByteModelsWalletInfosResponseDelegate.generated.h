// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsWalletInfoResponse;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsWalletInfosResponseDelegate_generated_h
#error "DAccelByteModelsWalletInfosResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsWalletInfosResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsWalletInfosResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsWalletInfosResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsWalletInfosResponse_Parms \
{ \
	FAccelByteModelsWalletInfoResponse Response; \
}; \
static inline void FDAccelByteModelsWalletInfosResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsWalletInfosResponse, FAccelByteModelsWalletInfoResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsWalletInfosResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsWalletInfosResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsWalletInfosResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
