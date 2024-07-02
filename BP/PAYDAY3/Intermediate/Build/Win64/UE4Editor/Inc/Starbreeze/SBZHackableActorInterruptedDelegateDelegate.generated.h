// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZHackableActorInterruptReason : uint8;
#ifdef STARBREEZE_SBZHackableActorInterruptedDelegateDelegate_generated_h
#error "SBZHackableActorInterruptedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZHackableActorInterruptedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZHackableActorInterruptedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackableActorInterruptedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZHackableActorInterruptedDelegate_Parms \
{ \
	ESBZHackableActorInterruptReason Reason; \
}; \
static inline void FSBZHackableActorInterruptedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZHackableActorInterruptedDelegate, ESBZHackableActorInterruptReason Reason) \
{ \
	_Script_Starbreeze_eventSBZHackableActorInterruptedDelegate_Parms Parms; \
	Parms.Reason=Reason; \
	SBZHackableActorInterruptedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackableActorInterruptedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
