// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZEndMissionResultData;
#ifdef STARBREEZE_SBZMissionResultReadyDelegateDelegate_generated_h
#error "SBZMissionResultReadyDelegateDelegate.generated.h already included, missing '#pragma once' in SBZMissionResultReadyDelegateDelegate.h"
#endif
#define STARBREEZE_SBZMissionResultReadyDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMissionResultReadyDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZMissionResultReadyDelegate_Parms \
{ \
	FSBZEndMissionResultData ResultData; \
}; \
static inline void FSBZMissionResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZMissionResultReadyDelegate, FSBZEndMissionResultData const& ResultData) \
{ \
	_Script_Starbreeze_eventSBZMissionResultReadyDelegate_Parms Parms; \
	Parms.ResultData=ResultData; \
	SBZMissionResultReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMissionResultReadyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
