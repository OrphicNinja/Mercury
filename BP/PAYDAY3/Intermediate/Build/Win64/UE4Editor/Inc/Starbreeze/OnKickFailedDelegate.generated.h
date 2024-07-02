// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZKickingError : uint8;
#ifdef STARBREEZE_OnKickFailedDelegate_generated_h
#error "OnKickFailedDelegate.generated.h already included, missing '#pragma once' in OnKickFailedDelegate.h"
#endif
#define STARBREEZE_OnKickFailedDelegate_generated_h

#define PAYDAY3_Source_Starbreeze_Public_OnKickFailedDelegate_h_6_DELEGATE \
struct _Script_Starbreeze_eventOnKickFailed_Parms \
{ \
	ESBZKickingError KickingError; \
}; \
static inline void FOnKickFailed_DelegateWrapper(const FMulticastScriptDelegate& OnKickFailed, ESBZKickingError KickingError) \
{ \
	_Script_Starbreeze_eventOnKickFailed_Parms Parms; \
	Parms.KickingError=KickingError; \
	OnKickFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_OnKickFailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
