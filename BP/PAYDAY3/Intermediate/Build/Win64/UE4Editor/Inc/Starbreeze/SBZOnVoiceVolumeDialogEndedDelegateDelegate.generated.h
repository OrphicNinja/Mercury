// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDialogEndedReason : uint8;
#ifdef STARBREEZE_SBZOnVoiceVolumeDialogEndedDelegateDelegate_generated_h
#error "SBZOnVoiceVolumeDialogEndedDelegateDelegate.generated.h already included, missing '#pragma once' in SBZOnVoiceVolumeDialogEndedDelegateDelegate.h"
#endif
#define STARBREEZE_SBZOnVoiceVolumeDialogEndedDelegateDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZOnVoiceVolumeDialogEndedDelegateDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventSBZOnVoiceVolumeDialogEndedDelegate_Parms \
{ \
	ESBZDialogEndedReason Reason; \
}; \
static inline void FSBZOnVoiceVolumeDialogEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SBZOnVoiceVolumeDialogEndedDelegate, ESBZDialogEndedReason Reason) \
{ \
	_Script_Starbreeze_eventSBZOnVoiceVolumeDialogEndedDelegate_Parms Parms; \
	Parms.Reason=Reason; \
	SBZOnVoiceVolumeDialogEndedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZOnVoiceVolumeDialogEndedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
