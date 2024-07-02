// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3ECMCountChangedDelegateDelegate_generated_h
#error "PD3ECMCountChangedDelegateDelegate.generated.h already included, missing '#pragma once' in PD3ECMCountChangedDelegateDelegate.h"
#endif
#define STARBREEZE_PD3ECMCountChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3ECMCountChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventPD3ECMCountChangedDelegate_Parms \
{ \
	int32 NewCount; \
	int32 OldCount; \
	float AddedTime; \
	bool bInIsSignalScanActive; \
}; \
static inline void FPD3ECMCountChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PD3ECMCountChangedDelegate, int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) \
{ \
	_Script_Starbreeze_eventPD3ECMCountChangedDelegate_Parms Parms; \
	Parms.NewCount=NewCount; \
	Parms.OldCount=OldCount; \
	Parms.AddedTime=AddedTime; \
	Parms.bInIsSignalScanActive=bInIsSignalScanActive ? true : false; \
	PD3ECMCountChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3ECMCountChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
