// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAsyncLoadingProgress;
#ifdef STARBREEZE_SBZPreMatchAsyncLoadingProgressDelegate_generated_h
#error "SBZPreMatchAsyncLoadingProgressDelegate.generated.h already included, missing '#pragma once' in SBZPreMatchAsyncLoadingProgressDelegate.h"
#endif
#define STARBREEZE_SBZPreMatchAsyncLoadingProgressDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPreMatchAsyncLoadingProgressDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZPreMatchAsyncLoadingProgress_Parms \
{ \
	FSBZAsyncLoadingProgress AsyncLoadingProgressData; \
}; \
static inline void FSBZPreMatchAsyncLoadingProgress_DelegateWrapper(const FMulticastScriptDelegate& SBZPreMatchAsyncLoadingProgress, FSBZAsyncLoadingProgress const& AsyncLoadingProgressData) \
{ \
	_Script_Starbreeze_eventSBZPreMatchAsyncLoadingProgress_Parms Parms; \
	Parms.AsyncLoadingProgressData=AsyncLoadingProgressData; \
	SBZPreMatchAsyncLoadingProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPreMatchAsyncLoadingProgressDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
