// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_OnIndexChangedDelegate_generated_h
#error "OnIndexChangedDelegate.generated.h already included, missing '#pragma once' in OnIndexChangedDelegate.h"
#endif
#define STARBREEZE_OnIndexChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnIndexChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventOnIndexChanged_Parms \
{ \
	int32 NewIndex; \
}; \
static inline void FOnIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIndexChanged, int32 NewIndex) \
{ \
	_Script_Starbreeze_eventOnIndexChanged_Parms Parms; \
	Parms.NewIndex=NewIndex; \
	OnIndexChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnIndexChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
