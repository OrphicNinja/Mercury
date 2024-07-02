// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerState;
#ifdef STARBREEZE_SBZOnInfamyLevelChangedDynamicDelegate_generated_h
#error "SBZOnInfamyLevelChangedDynamicDelegate.generated.h already included, missing '#pragma once' in SBZOnInfamyLevelChangedDynamicDelegate.h"
#endif
#define STARBREEZE_SBZOnInfamyLevelChangedDynamicDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnInfamyLevelChangedDynamicDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZOnInfamyLevelChangedDynamic_Parms \
{ \
	ASBZPlayerState* PlayerState; \
}; \
static inline void FSBZOnInfamyLevelChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& SBZOnInfamyLevelChangedDynamic, ASBZPlayerState* PlayerState) \
{ \
	_Script_Starbreeze_eventSBZOnInfamyLevelChangedDynamic_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	SBZOnInfamyLevelChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnInfamyLevelChangedDynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
