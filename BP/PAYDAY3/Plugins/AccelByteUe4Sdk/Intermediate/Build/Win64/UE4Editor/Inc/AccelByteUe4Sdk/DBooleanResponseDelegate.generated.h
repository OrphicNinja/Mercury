// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCELBYTEUE4SDK_DBooleanResponseDelegate_generated_h
#error "DBooleanResponseDelegate.generated.h already included, missing '#pragma once' in DBooleanResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DBooleanResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBooleanResponseDelegate_h_5_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDBooleanResponse_Parms \
{ \
	bool Response; \
}; \
static inline void FDBooleanResponse_DelegateWrapper(const FScriptDelegate& DBooleanResponse, bool Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDBooleanResponse_Parms Parms; \
	Parms.Response=Response ? true : false; \
	DBooleanResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DBooleanResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
