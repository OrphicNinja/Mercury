// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsPlatformValidateUserItemPurchaseResponse;
#ifdef ACCELBYTEUE4SDK_DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate_generated_h
#error "DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate.generated.h already included, missing '#pragma once' in DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDAccelByteModelsPlatformValidateUserItemPurchaseResponse_Parms \
{ \
	TArray<FAccelByteModelsPlatformValidateUserItemPurchaseResponse> Response; \
}; \
static inline void FDAccelByteModelsPlatformValidateUserItemPurchaseResponse_DelegateWrapper(const FScriptDelegate& DAccelByteModelsPlatformValidateUserItemPurchaseResponse, const TArray<FAccelByteModelsPlatformValidateUserItemPurchaseResponse>& Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDAccelByteModelsPlatformValidateUserItemPurchaseResponse_Parms Parms; \
	Parms.Response=Response; \
	DAccelByteModelsPlatformValidateUserItemPurchaseResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
