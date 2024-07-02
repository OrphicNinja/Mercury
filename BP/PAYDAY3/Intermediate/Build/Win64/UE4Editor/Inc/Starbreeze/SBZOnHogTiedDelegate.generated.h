// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAICharacter;
#ifdef STARBREEZE_SBZOnHogTiedDelegate_generated_h
#error "SBZOnHogTiedDelegate.generated.h already included, missing '#pragma once' in SBZOnHogTiedDelegate.h"
#endif
#define STARBREEZE_SBZOnHogTiedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnHogTiedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnHogTied_Parms \
{ \
	ASBZAICharacter* Character; \
	bool bHogTied; \
}; \
static inline void FSBZOnHogTied_DelegateWrapper(const FMulticastScriptDelegate& SBZOnHogTied, ASBZAICharacter* Character, bool bHogTied) \
{ \
	_Script_Starbreeze_eventSBZOnHogTied_Parms Parms; \
	Parms.Character=Character; \
	Parms.bHogTied=bHogTied ? true : false; \
	SBZOnHogTied.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnHogTiedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
