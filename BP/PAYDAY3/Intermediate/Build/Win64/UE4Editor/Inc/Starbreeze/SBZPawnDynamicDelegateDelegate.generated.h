// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STARBREEZE_SBZPawnDynamicDelegateDelegate_generated_h
#error "SBZPawnDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in SBZPawnDynamicDelegateDelegate.h"
#endif
#define STARBREEZE_SBZPawnDynamicDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPawnDynamicDelegateDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZPawnDynamicDelegate_Parms \
{ \
	APawn* Pawn; \
}; \
static inline void FSBZPawnDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZPawnDynamicDelegate, APawn* Pawn) \
{ \
	_Script_Starbreeze_eventSBZPawnDynamicDelegate_Parms Parms; \
	Parms.Pawn=Pawn; \
	SBZPawnDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPawnDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
