// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsWalletInfo;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsWalletInfoResponseDelegate_generated_h
#error "DAccelByteModelsWalletInfoResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsWalletInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsWalletInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsWalletInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsWalletInfoResponse_Parms \
{ \
	FAccelByteModelsWalletInfo Response; \
}; \
static inline void FDAccelByteModelsWalletInfoResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsWalletInfoResponse, FAccelByteModelsWalletInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsWalletInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsWalletInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsWalletInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
