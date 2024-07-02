// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnFBIActivationChangedDelegate_generated_h
#error "SBZOnFBIActivationChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnFBIActivationChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnFBIActivationChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnFBIActivationChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnFBIActivationChanged_Parms \
{ \
	bool bIsActive; \
}; \
static inline void FSBZOnFBIActivationChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnFBIActivationChanged, bool bIsActive) \
{ \
	_Script_Starbreeze_eventSBZOnFBIActivationChanged_Parms Parms; \
	Parms.bIsActive=bIsActive ? true : false; \
	SBZOnFBIActivationChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnFBIActivationChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
