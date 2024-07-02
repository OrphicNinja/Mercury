// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnInstallStateChangedDelegate_generated_h
#error "SBZOnInstallStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZOnInstallStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZOnInstallStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInstallStateChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInstallStateChanged_Parms \
{ \
	bool bIsGameInstallPending; \
}; \
static inline void FSBZOnInstallStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInstallStateChanged, bool bIsGameInstallPending) \
{ \
	_Script_Starbreeze_eventSBZOnInstallStateChanged_Parms Parms; \
	Parms.bIsGameInstallPending=bIsGameInstallPending ? true : false; \
	SBZOnInstallStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInstallStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
