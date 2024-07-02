// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCameraState : uint8;
#ifdef STARBREEZE_SBZ_BPOnCameraStateChangedDelegate_generated_h
#error "SBZ_BPOnCameraStateChangedDelegate.generated.h already included, missing '#pragma once' in SBZ_BPOnCameraStateChangedDelegate.h"
#endif
#define STARBREEZE_SBZ_BPOnCameraStateChangedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZ_BPOnCameraStateChangedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZ_BPOnCameraStateChanged_Parms \
{ \
	ESBZCameraState OldState; \
	ESBZCameraState NewState; \
}; \
static inline void FSBZ_BPOnCameraStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SBZ_BPOnCameraStateChanged, ESBZCameraState OldState, ESBZCameraState NewState) \
{ \
	_Script_Starbreeze_eventSBZ_BPOnCameraStateChanged_Parms Parms; \
	Parms.OldState=OldState; \
	Parms.NewState=NewState; \
	SBZ_BPOnCameraStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZ_BPOnCameraStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
