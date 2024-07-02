// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPagedPlatformLinks;
#ifdef ACCELBYTEUE4SDK_DPagedPlatformLinksResponseDelegate_generated_h
#error "DPagedPlatformLinksResponseDelegate.generated.h already included, missing '#pragma once' in DPagedPlatformLinksResponseDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPagedPlatformLinksResponseDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPagedPlatformLinksResponseDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPagedPlatformLinksResponse_Parms \
{ \
	FPagedPlatformLinks Response; \
}; \
static inline void FDPagedPlatformLinksResponse_DelegateWrapper(const FScriptDelegate& DPagedPlatformLinksResponse, FPagedPlatformLinks Response) \
{ \
	_Script_AccelByteUe4Sdk_eventDPagedPlatformLinksResponse_Parms Parms; \
	Parms.Response=Response; \
	DPagedPlatformLinksResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPagedPlatformLinksResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
