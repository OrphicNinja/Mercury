// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZSecurityCamera;
#ifdef STARBREEZE_SBZPlayerViewingChangedDelegate_generated_h
#error "SBZPlayerViewingChangedDelegate.generated.h already included, missing '#pragma once' in SBZPlayerViewingChangedDelegate.h"
#endif
#define STARBREEZE_SBZPlayerViewingChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPlayerViewingChangedDelegate_h_7_DELEGATE \
struct _Script_Starbreeze_eventSBZPlayerViewingChanged_Parms \
{ \
	ASBZSecurityCamera* Camera; \
	bool bIsViewTarget; \
	bool bIsLocalPlayer; \
}; \
static inline void FSBZPlayerViewingChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZPlayerViewingChanged, ASBZSecurityCamera* Camera, bool bIsViewTarget, bool bIsLocalPlayer) \
{ \
	_Script_Starbreeze_eventSBZPlayerViewingChanged_Parms Parms; \
	Parms.Camera=Camera; \
	Parms.bIsViewTarget=bIsViewTarget ? true : false; \
	Parms.bIsLocalPlayer=bIsLocalPlayer ? true : false; \
	SBZPlayerViewingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPlayerViewingChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
