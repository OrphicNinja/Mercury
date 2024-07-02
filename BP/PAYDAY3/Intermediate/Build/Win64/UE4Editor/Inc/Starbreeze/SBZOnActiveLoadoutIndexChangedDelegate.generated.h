// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnActiveLoadoutIndexChangedDelegate_generated_h
#error "SBZOnActiveLoadoutIndexChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnActiveLoadoutIndexChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnActiveLoadoutIndexChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnActiveLoadoutIndexChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnActiveLoadoutIndexChanged_Parms \
{ \
	int32 ActiveLoadoutIndex; \
}; \
static inline void FSBZOnActiveLoadoutIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnActiveLoadoutIndexChanged, int32 ActiveLoadoutIndex) \
{ \
	_Script_Starbreeze_eventSBZOnActiveLoadoutIndexChanged_Parms Parms; \
	Parms.ActiveLoadoutIndex=ActiveLoadoutIndex; \
	SBZOnActiveLoadoutIndexChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnActiveLoadoutIndexChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
