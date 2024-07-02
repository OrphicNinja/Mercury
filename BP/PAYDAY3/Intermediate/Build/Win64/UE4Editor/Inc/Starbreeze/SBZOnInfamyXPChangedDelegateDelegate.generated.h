// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnInfamyXPChangedDelegateDelegate_generated_h
#error "SBZOnInfamyXPChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnInfamyXPChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnInfamyXPChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInfamyXPChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInfamyXPChangedDelegate_Parms \
{ \
	int32 NewXP; \
	int32 PreviousXP; \
}; \
static inline void FSBZOnInfamyXPChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInfamyXPChangedDelegate, int32 NewXP, int32 PreviousXP) \
{ \
	_Script_Starbreeze_eventSBZOnInfamyXPChangedDelegate_Parms Parms; \
	Parms.NewXP=NewXP; \
	Parms.PreviousXP=PreviousXP; \
	SBZOnInfamyXPChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInfamyXPChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
