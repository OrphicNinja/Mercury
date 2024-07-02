// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnFBIActivationDelegate_generated_h
#error "SBZOnFBIActivationDelegate.generated.h already included, missing '#pragma once' in SBZOnFBIActivationDelegate.h"
#endif
#define STARBREEZE_SBZOnFBIActivationDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnFBIActivationDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnFBIActivation_Parms \
{ \
	bool bIsActive; \
}; \
static inline void FSBZOnFBIActivation_DelegateWrapper(const FMulticastScriptDelegate& SBZOnFBIActivation, bool bIsActive) \
{ \
	_Script_Starbreeze_eventSBZOnFBIActivation_Parms Parms; \
	Parms.bIsActive=bIsActive ? true : false; \
	SBZOnFBIActivation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnFBIActivationDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
