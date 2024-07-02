// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3HostageDemandChangedDelegate_generated_h
#error "PD3HostageDemandChangedDelegate.generated.h already included, missing '#pragma once' in PD3HostageDemandChangedDelegate.h"
#endif
#define STARBREEZE_PD3HostageDemandChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HostageDemandChangedDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPD3HostageDemandChanged_Parms \
{ \
	uint8 OldNrHostages; \
	uint8 NewNrHostages; \
}; \
static inline void FPD3HostageDemandChanged_DelegateWrapper(const FMulticastScriptDelegate& PD3HostageDemandChanged, uint8 OldNrHostages, uint8 NewNrHostages) \
{ \
	_Script_Starbreeze_eventPD3HostageDemandChanged_Parms Parms; \
	Parms.OldNrHostages=OldNrHostages; \
	Parms.NewNrHostages=NewNrHostages; \
	PD3HostageDemandChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HostageDemandChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
