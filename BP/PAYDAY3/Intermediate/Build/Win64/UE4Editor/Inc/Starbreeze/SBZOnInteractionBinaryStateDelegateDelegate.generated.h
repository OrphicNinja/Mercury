// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnInteractionBinaryStateDelegateDelegate_generated_h
#error "SBZOnInteractionBinaryStateDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnInteractionBinaryStateDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnInteractionBinaryStateDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInteractionBinaryStateDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInteractionBinaryStateDelegate_Parms \
{ \
	bool BNewState; \
}; \
static inline void FSBZOnInteractionBinaryStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInteractionBinaryStateDelegate, bool BNewState) \
{ \
	_Script_Starbreeze_eventSBZOnInteractionBinaryStateDelegate_Parms Parms; \
	Parms.BNewState=BNewState ? true : false; \
	SBZOnInteractionBinaryStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInteractionBinaryStateDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
