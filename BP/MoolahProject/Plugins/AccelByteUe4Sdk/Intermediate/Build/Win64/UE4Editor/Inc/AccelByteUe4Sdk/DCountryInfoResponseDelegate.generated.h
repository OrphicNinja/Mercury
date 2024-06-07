// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCountryInfo;
#ifdef ACCELBYTEUE4SDK_DCountryInfoResponseDelegate_generated_h
#error "DCountryInfoResponseDelegate.generated.h already included, missing '#pragma once' in DCountryInfoResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DCountryInfoResponseDelegate_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCountryInfoResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDCountryInfoResponse_Parms \
{ \
	FCountryInfo Response; \
}; \
static inline void FDCountryInfoResponse_DelegateWrapper(const FScriptDelegate& DCountryInfoResponse, FCountryInfo Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDCountryInfoResponse_Parms Parms; \
	Parms.Response=Response; \
	DCountryInfoResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DCountryInfoResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
