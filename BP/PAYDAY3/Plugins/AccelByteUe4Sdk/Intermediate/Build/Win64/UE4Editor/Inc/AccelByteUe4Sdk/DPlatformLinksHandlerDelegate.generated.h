// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPagedPlatformLinks;
#ifdef ACCELBYTEUE4SDK_DPlatformLinksHandlerDelegate_generated_h
#error "DPlatformLinksHandlerDelegate.generated.h already included, missing '#pragma once' in DPlatformLinksHandlerDelegate.h"
#endif
#define ACCELBYTEUE4SDK_DPlatformLinksHandlerDelegate_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPlatformLinksHandlerDelegate_h_6_DELEGATE \
struct _Script_AccelByteUe4Sdk_eventDPlatformLinksHandler_Parms \
{ \
	FPagedPlatformLinks PlatformLinks; \
}; \
static inline void FDPlatformLinksHandler_DelegateWrapper(const FScriptDelegate& DPlatformLinksHandler, FPagedPlatformLinks const& PlatformLinks) \
{ \
	_Script_AccelByteUe4Sdk_eventDPlatformLinksHandler_Parms Parms; \
	Parms.PlatformLinks=PlatformLinks; \
	DPlatformLinksHandler.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_DPlatformLinksHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
