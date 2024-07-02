// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZOnRenownLevelChangedDelegateDelegate_generated_h
#error "SBZOnRenownLevelChangedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnRenownLevelChangedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnRenownLevelChangedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnRenownLevelChangedDelegateDelegate_h_5_DELEGATE \
struct _Script_Starbreeze_eventSBZOnRenownLevelChangedDelegate_Parms \
{ \
	int32 NewLevel; \
	int32 PreviousLevel; \
}; \
static inline void FSBZOnRenownLevelChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnRenownLevelChangedDelegate, int32 NewLevel, int32 PreviousLevel) \
{ \
	_Script_Starbreeze_eventSBZOnRenownLevelChangedDelegate_Parms Parms; \
	Parms.NewLevel=NewLevel; \
	Parms.PreviousLevel=PreviousLevel; \
	SBZOnRenownLevelChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnRenownLevelChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
