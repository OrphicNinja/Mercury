// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMissionEndDelegateDelegate_generated_h
#error "SBZMissionEndDelegateDelegate.generated.h already included, missing '#pragma once' in SBZMissionEndDelegateDelegate.h"
#endif
#define STARBREEZE_SBZMissionEndDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMissionEndDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZMissionEndDelegate_Parms \
{ \
	int32 OutroVariation; \
}; \
static inline void FSBZMissionEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZMissionEndDelegate, const int32 OutroVariation) \
{ \
	_Script_Starbreeze_eventSBZMissionEndDelegate_Parms Parms; \
	Parms.OutroVariation=OutroVariation; \
	SBZMissionEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMissionEndDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
