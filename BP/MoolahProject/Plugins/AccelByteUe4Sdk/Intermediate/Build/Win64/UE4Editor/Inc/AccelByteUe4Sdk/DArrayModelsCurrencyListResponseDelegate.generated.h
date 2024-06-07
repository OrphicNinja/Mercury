// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArrayModelsCurrencyList;
#ifdef ACCELBYTEUE4SDK_DArrayModelsCurrencyListResponseDelegate_generated_h
#error "DArrayModelsCurrencyListResponseDelegate.generated.h already included, missing '#pragma once' in DArrayModelsCurrencyListResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DArrayModelsCurrencyListResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsCurrencyListResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDArrayModelsCurrencyListResponse_Parms \
{ \
	FArrayModelsCurrencyList Response; \
}; \
static inline void FDArrayModelsCurrencyListResponse_DelegateWrapper(const FScriptDelegate& DArrayModelsCurrencyListResponse, FArrayModelsCurrencyList Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDArrayModelsCurrencyListResponse_Parms Parms; \
	Parms.Response=Response; \
	DArrayModelsCurrencyListResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DArrayModelsCurrencyListResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
