// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsAcceptAgreementResponse;
#ifdef ACCELBYTEUE4SDK_DModelsAcceptAgreementResponseDelegate_generated_h
#error "DModelsAcceptAgreementResponseDelegate.generated.h already included, missing '#pragma once' in DModelsAcceptAgreementResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DModelsAcceptAgreementResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsAcceptAgreementResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDModelsAcceptAgreementResponse_Parms \
{ \
	FAccelByteModelsAcceptAgreementResponse Response; \
}; \
static inline void FDModelsAcceptAgreementResponse_DelegateWrapper(const FScriptDelegate& DModelsAcceptAgreementResponse, FAccelByteModelsAcceptAgreementResponse Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDModelsAcceptAgreementResponse_Parms Parms; \
	Parms.Response=Response; \
	DModelsAcceptAgreementResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DModelsAcceptAgreementResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
