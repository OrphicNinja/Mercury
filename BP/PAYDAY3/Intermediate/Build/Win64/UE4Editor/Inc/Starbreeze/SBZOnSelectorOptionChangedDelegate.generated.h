// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnSelectorOptionChangedDelegate_generated_h
#error "SBZOnSelectorOptionChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnSelectorOptionChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnSelectorOptionChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnSelectorOptionChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnSelectorOptionChanged_Parms \
{ \
	int32 NewIndex; \
}; \
static inline void FSBZOnSelectorOptionChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnSelectorOptionChanged, int32 NewIndex) \
{ \
	_Script_Starbreeze_eventSBZOnSelectorOptionChanged_Parms Parms; \
	Parms.NewIndex=NewIndex; \
	SBZOnSelectorOptionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnSelectorOptionChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
