// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZShoutTargetComponent;
class APawn;
#ifdef STARBREEZE_SBZShoutedAtDelegateDelegate_generated_h
#error "SBZShoutedAtDelegateDelegate.generated.h already included, missing '#pragma once' in SBZShoutedAtDelegateDelegate.h"
#endif
#define STARBREEZE_SBZShoutedAtDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZShoutedAtDelegateDelegate_h_8_DELEGATE \
struct _Script_Starbreeze_eventSBZShoutedAtDelegate_Parms \
{ \
	USBZShoutTargetComponent* ShoutTarget; \
	APawn* Shouter; \
}; \
static inline void FSBZShoutedAtDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZShoutedAtDelegate, USBZShoutTargetComponent* ShoutTarget, APawn* Shouter) \
{ \
	_Script_Starbreeze_eventSBZShoutedAtDelegate_Parms Parms; \
	Parms.ShoutTarget=ShoutTarget; \
	Parms.Shouter=Shouter; \
	SBZShoutedAtDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZShoutedAtDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
