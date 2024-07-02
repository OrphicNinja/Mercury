// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
struct FAccelByteModelsQosServerList;
#ifdef STARBREEZE_OnOnlineGetRegionsEventDelegateDelegate_generated_h
#error "OnOnlineGetRegionsEventDelegateDelegate.generated.h already included, missing '#pragma once' in OnOnlineGetRegionsEventDelegateDelegate.h"
#endif
#define STARBREEZE_OnOnlineGetRegionsEventDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOnlineGetRegionsEventDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventOnOnlineGetRegionsEventDelegate_Parms \
{ \
	ESBZOnlineCode ErrorCode; \
	FAccelByteModelsQosServerList Regions; \
}; \
static inline void FOnOnlineGetRegionsEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOnlineGetRegionsEventDelegate, ESBZOnlineCode ErrorCode, FAccelByteModelsQosServerList const& Regions) \
{ \
	_Script_Starbreeze_eventOnOnlineGetRegionsEventDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Regions=Regions; \
	OnOnlineGetRegionsEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOnlineGetRegionsEventDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
