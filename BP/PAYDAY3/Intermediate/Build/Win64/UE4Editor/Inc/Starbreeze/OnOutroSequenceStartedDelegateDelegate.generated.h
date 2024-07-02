// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnOutroSequenceStartedDelegateDelegate_generated_h
#error "OnOutroSequenceStartedDelegateDelegate.generated.h already included, missing '#pragma once' in OnOutroSequenceStartedDelegateDelegate.h"
#endif
#define STARBREEZE_OnOutroSequenceStartedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnOutroSequenceStartedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnOutroSequenceStartedDelegate_Parms \
{ \
	int32 OutroVersion; \
}; \
static inline void FOnOutroSequenceStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOutroSequenceStartedDelegate, const int32 OutroVersion) \
{ \
	_Script_Starbreeze_eventOnOutroSequenceStartedDelegate_Parms Parms; \
	Parms.OutroVersion=OutroVersion; \
	OnOutroSequenceStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnOutroSequenceStartedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
